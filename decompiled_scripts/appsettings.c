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
	int iLocal_17 = 0;
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_17 = -1;
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	unk_0x0A2FDF6E490B25B3();
	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_45();
	if (Global_19431 == 0)
	{
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else
	{
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_8161[Global_19486 /*2811*/][2 /*281*/].f_259 = Global_111560.f_14046[Global_19486 /*20*/].f_6;
	Global_8161[Global_19486 /*2811*/][4 /*281*/].f_259 = Global_111560.f_14046[Global_19486 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_76577)
		{
			Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 = func_44(1198, -1, 0);
			Global_8161[Global_19486 /*2811*/][2 /*281*/].f_259 = func_44(2028, -1, 0);
			Global_8161[Global_19486 /*2811*/][4 /*281*/].f_259 = func_44(2027, -1, 0);
		}
		else if (unk_0x2553916E420E8EF0(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), &(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_76577)
	{
		Global_111560.f_14046[3 /*20*/].f_10 = func_44(1197, -1, 0);
	}
	Global_8161[Global_19486 /*2811*/][3 /*281*/].f_259 = Global_111560.f_14046[Global_19486 /*20*/].f_10;
	func_43();
	if (Global_76577)
	{
		Global_8161[3 /*2811*/][0 /*281*/] = 190;
		Global_8161[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_8161[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_8161[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_8161[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_8161[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8161[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_44(2090, -1, 0) == 0)
		{
			Global_8161[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_8161[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_50)
		{
			if (unk_0xC9D9444186B5A374() > 3500)
			{
				if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
				{
					unk_0x45AC5D46FE5FB81C(unk_0x0FA8183DAD2B3203());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_56 || iLocal_57)
					{
						if (bLocal_56)
						{
							bLocal_56 = false;
							unk_0x5AE11BC36633DE4E(0);
							Global_111560.f_14046.f_82 = 1;
							iLocal_57 = 1;
						}
						else if (unk_0xC9D9444186B5A374() > 7500)
						{
							iLocal_57 = 0;
							unk_0x0D23E3918F7AF11B(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_53)
						{
							func_11();
						}
						if (func_10(2, Global_19454, 0))
						{
							if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
							{
								unk_0x45AC5D46FE5FB81C(unk_0x0FA8183DAD2B3203());
							}
							iLocal_53 = 0;
							func_9();
							Global_19464 = 1;
							func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_19486.f_1 > 3)
							{
								Global_19486.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x45AC5D46FE5FB81C(unk_0x0FA8183DAD2B3203());
	}
	if (bLocal_56)
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	if (Global_111560.f_14046.f_83 == 0 || Global_111560.f_14046.f_82 == 0)
	{
		func_3();
	}
	unk_0x269298D09D57BFCF(0);
	unk_0x9C9E32388A7886A2();
}

void func_3()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x3B76114EC84D5812(&Global_7356, 25);
	unk_0xA1E7A40E1F56E511(&Global_7357, 11);
}

int func_4(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_41396);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_45();
	Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Back", &Global_19475, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x26BB91778477F482(iParam0, iParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, iParam1)))
	{
		if (unk_0xE434AB6E3DE89861())
		{
			if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
			{
				return 0;
			}
		}
		if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	int iVar0;
	
	iLocal_54 = unk_0x9B35D07DCD0F0B43();
	iVar0 = (iLocal_54 - iLocal_55);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x9EDF0FD0707786D3(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_43 == 1)
	{
		if (iLocal_52)
		{
			iLocal_54 = unk_0x9B35D07DCD0F0B43();
			if ((iLocal_54 - iLocal_55) > 1000)
			{
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (unk_0x59415A8719336539(2))
		{
			if (unk_0x26BB91778477F482(2, 180))
			{
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (unk_0x26BB91778477F482(2, 181))
			{
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if ((((func_10(2, Global_19462, 0) || func_10(2, Global_19463, 0)) || iLocal_51) || iLocal_65 == 1) || iLocal_66 == 1)
		{
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			unk_0x5AE11BC36633DE4E(0);
			iLocal_50 = 1;
			unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x3EC8759D3C8910D6();
			while (!unk_0x308962E80254EB41(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_47 = iLocal_18[unk_0x3A48AECE3E8E65D6(uLocal_41)];
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				unk_0x45AC5D46FE5FB81C(unk_0x0FA8183DAD2B3203());
				unk_0x4EDE34FBADD967A6(100);
				if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (!unk_0x5A5DBC28F92E1FDB(unk_0x0FA8183DAD2B3203()))
					{
						if (unk_0x2553916E420E8EF0(&(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0xE9AFD93BEF6B3E7B(&(Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/]), unk_0x0FA8183DAD2B3203(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x3EC8759D3C8910D6();
			while (!unk_0x308962E80254EB41(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_46 = unk_0x3A48AECE3E8E65D6(uLocal_41);
			if (iLocal_46 < 0)
			{
				iLocal_46 = 0;
			}
			Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2)
			{
				iVar0 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_111560.f_14046[Global_19486 /*20*/].f_6 = Global_8161[Global_19486 /*2811*/][2 /*281*/].f_260[iVar0];
				func_46(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_76577)
				{
					Global_4269891 = Global_8161[3 /*2811*/][2 /*281*/].f_259;
					func_20(2028, Global_8161[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_46(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_4269891), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_19467, "SET_THEME", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 4)
			{
				Global_111560.f_14046[Global_19486 /*20*/].f_9 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_76577)
				{
					Global_4269892 = Global_8161[3 /*2811*/][4 /*281*/].f_259;
					func_20(2027, Global_8161[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4269892 == 0)
					{
						Var17 = { func_17(unk_0x7C7787D2D7139A85()) };
						iVar30 = 0;
						if (unk_0x7B3E18C7DAC336C3(0) == 0)
						{
						}
						if ((unk_0xF10E9BDC0C546560(&Var17) && unk_0x7B3E18C7DAC336C3(0)) && Global_4269895 == 0)
						{
							unk_0xC1B1E9A034A63A62(0);
							while (!unk_0x0DFEAFECE4B808CA(&Var17, &uVar1) && unk_0x83666F9FB8FEBD4B() < 3000)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0x83666F9FB8FEBD4B() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								unk_0xF1BC72CEC2746995(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x759AC38FBC6CCA9E("CELL_2000");
								unk_0xA89C789CC9FEF523(&uVar1);
								unk_0x81019766FF500CCA();
								unk_0xAC7C2DE2DDC7AF03();
							}
						}
						else
						{
							func_46(Global_19467, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_19467, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_4269892), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_19467, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_111560.f_14046[Global_19486 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 1)
			{
				Global_111560.f_14046[Global_19486 /*20*/].f_11 = { Global_8161[Global_19486 /*2811*/][1 /*281*/].f_144[Global_8161[Global_19486 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_76577)
				{
					func_20(1198, Global_8161[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(18), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iLocal_46;
				func_46(Global_19467, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_43 == 3)
			{
				Global_111560.f_14046[Global_19486 /*20*/].f_10 = Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_76577)
				{
					func_20(1197, Global_111560.f_14046[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_111560.f_14046[Global_19486 /*20*/].f_10 == 1)
				{
					iLocal_53 = 1;
					iLocal_55 = unk_0x9B35D07DCD0F0B43();
				}
				else
				{
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0)
			{
				if (Global_76577 == 1)
				{
					Global_8161[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(19), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/]), 0, 0, 0, 0);
					func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_46), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/]), 0, 0, 0, 0);
					iLocal_45 = iLocal_46;
					func_46(Global_19467, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_46), -1082130432, -1082130432, -1082130432);
					func_20(2090, Global_8161[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_8161[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_8161[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_8161[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_41396 == 15)
						{
							if (Global_111560.f_14046.f_82 == 0)
							{
								unk_0x0D23E3918F7AF11B(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
							else
							{
								func_46(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0xA1E7A40E1F56E511(&Global_7356, 25);
								unk_0xA1E7A40E1F56E511(&Global_7357, 11);
								if (Global_111560.f_14046.f_83 == 0)
								{
									unk_0x0D23E3918F7AF11B(1);
									func_15("CELL_7051", -1);
									Global_111560.f_14046.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x3B76114EC84D5812(&Global_7356, 25);
						unk_0xA1E7A40E1F56E511(&Global_7357, 11);
					}
				}
			}
			func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0x9591DE0F00127F2A(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0x9591DE0F00127F2A(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0x9591DE0F00127F2A(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0x9591DE0F00127F2A(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_14(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(uParam0);
	unk_0x81019766FF500CCA();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9591DE0F00127F2A(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0x9591DE0F00127F2A(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0x9591DE0F00127F2A(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0x9591DE0F00127F2A(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0x9591DE0F00127F2A(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xAC7C2DE2DDC7AF03();
}

void func_19()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 0);
					break;
				
				case 2:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 1);
					break;
				
				case 3:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 2);
					break;
				
				case 4:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 3);
					break;
				
				case 5:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 4);
					break;
				
				case 6:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 5);
					break;
				
				case 7:
					unk_0x3095A6436488AD37(unk_0x7C7787D2D7139A85(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

var func_22()
{
	return Global_1312745;
}

void func_23()
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x9964F5BBD9415AB7(-1, "Menu_Accept", &Global_19475, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0x8C1E539A8DCCD9C9(5);
	}
}

int func_25()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x18638AA8DFAAE787();
	iVar1 = unk_0x328DC5757076B0D5(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()
{
	if (Global_19464 == 0)
	{
		if (func_10(2, Global_19455, 0))
		{
			func_23();
			Global_19464 = 1;
			unk_0xF1BC72CEC2746995(Global_19467, "GET_CURRENT_SELECTION");
			uLocal_41 = unk_0x3EC8759D3C8910D6();
			while (!unk_0x308962E80254EB41(uLocal_41))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_44 = unk_0x3A48AECE3E8E65D6(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43)
			{
				case 0:
					if (Global_76577 == 0)
					{
						if (Global_41396 == 15)
						{
							if (Global_111560.f_14046.f_82 == 0)
							{
								unk_0x0D23E3918F7AF11B(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64)
								{
								}
								bLocal_56 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = unk_0x9B35D07DCD0F0B43();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_46(Global_19467, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_76577)
	{
		StringCopy(&(Global_8161[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(unk_0x7C7787D2D7139A85()) };
		if (!unk_0xF10E9BDC0C546560(&Var21))
		{
			StringCopy(&(Global_8161[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] < Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (unk_0x2553916E420E8EF0(&(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_48 = iVar20;
			if (iLocal_48 < 0)
			{
				iLocal_48 = 0;
			}
			if ((iLocal_43 == 1 || iLocal_43 == 4) || iLocal_43 == 2)
			{
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_76577 == 1)
			{
				func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_39++;
		}
		iVar20++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x3B76114EC84D5812(&Global_7356, 17);
}

void func_28()
{
	if (iLocal_62)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_62 = 0;
		}
	}
	if (unk_0x59415A8719336539(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0)
	{
		if (func_10(2, Global_19462, 0))
		{
			if (iLocal_40 > 0)
			{
				iLocal_40 = (iLocal_40 - 1);
			}
			func_31();
			iLocal_62 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_10(2, Global_19463, 0))
		{
			iLocal_40++;
			if (iLocal_40 == iLocal_39)
			{
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_29()
{
	func_46(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
	}
}

void func_31()
{
	func_46(Global_19467, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9964F5BBD9415AB7(-1, "Menu_Navigate", &Global_19475, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_19669 == 0)
		{
			unk_0x8C1E539A8DCCD9C9(1);
		}
		else
		{
			unk_0x8C1E539A8DCCD9C9(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_8161[Global_19486 /*2811*/][iVar23 /*281*/] = 5000;
		if (unk_0xFD4B2AAE20AA1CBB(2) == 0)
		{
			Global_8161[Global_19486 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_8161[Global_19486 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iVar22 /*281*/] < Global_8161[Global_19486 /*2811*/][iVar23 /*281*/])
					{
						if (Global_76577)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_42(iVar22, iVar23);
								func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_42(iVar22, iVar23);
							func_18(Global_19467, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_49), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_8161[Global_19486 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_39++;
		}
		iVar21++;
	}
	func_46(Global_19467, "DISPLAY_VIEW", 13f, unk_0xBBDA792448DB5A89(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x3B76114EC84D5812(&Global_7356, 17);
}

int func_34()
{
	if (Global_76577)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_35();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111560.f_14046[Global_19486 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_40(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_39(unk_0x0FA8183DAD2B3203());
			if (func_38(iVar0) && (!func_37(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_38(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_37(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_76577)
			{
				iLocal_49 = 19;
			}
			else if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_49 = 26;
			}
			else
			{
				iLocal_49 = 25;
			}
			break;
		
		case 3:
			if (Global_8161[Global_19486 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_49 = 20;
			}
			else
			{
				iLocal_49 = 21;
			}
			break;
		
		default:
			iLocal_49 = Global_8161[Global_19486 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_43()
{
	if (Global_41396 != 15)
	{
		func_45();
		Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_45()
{
	if (func_37(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_35();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF1BC72CEC2746995(uParam0, sParam1);
	unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD02F24F3E2DB263A(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xAC7C2DE2DDC7AF03();
}

