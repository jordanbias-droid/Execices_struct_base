# Execices_struct_base
Projet Géométrie 
Ce projet est une bibliothèque simple en C++ pour la manipulation de points et de vecteurs , ainsi que des utilitaires de base pour l'affichage.
Structure du projet
Les fichiers d'en-tête (.h) sont regroupés dans un dossier geometry/. Les fichiers d'implémentation (.cpp correspondants qui contiennent les fonctions) sont supposés exister au même niveau ou dans un répertoire source.

src/
├── geometry/
│   ├── point.h
│   ├── vector.h
│   └── utils.h
├── main.cpp
└── README.md

Fichiers sources et fonctionnalités principales
geometry/point.h et Implémentation
Gère la structure Point2f.

    Création : MakeP2f, MakeNullPoint.
    Transformations : Translate, Scale, Rotate.
    Comparaison/Affichage : Egal, Different, ToString.

geometry/vector.h et Implémentation
Gère la structure Vector2f.

    Création : MakeV2f, MakeNullVector.
    Opérations de base : Add, Sub, Scale.
    Propriétés : Dot (produit scalaire), Length (longueur), Normalize (normalisation), Determinant.
    Fonctions avancées : Lerp (interpolation linéaire).
    Comparaison/Affichage : Egal, Different, ToString.

geometry/utils.h
Fournit des fonctions utilitaires template pour simplifier l'affichage (Print) et la conversion en chaîne de caractères (ToString), supportant les types de base, std::vector, et std::map.
Compilation et exécution
Ce projet nécessite un compilateur C++ supportant C++11 ou supérieur.
Pour compiler, vous devez lier tous les fichiers d'implémentation (.cpp):
bash

# Exemple avec g++ (en supposant point.cpp et vector.cpp existent)
g++ main.cpp geometry/point.cpp geometry/vector.cpp -o GeometryApp

# Exécution
./GeometryApp

Utilisez le code avec précaution.
Exemple d'utilisation (Extrait de main.cpp)
Le fichier main.cpp inclus fournit un exemple complet montrant l'utilisation de toutes les fonctions principales :
cpp

// Exemple d'utilisation dans main.cpp
int main() {
    Point2f p1 = MakeP2f(2.0f, 3.0f);
    Vector2f v1 = MakeV2f(1.0f, -1.0f);
    Print("Point P1:", p1);
    
    Point2f p2 = Translate(p1, v1);
    Print("P1 translaté par V1 (P2):", p2);

    Print("Longueur de V1:", Length(v1));
    // ... plus d'exemples ...
}

Utilisez le code avec précaution.
