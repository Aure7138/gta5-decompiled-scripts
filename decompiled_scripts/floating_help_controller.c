void __EntryFunction__()
{
	unk_0x20A629A7D3DC97F2();
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
	while (iVar0 < Global_96093)
	{
		if (Global_96093[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x09560C7DE2A384BD() > Global_96093[iVar0 /*28*/].f_21 && Global_96093[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x0A0906BD8781AB7B(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_96093[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x889D01384B54BCE3(Global_96093[iVar0 /*28*/].f_27, 0))
					{
						Global_96093[iVar0 /*28*/].f_21 = (Global_96093[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x0C380BB05B91042D() * 1000f)));
						if (unk_0x1779AD2635FE91E4(iVar1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Global_96093[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_96093[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_96093[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xE44A580B551C3645(Global_96093[iVar0 /*28*/].f_23))
						{
							if (!unk_0x889D01384B54BCE3(Global_96093[iVar0 /*28*/].f_27, 3))
							{
								unk_0x49FC741DECBBF2CF(iVar1, unk_0xA783C6007920169C(Global_96093[iVar0 /*28*/].f_23, Global_96093[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x4D68000FC30D039E(iVar1, Global_96093[iVar0 /*28*/].f_23, Global_96093[iVar0 /*28*/].f_24, Global_96093[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_96093[iVar0 /*28*/].f_24 != 0f || Global_96093[iVar0 /*28*/].f_24.f_1 != 0f) || Global_96093[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x49FC741DECBBF2CF(iVar1, Global_96093[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x3B7C07B132D11AE7(iVar1, Global_96093[iVar0 /*28*/].f_24, Global_96093[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x09560C7DE2A384BD() - Global_96093[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_96093[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_96093[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_96093[iParam0 /*28*/].f_4), "", 64);
	Global_96093[iParam0 /*28*/].f_23 = 0;
	Global_96093[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_96093[iParam0 /*28*/].f_27 = 0;
	Global_96093[iParam0 /*28*/].f_20 = 0;
	Global_96093[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x9BA82E09A986BA4B(&(Global_96093[iParam0 /*28*/]), "") && !unk_0x8CD18E96F1984EE6(&(Global_96093[iParam0 /*28*/])))
	{
		if (unk_0x889D01384B54BCE3(Global_96093[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x889D01384B54BCE3(Global_96093[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_96093[iParam0 /*28*/]), &(Global_96093[iParam0 /*28*/].f_4), Global_96093[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_96093[iParam0 /*28*/]), &(Global_96093[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_96093[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_96093[iParam0 /*28*/]), Global_96093[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_96093[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x38DB30583B2DE025(uParam1);
	return unk_0x2DB019D515966DF9((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x38DB30583B2DE025(uParam1);
	unk_0x53B64327E3305DCB(uParam2);
	return unk_0x2DB019D515966DF9((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x38DB30583B2DE025(uParam1);
	unk_0x4498E0CBD76B2D72(uParam2);
	return unk_0x2DB019D515966DF9((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x38DB30583B2DE025(uParam1);
	unk_0x4498E0CBD76B2D72(uParam2);
	unk_0x53B64327E3305DCB(uParam3);
	return unk_0x2DB019D515966DF9((1 + iParam0));
}

