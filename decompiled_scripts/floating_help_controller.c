void __EntryFunction__()
{
	unk_0x15378F974E08496E();
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
	while (iVar0 < Global_97585)
	{
		if (Global_97585[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x48E480685981C7D4() > Global_97585[iVar0 /*28*/].f_21 && Global_97585[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x88BC2C534DB4793B(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_97585[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x236D8AD7EE179F46(Global_97585[iVar0 /*28*/].f_27, 0))
					{
						Global_97585[iVar0 /*28*/].f_21 = (Global_97585[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x8D51D24D214E2FF2() * 1000f)));
						if (unk_0xD106B7BA76BA44D7(iVar1))
						{
							unk_0xF3148AAF69AF9CBC(&(Global_97585[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_97585[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_97585[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x930F8FBB8E9537CC(Global_97585[iVar0 /*28*/].f_23))
						{
							if (!unk_0x236D8AD7EE179F46(Global_97585[iVar0 /*28*/].f_27, 3))
							{
								unk_0xD6243E74CA965AEB(iVar1, unk_0xB07F27EC3B05E4EA(Global_97585[iVar0 /*28*/].f_23, Global_97585[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xA9212026665C415B(iVar1, Global_97585[iVar0 /*28*/].f_23, Global_97585[iVar0 /*28*/].f_24, Global_97585[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_97585[iVar0 /*28*/].f_24 != 0f || Global_97585[iVar0 /*28*/].f_24.f_1 != 0f) || Global_97585[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xD6243E74CA965AEB(iVar1, Global_97585[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xFA38466CC2A21818(iVar1, Global_97585[iVar0 /*28*/].f_24, Global_97585[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x48E480685981C7D4() - Global_97585[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_97585[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_97585[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_97585[iParam0 /*28*/].f_4), "", 64);
	Global_97585[iParam0 /*28*/].f_23 = 0;
	Global_97585[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_97585[iParam0 /*28*/].f_27 = 0;
	Global_97585[iParam0 /*28*/].f_20 = 0;
	Global_97585[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xD994929E13CC1ED5(&(Global_97585[iParam0 /*28*/]), "") && !unk_0x4357449749A521B1(&(Global_97585[iParam0 /*28*/])))
	{
		if (unk_0x236D8AD7EE179F46(Global_97585[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x236D8AD7EE179F46(Global_97585[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_97585[iParam0 /*28*/]), &(Global_97585[iParam0 /*28*/].f_4), Global_97585[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_97585[iParam0 /*28*/]), &(Global_97585[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_97585[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_97585[iParam0 /*28*/]), Global_97585[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_97585[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xF7F787102FC9BCAC(uParam1);
	return unk_0xEF468B98099969A5((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xF7F787102FC9BCAC(uParam1);
	unk_0x6D55FF05D62B91BC(uParam2);
	return unk_0xEF468B98099969A5((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xF7F787102FC9BCAC(uParam1);
	unk_0x072D7B028D6C7A05(uParam2);
	return unk_0xEF468B98099969A5((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xF7F787102FC9BCAC(uParam1);
	unk_0x072D7B028D6C7A05(uParam2);
	unk_0x6D55FF05D62B91BC(uParam3);
	return unk_0xEF468B98099969A5((1 + iParam0));
}

