#pragma once
//抽象的能力类
class IAbility
{
public:
	virtual void use() = 0;
	virtual void afterUse();
};

//抽象的能力装饰类
class AbilityDecorate :public IAbility
{
protected:
	IAbility* pAbility;
public:
	AbilityDecorate(IAbility* ability);
};

