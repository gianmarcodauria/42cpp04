/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:34:33 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/03 18:50:14 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        delete this->brain;
        this->brain = new Brain(*copy.brain);
        this->type = copy.type;
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
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