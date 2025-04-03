/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:41:11 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/03 18:53:31 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        delete this->brain;
        this->brain = new Brain(*copy.brain);
        this->type = copy.type;
    }
    return *this;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

int Cat::makeSound() const
{
    std::cout << type << " is meowing!" << std::endl;
    return 0;
}

std::string Cat::getType() const
{
    return type;
}
