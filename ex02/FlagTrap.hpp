/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarius- <sdarius-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:27:22 by sdarius-          #+#    #+#             */
/*   Updated: 2026/11/14 12:34:32 by sdarius-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"


class FlagTrap : public ClapTrap
{
public:
	FlagTrap(const std::string &name);
	~FlagTrap();
	FlagTrap(const FlagTrap& other);
	FlagTrap& operator=(const FlagTrap& other);

	void 	highFivesGuys(void);
};
