void __EntryFunction__()
{
	unk_0x11103F6657466FF8();
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
	while (iVar0 < Global_103091)
	{
		if (Global_103091[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x31CD6E9F83C10233() > Global_103091[iVar0 /*28*/].f_21 && Global_103091[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x9CEB47B3DB798328(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_103091[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x2A3398C6222EB190(Global_103091[iVar0 /*28*/].f_27, 0))
					{
						Global_103091[iVar0 /*28*/].f_21 = (Global_103091[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0xCD70DA50CCD55658() * 1000f)));
						if (unk_0xBBA7DE723F3E70BB(iVar1))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Global_103091[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_103091[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_103091[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x7A6C051038031EFA(Global_103091[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x2A3398C6222EB190(Global_103091[iVar0 /*28*/].f_27, 3))
							{
								unk_0x0F059DB70DA76432(iVar1, unk_0xCD59EF1D7098A4B4(Global_103091[iVar0 /*28*/].f_23, Global_103091[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xC5F76CB1048C7CA9(iVar1, Global_103091[iVar0 /*28*/].f_23, Global_103091[iVar0 /*28*/].f_24, Global_103091[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_103091[iVar0 /*28*/].f_24 != 0f || Global_103091[iVar0 /*28*/].f_24.f_1 != 0f) || Global_103091[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x0F059DB70DA76432(iVar1, Global_103091[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x7E299246B74800F6(iVar1, Global_103091[iVar0 /*28*/].f_24, Global_103091[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x31CD6E9F83C10233() - Global_103091[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_103091[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103091[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103091[iParam0 /*28*/].f_4), "", 64);
	Global_103091[iParam0 /*28*/].f_23 = 0;
	Global_103091[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103091[iParam0 /*28*/].f_27 = 0;
	Global_103091[iParam0 /*28*/].f_20 = 0;
	Global_103091[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xB3404E397FF56B3B(&(Global_103091[iParam0 /*28*/]), "") && !unk_0x996B09F758C57FBE(&(Global_103091[iParam0 /*28*/])))
	{
		if (unk_0x2A3398C6222EB190(Global_103091[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x2A3398C6222EB190(Global_103091[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_103091[iParam0 /*28*/]), &(Global_103091[iParam0 /*28*/].f_4), Global_103091[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_103091[iParam0 /*28*/]), &(Global_103091[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x2A3398C6222EB190(Global_103091[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_103091[iParam0 /*28*/]), Global_103091[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_103091[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x92C5C77953D80467(uParam1);
	return unk_0x602E6661A0F13A13((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x92C5C77953D80467(uParam1);
	unk_0x96577CAA1D1E72DB(uParam2);
	return unk_0x602E6661A0F13A13((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x92C5C77953D80467(uParam1);
	unk_0x7C8A7ECFBAD2C8C4(uParam2);
	return unk_0x602E6661A0F13A13((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x92C5C77953D80467(uParam1);
	unk_0x7C8A7ECFBAD2C8C4(uParam2);
	unk_0x96577CAA1D1E72DB(uParam3);
	return unk_0x602E6661A0F13A13((1 + iParam0));
}

