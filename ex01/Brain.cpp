/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:57:25 by gd-auria          #+#    #+#             */
/*   Updated: 2025/04/03 18:38:36 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructed" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Copying Brain" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i]; 
}

Brain& Brain::operator=(const Brain& copy)
{
    std::cout << "Assigning Brain" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
    }
    return *this;
}

void Brain::assignIdea(int i, const std::string& idea)
{
    if (i >= 0 && i < 100)
        ideas[i] = idea;
}

std::string Brain::takeIdea(int i) const
{
    if (i >= 0 && i < 100)
        return ideas[i];
    return "";
}