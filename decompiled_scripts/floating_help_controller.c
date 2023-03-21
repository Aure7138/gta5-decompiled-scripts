void __EntryFunction__()
{
	unk_0x0A2FDF6E490B25B3();
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
	while (iVar0 < Global_110212)
	{
		if (Global_110212[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x9B35D07DCD0F0B43() > Global_110212[iVar0 /*28*/].f_21 && Global_110212[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xE845A888B98DD9F6(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110212[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_110212[iVar0 /*28*/].f_27, 0))
					{
						Global_110212[iVar0 /*28*/].f_21 = (Global_110212[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x9927BD5F023FA79D() * 1000f)));
						if (unk_0x20C24C4EB609C2CE(iVar1))
						{
							unk_0xA1E7A40E1F56E511(&(Global_110212[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_110212[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_110212[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xF4B969E0807E76C7(Global_110212[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xA2BC31158C8CEFD2(Global_110212[iVar0 /*28*/].f_27, 3))
							{
								unk_0x8E77922A0BF2EE70(iVar1, unk_0xC12F91346EA13947(Global_110212[iVar0 /*28*/].f_23, Global_110212[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xE381595E230E5B78(iVar1, Global_110212[iVar0 /*28*/].f_23, Global_110212[iVar0 /*28*/].f_24, Global_110212[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_110212[iVar0 /*28*/].f_24 != 0f || Global_110212[iVar0 /*28*/].f_24.f_1 != 0f) || Global_110212[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x8E77922A0BF2EE70(iVar1, Global_110212[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x068B16ED237B3455(iVar1, Global_110212[iVar0 /*28*/].f_24, Global_110212[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x9B35D07DCD0F0B43() - Global_110212[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_110212[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110212[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110212[iParam0 /*28*/].f_4), "", 64);
	Global_110212[iParam0 /*28*/].f_23 = 0;
	Global_110212[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110212[iParam0 /*28*/].f_27 = 0;
	Global_110212[iParam0 /*28*/].f_20 = 0;
	Global_110212[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x2553916E420E8EF0(&(Global_110212[iParam0 /*28*/]), "") && !unk_0x79FCE4565761C974(&(Global_110212[iParam0 /*28*/])))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_110212[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_110212[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_110212[iParam0 /*28*/]), &(Global_110212[iParam0 /*28*/].f_4), Global_110212[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110212[iParam0 /*28*/]), &(Global_110212[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_110212[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_110212[iParam0 /*28*/]), Global_110212[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110212[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x1EF54B101C71E009(uParam1);
	return unk_0xFA637652FFB4E2E5((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x1EF54B101C71E009(uParam1);
	unk_0x6A8B3CC08A759F44(uParam2);
	return unk_0xFA637652FFB4E2E5((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x1EF54B101C71E009(uParam1);
	unk_0x0AC9F8E1AFCEC860(uParam2);
	return unk_0xFA637652FFB4E2E5((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x1EF54B101C71E009(uParam1);
	unk_0x0AC9F8E1AFCEC860(uParam2);
	unk_0x6A8B3CC08A759F44(uParam3);
	return unk_0xFA637652FFB4E2E5((1 + iParam0));
}

