void __EntryFunction__()
{
	unk_0x3D0EAC6385DD6100();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_96008)
	{
		if (Global_96008[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x4F67E8ECA7D3F667() > Global_96008[iVar0 /*28*/].f_21 && Global_96008[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x393FC215FEC6D8F1(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_96008[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x4ED6CFDFE8D4131A(Global_96008[iVar0 /*28*/].f_27, 0))
					{
						Global_96008[iVar0 /*28*/].f_21 = (Global_96008[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x5E72022914CE3C38() * 1000f)));
						if (unk_0x394C9796228F0C89(iVar1))
						{
							unk_0xF73FBE4845C43B5B(&(Global_96008[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_96008[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_96008[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x7D5B1F88E7504BBA(Global_96008[iVar0 /*28*/].f_23))
						{
							if (!unk_0x4ED6CFDFE8D4131A(Global_96008[iVar0 /*28*/].f_27, 3))
							{
								unk_0xADE1029D18F3F7B5(iVar1, unk_0xC899C78DB72CCBCC(Global_96008[iVar0 /*28*/].f_23, Global_96008[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x2E4F4265906D891E(iVar1, Global_96008[iVar0 /*28*/].f_23, Global_96008[iVar0 /*28*/].f_24, Global_96008[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_96008[iVar0 /*28*/].f_24 != 0f || Global_96008[iVar0 /*28*/].f_24.f_1 != 0f) || Global_96008[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xADE1029D18F3F7B5(iVar1, Global_96008[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xA7E4DCE2E4DE68C5(iVar1, Global_96008[iVar0 /*28*/].f_24, Global_96008[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x4F67E8ECA7D3F667() - Global_96008[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_96008[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96008[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96008[iParam0 /*28*/].f_4), "", 64);
	Global_96008[iParam0 /*28*/].f_23 = 0;
	Global_96008[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96008[iParam0 /*28*/].f_27 = 0;
	Global_96008[iParam0 /*28*/].f_20 = 0;
	Global_96008[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xD3852F22AB713A1F(&(Global_96008[iParam0 /*28*/]), "") && !unk_0x602102324604D96B(&(Global_96008[iParam0 /*28*/])))
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_96008[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_96008[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_96008[iParam0 /*28*/]), &(Global_96008[iParam0 /*28*/].f_4), Global_96008[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_96008[iParam0 /*28*/]), &(Global_96008[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(Global_96008[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_96008[iParam0 /*28*/]), Global_96008[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_96008[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x7130CFD8526145CA(uParam1);
	return unk_0x6DF1648C223C3A9D((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x7130CFD8526145CA(uParam1);
	unk_0xF00CED653959DE03(uParam2);
	return unk_0x6DF1648C223C3A9D((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x7130CFD8526145CA(uParam1);
	unk_0x734AB59A7DBD1DAA(uParam2);
	return unk_0x6DF1648C223C3A9D((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x7130CFD8526145CA(uParam1);
	unk_0x734AB59A7DBD1DAA(uParam2);
	unk_0xF00CED653959DE03(uParam3);
	return unk_0x6DF1648C223C3A9D((1 + iParam0));
}

