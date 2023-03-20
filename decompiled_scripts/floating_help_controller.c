void __EntryFunction__()
{
	unk_0x9243BAC96D64C050();
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
	while (iVar0 < Global_95829)
	{
		if (Global_95829[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x9CD27B0045628463() > Global_95829[iVar0 /*28*/].f_21 && Global_95829[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x50085246ABD3FEFA(iVar1, false);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_95829[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0xA921AA820C25702F(Global_95829[iVar0 /*28*/].f_27, 0))
					{
						Global_95829[iVar0 /*28*/].f_21 = (Global_95829[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x15C40837039FFAF7() * 1000f)));
						if (unk_0x2432784ACA090DA4(iVar1))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_95829[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_95829[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_95829[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x5F9532F3B5CC2551(Global_95829[iVar0 /*28*/].f_23))
						{
							if (!unk_0xA921AA820C25702F(Global_95829[iVar0 /*28*/].f_27, 3))
							{
								unk_0x784BA7E0ECEB4178(iVar1, unk_0x1899F328B0E12848(Global_95829[iVar0 /*28*/].f_23, Global_95829[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xB094BC1DB4018240(iVar1, Global_95829[iVar0 /*28*/].f_23, Global_95829[iVar0 /*28*/].f_24, Global_95829[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_95829[iVar0 /*28*/].f_24 != 0f || Global_95829[iVar0 /*28*/].f_24.f_1 != 0f) || Global_95829[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0x784BA7E0ECEB4178(iVar1, Global_95829[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0x7679CC1BCEBE3D4C(iVar1, Global_95829[iVar0 /*28*/].f_24, Global_95829[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x9CD27B0045628463() - Global_95829[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_95829[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_95829[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_95829[iParam0 /*28*/].f_4), "", 64);
	Global_95829[iParam0 /*28*/].f_23 = 0;
	Global_95829[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_95829[iParam0 /*28*/].f_27 = 0;
	Global_95829[iParam0 /*28*/].f_20 = 0;
	Global_95829[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x0C515FAB3FF9EA92(&(Global_95829[iParam0 /*28*/]), "") && !unk_0xF22B6C47C6EAB066(&(Global_95829[iParam0 /*28*/])))
	{
		if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4), Global_95829[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_95829[iParam0 /*28*/]), Global_95829[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_95829[iParam0 /*28*/]));
		}
	}
	return 0;
}

bool func_4(int iParam0, char* sParam1)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_5(int iParam0, char* sParam1, int iParam2)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0x03B504CF259931BC(iParam2);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_6(int iParam0, char* sParam1, char* sParam2)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0xC63CD5D2920ACBE7(sParam2);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0xC63CD5D2920ACBE7(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

