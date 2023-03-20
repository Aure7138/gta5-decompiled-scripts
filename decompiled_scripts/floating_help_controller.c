void __EntryFunction__()
{
	unk_0x44E747EFAA4C6724();
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
			if (unk_0xF976C624234A4AA8() > Global_95829[iVar0 /*28*/].f_21 && Global_95829[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0xDB8E6614BEC7977E(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_95829[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x61D8FEAF64881CDA(Global_95829[iVar0 /*28*/].f_27, 0))
					{
						Global_95829[iVar0 /*28*/].f_21 = (Global_95829[iVar0 /*28*/].f_21 + unk_0xF2DB717A73826179((unk_0x94B2D2AEAA1D886E() * 1000f)));
						if (unk_0xB583BEF8A2D14AAF(iVar1))
						{
							unk_0x3DBE2A7AF9E71C82(&(Global_95829[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_95829[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_95829[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xE5D56342B0FF1D0D(Global_95829[iVar0 /*28*/].f_23))
						{
							if (!unk_0x61D8FEAF64881CDA(Global_95829[iVar0 /*28*/].f_27, 3))
							{
								unk_0xE07CD8C540C9722D(iVar1, unk_0x0CAFB9D38494283D(Global_95829[iVar0 /*28*/].f_23, Global_95829[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x0F914B8DF951A923(iVar1, Global_95829[iVar0 /*28*/].f_23, Global_95829[iVar0 /*28*/].f_24, Global_95829[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_95829[iVar0 /*28*/].f_24 != 0f || Global_95829[iVar0 /*28*/].f_24.f_1 != 0f) || Global_95829[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xE07CD8C540C9722D(iVar1, Global_95829[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xB7EA46F28381F55E(iVar1, Global_95829[iVar0 /*28*/].f_24, Global_95829[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xF976C624234A4AA8() - Global_95829[iVar0 /*28*/].f_22) > 1000)
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
	if (!unk_0xA858564DC37EED5E(&(Global_95829[iParam0 /*28*/]), "") && !unk_0xD504011E20D63A81(&(Global_95829[iParam0 /*28*/])))
	{
		if (unk_0x61D8FEAF64881CDA(Global_95829[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x61D8FEAF64881CDA(Global_95829[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4), Global_95829[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x61D8FEAF64881CDA(Global_95829[iParam0 /*28*/].f_27, 2))
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

var func_4(int iParam0, var uParam1)
{
	unk_0x74C587863BEFBDD0(uParam1);
	return unk_0x5D488553935013A9((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x74C587863BEFBDD0(uParam1);
	unk_0x844339A27F0F1508(uParam2);
	return unk_0x5D488553935013A9((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x74C587863BEFBDD0(uParam1);
	unk_0x923B18EB34FC2117(uParam2);
	return unk_0x5D488553935013A9((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x74C587863BEFBDD0(uParam1);
	unk_0x923B18EB34FC2117(uParam2);
	unk_0x844339A27F0F1508(uParam3);
	return unk_0x5D488553935013A9((1 + iParam0));
}

