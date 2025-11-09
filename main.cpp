#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"
#include <iostream>
#include <iomanip> // Pour std::fixed et std::setprecision si nécessaire

int main() {
    // Optionnel: pour un affichage numérique plus propre
    // std::cout << std::fixed << std::setprecision(3);

    Print("--- Initialisation ---");
    Point2f p1 = MakeP2f(2.0f, 3.0f);
    Vector2f v1 = MakeV2f(1.0f, -1.0f);
    Print("Point P1:", p1); // Utilise la surcharge ToString(Point2f)
    Print("Vecteur V1:", v1); // Utilise la surcharge ToString(Vector2f)

    Print("\n--- Opérations sur les Points ---");
    Point2f p2 = Translate(p1, v1);
    Print("P1 translaté par V1 (P2):", p2);

    Point2f p3 = Scale(p1, 2.0f, 0.5f);
    Print("P1 mis à l'échelle (sx=2, sy=0.5) (P3):", p3);

    Point2f p4 = Rotate(p1, 90.0f);
    Print("P1 tourné de 90 deg (P4):", p4);

    Print("\n--- Opérations sur les Vecteurs ---");
    Vector2f v2 = MakeV2f(p1, p2);
    Print("Vecteur de P1 à P2 (V2):", v2); // Devrait être identique à V1

    Vector2f v3 = Add(v1, v2);
    Print("Addition V1 + V2 (V3):", v3);

    Vector2f v4 = Normalize(v3);
    Print("Vecteur V3 normalisé (V4):", v4);
    Print("Longueur de V4:", Length(v4)); // Devrait être proche de 1.0

    Print("\n--- Fonctions scalaires et déterminant ---");
    Print("Produit scalaire V1 . V2:", Dot(v1, v2));
    Print("Déterminant V1, V2:", Determinant(v1, v2));

    Print("\n--- Interpolation Linéaire (Lerp) ---");
    Vector2f v_start = MakeV2f(0.0f, 0.0f);
    Vector2f v_end = MakeV2f(10.0f, 10.0f);
    Vector2f v_mid = Lerp(v_start, v_end, 0.5f);
    Print("Lerp(V_start, V_end, t=0.5):", v_mid);

    Print("\n--- Test des utilitaires Print/ToString génériques ---");
    std::vector<float> coords = {p1.x, p1.y, p2.x, p2.y};
    Print("Vecteur de floats:", coords);

    return 0;
}
