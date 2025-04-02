/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:21:07 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:21:35 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    //const WrongAnimal* secMeta = new WrongAnimal();
    //const WrongAnimal* y = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    //std::cout << y->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    //secMeta->makeSound();
    //y->makeSound();
    

    delete meta;
    delete i;
    delete j;
    //delete y;
    //delete secMeta;

    return 0;
}