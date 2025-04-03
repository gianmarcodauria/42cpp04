/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:21:07 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/03 18:59:38 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* animals[8];

    for (int i = 0; i < 4; i++)
        animals[i] = new Dog();

    std::cout << " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX " << std::endl;
    for (int i = 4; i < 8; i++)
        animals[i] = new Cat();


    std::cout << " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX " << std::endl;

    for (int i = 0; i < 8; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}