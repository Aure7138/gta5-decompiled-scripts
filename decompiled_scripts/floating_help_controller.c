void __EntryFunction__()
{
	unk_0xC1A27D367CCA8C15();
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
	while (iVar0 < Global_103872)
	{
		if (Global_103872[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x105601648511CC64() > Global_103872[iVar0 /*28*/].f_21 && Global_103872[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x7A4219270DF1663F(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_103872[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_103872[iVar0 /*28*/].f_27, 0))
					{
						Global_103872[iVar0 /*28*/].f_21 = (Global_103872[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x11F9F9006143871A() * 1000f)));
						if (unk_0x23B133A41F418EDC(iVar1))
						{
							unk_0xF0059F27F7BB6680(&(Global_103872[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_103872[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_103872[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(Global_103872[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0xFA30DFD0084E92FE(Global_103872[iVar0 /*28*/].f_27, 3))
							{
								unk_0x2787A88780067390(iVar1, unk_0xA4455714F3DCE207(Global_103872[iVar0 /*28*/].f_23, Global_103872[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x9DFEFB617DC467A9(iVar1, Global_103872[iVar0 /*28*/].f_23, Global_103872[iVar0 /*28*/].f_24, Global_103872[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_103872[iVar0 /*28*/].f_24 != 0f || Global_103872[iVar0 /*28*/].f_24.f_1 != 0f) || Global_103872[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x2787A88780067390(iVar1, Global_103872[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x776325384BDC7376(iVar1, Global_103872[iVar0 /*28*/].f_24, Global_103872[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x105601648511CC64() - Global_103872[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_103872[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103872[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103872[iParam0 /*28*/].f_4), "", 64);
	Global_103872[iParam0 /*28*/].f_23 = 0;
	Global_103872[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103872[iParam0 /*28*/].f_27 = 0;
	Global_103872[iParam0 /*28*/].f_20 = 0;
	Global_103872[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x3362CDE8460ED38B(&(Global_103872[iParam0 /*28*/]), "") && !unk_0xEAEFBBEC1AEA464B(&(Global_103872[iParam0 /*28*/])))
	{
		if (unk_0xFA30DFD0084E92FE(Global_103872[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Global_103872[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_103872[iParam0 /*28*/]), &(Global_103872[iParam0 /*28*/].f_4), Global_103872[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_103872[iParam0 /*28*/]), &(Global_103872[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_103872[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_103872[iParam0 /*28*/]), Global_103872[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_103872[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xF07D20149ECBC61E(uParam1);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xF07D20149ECBC61E(uParam1);
	unk_0xAA5C5BF0489E5553(uParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xF07D20149ECBC61E(uParam1);
	unk_0xC9C304D0AABE1335(uParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xF07D20149ECBC61E(uParam1);
	unk_0xC9C304D0AABE1335(uParam2);
	unk_0xAA5C5BF0489E5553(uParam3);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

