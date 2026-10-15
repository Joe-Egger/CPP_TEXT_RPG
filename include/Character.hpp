#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character 
{
    public:
        Character(const std::string& aName = "Fluffy", int aMaxLives = 9, int aMaxHP = 10, int aMaxLevel = 10);
        ~Character();

        // Getters for stats
        const std::string& GetName() const;
        int GetLives() const;
        int GetMaxLives() const;
        int GetHP() const;
        int GetMaxHP() const;
        int GetLevel() const;
        int GetMaxLevel() const;
        int GetGold() const;

        // Getters for actions
        void TakeDamage(int aAmount);
        void RestoreLives(int aAmount);
        void RestoreHP(int aAmount);
        void AddGold(int aAmount);
        void SubtractGold(int aAmount);
        void LevelUp();

    private:
        std::string mName;
        int mLives;
        int mMaxLives;
        int mHP;
        int mMaxHP;
        int mLevel;
        int mMaxLevel;
        int mGold;
    };

#endif