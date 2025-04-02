/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:49:19 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:08:44 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
    this->type = copy.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}


int WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal DOES NOT MAKE A SOUND BECAUSE IS WRONG" << std::endl;
    return 0;
}

std::string WrongAnimal::getType() const
{
    return type;
}