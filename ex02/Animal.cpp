/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:49:19 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:01:59 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    this->type = copy.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}


int Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
    return 0;
}

std::string Animal::getType() const
{
    return type;
}