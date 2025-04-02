/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:35:26 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/02 15:18:23 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat& operator=(const WrongCat &copy);
    ~WrongCat();

    int makeSound() const;

    std::string getType() const;

};

#endif