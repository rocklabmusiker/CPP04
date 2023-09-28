/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:35:05 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 19:05:17 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria()
{
    std :: cout << "AMateria default constructor" <<  std :: endl;
}

AMateria  :: AMateria(const AMateria &obj)
{
    type = obj.type;
    std :: cout << "AMateria copy constructor" <<  std :: endl;
}
AMateria  :: AMateria(std::string const & type)
{
    this->type = type;
    std :: cout << "AMateria parametized constructor" <<  std :: endl;
}
std::string const & AMateria ::  getType() const
{
    return (type);
}
void AMateria ::  use(ICharacter& target)
{
    
}
AMateria :: ~AMateria()
{
    std :: cout << "AMateria destructor" <<  std :: endl;
}