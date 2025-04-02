/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:30:21 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:16:32 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
  protected:
    std::string type;
  public:
    Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog &copy);
    ~Dog();

    virtual int makeSound() const;

    std::string getType() const;

};

#endif