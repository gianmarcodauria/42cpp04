/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:24:01 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/04 14:53:03 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
  protected:
    std::string type;
  public:
    AAnimal();
    AAnimal(const AAnimal &copy);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal &copy);

    virtual int makeSound() const = 0;

    virtual std::string getType() const = 0; 

};

#endif