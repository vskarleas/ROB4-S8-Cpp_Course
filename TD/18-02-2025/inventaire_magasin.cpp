// Implementer un programme en C++ qui permet de gerer l'inventaire d'un magasin en utilisant std::vector, std:set et std::map.

// Stocker les articles disponibles: Utilised un std::set<std::string> pour gerer un eliste uniques des produits disponibles en magasin.

// Gereer le stock de chaque article: Utilisez un srd::map<std::string, int> pour associer chaque article à sa quantite en stock.

// Enregistere rles ventes: Utilisez un std::vector<std::pair<std::string, int>> pour enregistrer les articles vendus et leur quantite.

// Ajouter un article au stock (dans std::set et std::map)
// Vendre un article (mettre a jour std::map et ajouter l'entree dans
// Afficher l'ettat du stock
// Afficher l'historique des ventes

#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <utility>

int main()
{
    // Initialisations
    std::set<std::string> available_products;
    available_products.insert("apple");
    available_products.insert("banana");
    available_products.insert("orange");

    std::map<std::string, int> stock;
    stock["apple"] = 10;
    stock["banana"] = 5;
    stock["orange"] = 3;

    std::vector<std::pair<std::string, int> > sales_history; // there is an important space

    while (true)
    {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add product to stock\n";
        std::cout << "2. Sell product\n";
        std::cout << "3. Display stock\n";
        std::cout << "4. Display sales history\n";
        std::cout << "5. Exit\n";

        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string product_name;
            int quantity;
            std::cout << "Enter product name: ";
            std::cin >> product_name;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;

            if (available_products.find(product_name) != available_products.end())
            {
                stock[product_name] += quantity;
            }
            else
            {
                available_products.insert(product_name);
                stock[product_name] = quantity;
            }
            break;
        }
        case 2:
        {
            std::string product_name;
            int quantity;
            std::cout << "Enter product name: ";
            std::cin >> product_name;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;

            if (stock[product_name] >= quantity)
            {
                stock[product_name] -= quantity;
                sales_history.push_back(std::make_pair(product_name, quantity));
            }
            else
            {
                std::cout << "Insufficient stock\n";
            }
            break;
        }
        case 3:
        {
            std::cout << "Stock:\n";
            std::map<std::string, int>::const_iterator it;
            for (it = stock.begin(); it != stock.end(); ++it)
            {
                std::cout << it->first << ": " << it->second << "\n";
            }
            break;
        }
        case 4:
        {
            std::cout << "Sales history:\n";
            std::vector<std::pair<std::string, int> >::const_iterator it;
            for (it = sales_history.begin(); it != sales_history.end(); ++it)
            {
                std::cout << it->first << " sold " << it->second << " items\n";
            }
            break;
        }
        case 5:
        {
            std::cout << "Exiting...\n";
            return 0;
        }
        default:
        {
            std::cout << "Invalid choice\n";
        }
        }
    }
}