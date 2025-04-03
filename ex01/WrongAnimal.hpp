/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:24:01 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:20:42 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal &copy);

    virtual int makeSound() const;

    virtual std::string getType() const; 

};

#endif