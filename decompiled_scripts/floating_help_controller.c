void __EntryFunction__()
{
	unk_0x69BC3CC82D2BC993();
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
	while (iVar0 < Global_97904)
	{
		if (Global_97904[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x3EAC9995EC220C5A() > Global_97904[iVar0 /*28*/].f_21 && Global_97904[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xFA40EE73003A9B13(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_97904[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xB56FEBC510E7E9DE(Global_97904[iVar0 /*28*/].f_27, 0))
					{
						Global_97904[iVar0 /*28*/].f_21 = (Global_97904[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x5CB0A4A4240C1B6A() * 1000f)));
						if (unk_0x18F18E9D6B971A81(iVar1))
						{
							unk_0x573691DB812DC8AA(&(Global_97904[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_97904[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_97904[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x0B6E83A9A7ED3EBA(Global_97904[iVar0 /*28*/].f_23))
						{
							if (!unk_0xB56FEBC510E7E9DE(Global_97904[iVar0 /*28*/].f_27, 3))
							{
								unk_0xDB1FEF3AA01F991B(iVar1, unk_0x03C14E8A9400F2A9(Global_97904[iVar0 /*28*/].f_23, Global_97904[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xCCD35461A846EB00(iVar1, Global_97904[iVar0 /*28*/].f_23, Global_97904[iVar0 /*28*/].f_24, Global_97904[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_97904[iVar0 /*28*/].f_24 != 0f || Global_97904[iVar0 /*28*/].f_24.f_1 != 0f) || Global_97904[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xDB1FEF3AA01F991B(iVar1, Global_97904[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x7D526C07194BD51A(iVar1, Global_97904[iVar0 /*28*/].f_24, Global_97904[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x3EAC9995EC220C5A() - Global_97904[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_97904[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_97904[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_97904[iParam0 /*28*/].f_4), "", 64);
	Global_97904[iParam0 /*28*/].f_23 = 0;
	Global_97904[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_97904[iParam0 /*28*/].f_27 = 0;
	Global_97904[iParam0 /*28*/].f_20 = 0;
	Global_97904[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x35D1CAD6ADAB6491(&(Global_97904[iParam0 /*28*/]), "") && !unk_0x9D14A941038EF8A3(&(Global_97904[iParam0 /*28*/])))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_97904[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_97904[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_97904[iParam0 /*28*/]), &(Global_97904[iParam0 /*28*/].f_4), Global_97904[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_97904[iParam0 /*28*/]), &(Global_97904[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xB56FEBC510E7E9DE(Global_97904[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_97904[iParam0 /*28*/]), Global_97904[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_97904[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0xBA89110203C50939(uParam1);
	return unk_0x62881E3F5F311834((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0xBA89110203C50939(uParam1);
	unk_0xA50C1D6E503AA51E(uParam2);
	return unk_0x62881E3F5F311834((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0xBA89110203C50939(uParam1);
	unk_0x703D2B4B1C7E10B6(uParam2);
	return unk_0x62881E3F5F311834((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xBA89110203C50939(uParam1);
	unk_0x703D2B4B1C7E10B6(uParam2);
	unk_0xA50C1D6E503AA51E(uParam3);
	return unk_0x62881E3F5F311834((1 + iParam0));
}

