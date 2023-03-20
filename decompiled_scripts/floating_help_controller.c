void __EntryFunction__()
{
	unk_0x60F2C6DC397A6833();
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
	while (iVar0 < Global_99808)
	{
		if (Global_99808[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xA0F74982C6AAA9D4() > Global_99808[iVar0 /*28*/].f_21 && Global_99808[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x7CFBFB3D7CFF8D13(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_99808[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xF426A5DE932B3BEE(Global_99808[iVar0 /*28*/].f_27, 0))
					{
						Global_99808[iVar0 /*28*/].f_21 = (Global_99808[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0xFF104D8C26C113A2() * 1000f)));
						if (unk_0x3B6CEDDC9D66A2B1(iVar1))
						{
							unk_0x26545538B51562AD(&(Global_99808[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_99808[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_99808[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x2006A8C1BA2AFE80(Global_99808[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xF426A5DE932B3BEE(Global_99808[iVar0 /*28*/].f_27, 3))
							{
								unk_0xA8D2C85108F88506(iVar1, unk_0xD7C4E2CB0B216852(Global_99808[iVar0 /*28*/].f_23, Global_99808[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xC2B96F2A3A574181(iVar1, Global_99808[iVar0 /*28*/].f_23, Global_99808[iVar0 /*28*/].f_24, Global_99808[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_99808[iVar0 /*28*/].f_24 != 0f || Global_99808[iVar0 /*28*/].f_24.f_1 != 0f) || Global_99808[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xA8D2C85108F88506(iVar1, Global_99808[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xB8E675430F88EFE3(iVar1, Global_99808[iVar0 /*28*/].f_24, Global_99808[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xA0F74982C6AAA9D4() - Global_99808[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_99808[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99808[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99808[iParam0 /*28*/].f_4), "", 64);
	Global_99808[iParam0 /*28*/].f_23 = 0;
	Global_99808[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_99808[iParam0 /*28*/].f_27 = 0;
	Global_99808[iParam0 /*28*/].f_20 = 0;
	Global_99808[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xC1C5B83BB6719C6C(&(Global_99808[iParam0 /*28*/]), "") && !unk_0x0275404839C0A19A(&(Global_99808[iParam0 /*28*/])))
	{
		if (unk_0xF426A5DE932B3BEE(Global_99808[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xF426A5DE932B3BEE(Global_99808[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4), Global_99808[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xF426A5DE932B3BEE(Global_99808[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_99808[iParam0 /*28*/]), Global_99808[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_99808[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x66F753896FC4EEC3(uParam1);
	return unk_0xF2DBEB09EBAED1D6((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x66F753896FC4EEC3(uParam1);
	unk_0x90805938ADF0F45C(uParam2);
	return unk_0xF2DBEB09EBAED1D6((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x66F753896FC4EEC3(uParam1);
	unk_0x2B088D6251C2080D(uParam2);
	return unk_0xF2DBEB09EBAED1D6((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x66F753896FC4EEC3(uParam1);
	unk_0x2B088D6251C2080D(uParam2);
	unk_0x90805938ADF0F45C(uParam3);
	return unk_0xF2DBEB09EBAED1D6((1 + iParam0));
}

