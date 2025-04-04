/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:35:26 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/04 15:20:19 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public AAnimal
{
  private:
    Brain *brain;
  protected:
    std::string type;
  public:
    Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat &copy);
    ~Cat();

    int makeSound() const;

    std::string getType() const;
    Brain* getBrain() const;

};

#endif