/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:34:33 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:23:26 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

int Dog::makeSound() const
{
    std::cout << type << " is barking!" << std::endl;
    return 0;
}

std::string Dog::getType() const
{
    return type;
}