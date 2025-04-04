/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:21:07 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/04 15:32:16 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Dog dog1;
    Cat cat1;
    //AAnimal animal;
    
    std::cout << " ------------------------------------------------------------------ " << std::endl;

    
    dog1.getBrain()->assignIdea(0, "Follow the smell");
    cat1.getBrain()->assignIdea(0, "Catch the mouse");

    Dog dog2 = dog1;
    Cat cat2 = cat1;

    std::cout << " ------------------------------------------------------------------ " << std::endl;
    
    std::cout << "Dog1(idea): Dog wants to " << dog1.getBrain()->takeIdea(0) << std::endl;
    std::cout << "Dog2(idea): Dog wants to " << dog2.getBrain()->takeIdea(0) << std::endl;

    std::cout << " ------------------------------------------------------------------ " << std::endl;

    std::cout << "Cat1(idea): Cat wants to " << cat1.getBrain()->takeIdea(0) << std::endl;
    std::cout << "Cat2(idea): Cat wants to " << cat2.getBrain()->takeIdea(0) << std::endl;

    std::cout << " ------------------------------------------------------------------ " << std::endl;

    //dog1.makeSound();
    //cat2.makeSound();

    std::cout << " ------------------------------------------------------------------ " << std::endl;

    return 0;
}