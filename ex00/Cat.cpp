/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:41:11 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:22:45 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type()
{
    type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

Cat::~Cat()
{
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
