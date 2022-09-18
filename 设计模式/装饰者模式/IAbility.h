#pragma once
//�����������
class IAbility
{
public:
	virtual void use() = 0;
	virtual void afterUse();
};

//���������װ����
class AbilityDecorate :public IAbility
{
protected:
	IAbility* pAbility;
public:
	AbilityDecorate(IAbility* ability);
};

