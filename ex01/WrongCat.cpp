/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:41:11 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:18:46 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type()
{
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

int WrongCat::makeSound() const
{
    std::cout << type << " is NOT MEOWING BECAUSE IT IS WRONGCAT!" << std::endl;
    return 0;
}


std::string WrongCat::getType() const
{
    return type;
}