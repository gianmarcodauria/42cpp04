/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:24:01 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/04 15:21:17 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
  protected:
    std::string type;
  public:
    Animal();
    Animal(const Animal &copy);
    virtual ~Animal();
    Animal& operator=(const Animal &copy);

    virtual int makeSound() const;

    virtual std::string getType() const; 

};

#endif