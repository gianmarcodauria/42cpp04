/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:49:19 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:01:59 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : type(copy.type)
{
    this->type = copy.type;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}


int AAnimal::makeSound() const
{
    std::cout << "AAnimal makes a sound" << std::endl;
    return 0;
}

std::string AAnimal::getType() const
{
    return type;
}