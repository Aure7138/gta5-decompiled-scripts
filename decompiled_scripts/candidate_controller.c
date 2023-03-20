#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[8];
	int iVar12;
	int iVar13;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	if (unk_0x8D841F1DD3FA555F(2))
	{
		func_7();
	}
	iVar0 = Global_35404;
	iVar1 = 15;
	while (true)
	{
		if (Global_35443 != 15)
		{
			if (Global_35406 != 0)
			{
				if (Global_35405 != -1)
				{
					if (!unk_0x64AD45A6264810A8(Global_35406))
					{
						func_6(&Global_35405);
					}
				}
			}
		}
		if (Global_35404 > 0)
		{
			Global_35409 = 1;
			if (Global_35404 == iVar0)
			{
				iVar2 = 0;
				if (Global_35404 > 1)
				{
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < Global_35404)
					{
						if (func_4(Global_35410[iVar12 /*4*/].f_2))
						{
							iVar3[iVar12] = 0;
						}
						else
						{
							iVar3[iVar12] = 1;
						}
						if (Global_35410[iVar12 /*4*/].f_1 == 7)
						{
							iVar3[iVar12] = 1;
						}
						iVar12++;
					}
					iVar13 = 0;
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < (Global_35404 - 1))
					{
						if (!iVar3[iVar12 + 1])
						{
							if (Global_35410[iVar12 + 1 /*4*/].f_1 < Global_35410[iVar13 /*4*/].f_1)
							{
								iVar13 = iVar12 + 1;
							}
						}
						iVar12++;
					}
					iVar2 = iVar13;
					if (Global_35410[iVar2 /*4*/].f_2 == 15)
					{
						iVar2 = -1;
					}
					if (iVar2 != -1)
					{
						if (!func_4(Global_35410[iVar2 /*4*/].f_2))
						{
							iVar2 = -1;
						}
					}
				}
				if (iVar2 > -1)
				{
					Global_35405 = Global_35410[iVar2 /*4*/];
					Global_35406 = Global_35410[iVar2 /*4*/].f_3;
					Global_35443 = Global_35410[iVar2 /*4*/].f_2;
					Global_35404 = 0;
					Global_35409 = 0;
				}
				else
				{
					Global_35404 = 0;
					Global_35409 = 0;
				}
			}
		}
		if (iVar1 != Global_35443)
		{
			if (iVar1 == 15)
			{
				func_3(0);
			}
			if (Global_35443 == 15)
			{
				func_3(1);
			}
			Global_35409 = 0;
			Global_31302 = 1;
			if (Global_35443 != 5 && Global_35443 != 15)
			{
				unk_0xEC4E76F112E5A727(8);
			}
			if (Global_35443 == 15 || Global_35443 == 6)
			{
				func_2(0);
			}
			else
			{
				func_2(1);
			}
			if (func_1(Global_35443))
			{
				if (!iLocal_19)
				{
					unk_0xC79150CDEEC8CC5D(1);
					iLocal_19 = 1;
				}
			}
			else if (iLocal_19)
			{
				unk_0xC79150CDEEC8CC5D(0);
				iLocal_19 = 0;
			}
		}
		iVar1 = Global_35443;
		iVar0 = Global_35404;
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_35409 = 0;
}

int func_1(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return 1;
			break;
	}
	return 0;
}

void func_2(bool bParam0)
{
	if (!bParam0)
	{
		Global_97575 = unk_0x48E480685981C7D4() + 250;
	}
	Global_97572 = bParam0;
}

void func_3(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

bool func_4(int iParam0)
{
	return func_5(iParam0, Global_35443);
}

int func_5(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_6(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

void func_7()
{
	func_6(&Global_35405);
	Global_35409 = 0;
	unk_0xC23A229F78DAD92A();
}

