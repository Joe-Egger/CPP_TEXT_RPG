#include "Character.hpp"

Character::Character(const std::string& aName, int aMaxLives, int aMaxHP, int aMaxLevel)
    : mName(aName),
    mLives(aMaxLives),
    mMaxLives(aMaxLives),
    mHP(aMaxHP),
    mMaxHP(aMaxHP),
    mLevel(1),
    mMaxLevel(aMaxLevel),
    mGold(0)
{
}

Character::~Character()
{

}

const std::string& Character::GetName() const
{
    return mName;
}

int Character::GetLives() const
{
    return mLives;
}

int Character::GetMaxLives() const
{
    return mMaxLives;
}

int Character::GetHP() const
{
    return mHP;
}

int Character::GetMaxHP() const
{
    return mMaxHP;
}

int Character::GetLevel() const
{
    return mLevel;
}

int Character::GetMaxLevel() const
{
    return mMaxLevel;
}

int Character::GetGold() const
{
    return mGold;
}

void Character::TakeDamage(int aAmount)
{   
    if (aAmount <= 0 || mLives <= 0)
    {
        return;
    }
    mHP -= aAmount;
    if (mHP <= 0)
    {
        --mLives;

        if (mLives <= 0) {
            mHP = 0;
            // WINNING CONDITION
            return;
        }

        mHP = mMaxHP;
        // RESPAWN CONDITION

    }   
}

void Character::RestoreLives(int aAmount)
{
    if (aAmount <= 0)
    {
        return;
    }

    mLives += aAmount;

    if (mLives > mMaxLives)
    {
        mLives = mMaxLives;
    }
}

void Character::RestoreHP(int aAmount)
{
    if (aAmount <= 0 || mLives <= 0)
    {
        return;
    }

    mHP += aAmount;

    while (mHP > mMaxHP && mLives < mMaxLives)
    {
        mHP -= mMaxHP;
        ++mLives;
    }

    // Cannot exceed maximum HP or maximum lives.
    if (mLives == mMaxLives && mHP > mMaxHP)
    {
        mHP = mMaxHP;
    }
}

void Character::AddGold(int aAmount)
{
    if (aAmount <= 0)
    {
        return;
    }
    mGold += aAmount;
}

void Character::SubtractGold(int aAmount)
{
    if (aAmount <= 0)
    {
        return;
    }

    mGold -= aAmount;

    if (mGold < 0)
    {
        mGold = 0;
    }
}

void Character::LevelUp()
{
    if (mLevel >= mMaxLevel)
    {
        return;
    }

    ++mLevel;
    // GO THROUGH LEVEL UP STEPS LOGIC AND CHOICES
}