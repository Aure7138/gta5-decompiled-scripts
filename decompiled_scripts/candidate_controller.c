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
	if (unk_0xC968670BFACE42D9(2))
	{
		func_7();
	}
	iVar0 = Global_34870;
	iVar1 = 15;
	while (true)
	{
		if (Global_34909 != 15)
		{
			if (Global_34872 != 0)
			{
				if (Global_34871 != -1)
				{
					if (!unk_0x46E9AE36D8FA6417(Global_34872))
					{
						func_6(&Global_34871);
					}
				}
			}
		}
		if (Global_34870 > 0)
		{
			Global_34875 = 1;
			if (Global_34870 == iVar0)
			{
				iVar2 = 0;
				if (Global_34870 > 1)
				{
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < Global_34870)
					{
						if (func_4(Global_34876[iVar12 /*4*/].f_2))
						{
							iVar3[iVar12] = 0;
						}
						else
						{
							iVar3[iVar12] = 1;
						}
						if (Global_34876[iVar12 /*4*/].f_1 == 7)
						{
							iVar3[iVar12] = 1;
						}
						iVar12++;
					}
					iVar13 = 0;
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < (Global_34870 - 1))
					{
						if (!iVar3[iVar12 + 1])
						{
							if (Global_34876[iVar12 + 1 /*4*/].f_1 < Global_34876[iVar13 /*4*/].f_1)
							{
								iVar13 = iVar12 + 1;
							}
						}
						iVar12++;
					}
					iVar2 = iVar13;
					if (Global_34876[iVar2 /*4*/].f_2 == 15)
					{
						iVar2 = -1;
					}
					if (iVar2 != -1)
					{
						if (!func_4(Global_34876[iVar2 /*4*/].f_2))
						{
							iVar2 = -1;
						}
					}
				}
				if (iVar2 > -1)
				{
					Global_34871 = Global_34876[iVar2 /*4*/];
					Global_34872 = Global_34876[iVar2 /*4*/].f_3;
					Global_34909 = Global_34876[iVar2 /*4*/].f_2;
					Global_34870 = 0;
					Global_34875 = 0;
				}
				else
				{
					Global_34870 = 0;
					Global_34875 = 0;
				}
			}
		}
		if (iVar1 != Global_34909)
		{
			if (iVar1 == 15)
			{
				func_3(0);
			}
			if (Global_34909 == 15)
			{
				func_3(1);
			}
			Global_34875 = 0;
			Global_30774 = 1;
			if (Global_34909 != 5 && Global_34909 != 15)
			{
				unk_0xBC8983F38F78ED51(8);
			}
			if (Global_34909 == 15 || Global_34909 == 6)
			{
				func_2(0);
			}
			else
			{
				func_2(1);
			}
			if (func_1(Global_34909))
			{
				if (!iLocal_19)
				{
					unk_0xCFEB8AF24FC1D0BB(true);
					iLocal_19 = 1;
				}
			}
			else if (iLocal_19)
			{
				unk_0xCFEB8AF24FC1D0BB(false);
				iLocal_19 = 0;
			}
		}
		iVar1 = Global_34909;
		iVar0 = Global_34870;
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_34875 = 0;
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
		Global_95819 = unk_0x9CD27B0045628463() + 250;
	}
	Global_95816 = bParam0;
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

bool func_4(int iParam0)
{
	return func_5(iParam0, Global_34909);
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
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_7()
{
	func_6(&Global_34871);
	Global_34875 = 0;
	unk_0x1090044AD1DA76FA();
}

