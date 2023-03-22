/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include <memory>
#include <string>
#include "IComponent.hpp"
#include "ISystemManager.hpp"

namespace Arcade {
    namespace Core {
        /**
         * @brief The IDisplayModule interface
         *
         * The IDisplayModule is passed to all systems
         */
        class IDisplayModule {
            public:
                virtual ~IDisplayModule() = default;
                /**
                 * @brief Get the system manager of the current graphical
                 * library
                 *
                 * @return The system manager of the current graphical library
                 */
                virtual ECS::ISystemManager &getSystemManager() = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * given graphical library
                 *
                 * @param libGraphicName The graphical library name (only the
                 * libname without .so)
                 *
                 * Throw on error
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose
                 *
                 */
                virtual void changeGraphicLib(
                const std::string &libGraphicName) = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * next one (in a cyclic way)
                 *
                 * (because the epitech subject says we can switch to the next
                 * graphical library in the folder of availible graphical
                 * library)
                 *
                 * Throw on error
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose
                 *
                 */
                virtual void changeGraphicLib() = 0;
                /**
                 * @brief Add a component to the current active graphical
                 * library
                 *
                 * @param component The component to add
                 */
                virtual void addComponent(
                std::shared_ptr<ECS::IComponent> component) = 0;
                /**
                 * @brief Remove a component from the current active graphical
                 * library
                 *
                 * @param componentId The component id to remove
                 */
                virtual void removeComponent(
                const std::string &componentId) = 0;
                /**
                 * @brief Get the component of the current active graphical
                 * library
                 *
                 * @param componentId The component id to get
                 *
                 * @return optional of the component id if found
                 */
                virtual std::optional<std::shared_ptr<ECS::IComponent>>
                getComponent(const std::string &componentId) const = 0;
        };
    } // namespace Core
} // namespace Arcade
