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
	int iLocal_17[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
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
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
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
	fLocal_57 = 0.82f;
	fLocal_58 = 0.42f;
	fLocal_59 = 0f;
	fLocal_60 = 0f;
	unk_0x44E747EFAA4C6724();
	func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14338 == 0)
	{
		fLocal_62 = 0.75f;
		fLocal_63 = 0.8f;
	}
	else
	{
		fLocal_62 = 0.65f;
		fLocal_63 = 0.77f;
	}
	Global_3068[Global_14393 /*2811*/][2 /*281*/].f_259 = Global_97173.f_12272[Global_14393 /*20*/].f_6;
	Global_3068[Global_14393 /*2811*/][4 /*281*/].f_259 = Global_97173.f_12272[Global_14393 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_68067)
		{
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = func_43(1185, -1, 0);
			Global_3068[Global_14393 /*2811*/][2 /*281*/].f_259 = func_43(2011, -1, 0);
			Global_3068[Global_14393 /*2811*/][4 /*281*/].f_259 = func_43(2010, -1, 0);
		}
		else if (unk_0xA858564DC37EED5E(&(Global_97173.f_12272[Global_14393 /*20*/].f_11), &(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_68067)
	{
		Global_97173.f_12272[3 /*20*/].f_10 = func_43(1184, -1, 0);
	}
	Global_3068[Global_14393 /*2811*/][3 /*281*/].f_259 = Global_97173.f_12272[Global_14393 /*20*/].f_10;
	func_42();
	if (Global_68067)
	{
		Global_3068[3 /*2811*/][0 /*281*/] = 190;
		Global_3068[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3068[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2073, -1, 0) == 0)
		{
			Global_3068[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3068[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_49)
		{
			if (unk_0xC9D9444186B5A374() > 3500)
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					unk_0xD4924B65C3BCFBC7(unk_0x507DA4994C3D8EBD());
				}
				iLocal_49 = 0;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_55 || iLocal_56)
					{
						if (bLocal_55)
						{
							bLocal_55 = false;
							unk_0x5AE11BC36633DE4E(0);
							Global_97173.f_12272.f_82 = 1;
							iLocal_56 = 1;
						}
						else if (unk_0xC9D9444186B5A374() > 7500)
						{
							iLocal_56 = 0;
							unk_0x4A4C1A1BC79EFE8F(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_52)
						{
							func_11();
						}
						if (func_10(2, Global_14361, 0))
						{
							if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
							{
								unk_0xD4924B65C3BCFBC7(unk_0x507DA4994C3D8EBD());
							}
							iLocal_52 = 0;
							func_9();
							Global_14371 = 1;
							func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14393.f_1 > 3)
							{
								Global_14393.f_1 = 7;
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
			Global_14395 = 6;
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
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
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
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xD4924B65C3BCFBC7(unk_0x507DA4994C3D8EBD());
	}
	if (bLocal_55)
	{
		unk_0x4A4C1A1BC79EFE8F(1);
	}
	if (Global_97173.f_12272.f_83 == 0 || Global_97173.f_12272.f_82 == 0)
	{
		func_3();
	}
	unk_0x1757405122DE8566(0);
	unk_0x883793591E631A3B();
}

void func_3()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 25);
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 11);
}

int func_4(int iParam0)
{
	if (Global_34909 == 15)
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
	return func_6(iParam0, Global_34909);
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
	func_44();
	Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x58FC9C7DF8FE009B(iParam0, iParam1) || (iParam2 == 1 && unk_0x02AC213158CF29AE(iParam0, iParam1)))
	{
		if (unk_0x80AD636AD4184F2B())
		{
			if (unk_0x807035052B6EC8A1() == 0 || (unk_0x1B3FC52C6D531434() && unk_0x30E5EC01C9ACF9BC(2)))
			{
				return 0;
			}
		}
		if (unk_0xBB02FD0C8166DE6D() || unk_0xDAF2549B28FDF97C())
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
	
	iLocal_53 = unk_0xF976C624234A4AA8();
	iVar0 = (iLocal_53 - iLocal_54);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x5C68F3EBC8A92D55(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_42 == 1)
	{
		if (iLocal_51)
		{
			iLocal_53 = unk_0xF976C624234A4AA8();
			if ((iLocal_53 - iLocal_54) > 1000)
			{
				iLocal_50 = 1;
				iLocal_51 = 0;
			}
		}
		if (unk_0x30E5EC01C9ACF9BC(2))
		{
			if (unk_0x58FC9C7DF8FE009B(2, 180))
			{
				iLocal_64 = 1;
				iLocal_65 = 0;
			}
			if (unk_0x58FC9C7DF8FE009B(2, 181))
			{
				iLocal_64 = 0;
				iLocal_65 = 1;
			}
		}
		if ((((func_10(2, Global_14369, 0) || func_10(2, Global_14370, 0)) || iLocal_50) || iLocal_64 == 1) || iLocal_65 == 1)
		{
			iLocal_64 = 0;
			iLocal_65 = 0;
			iLocal_50 = 0;
			iLocal_51 = 0;
			unk_0x5AE11BC36633DE4E(0);
			iLocal_49 = 1;
			unk_0xF48C88BD1F0007E8(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = unk_0x0D72C1C0D4A044A4();
			while (!unk_0xEB72DB563C7B7566(uLocal_40))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_46 = iLocal_17[unk_0x88AE9F0292C2B117(uLocal_40)];
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				unk_0xD4924B65C3BCFBC7(unk_0x507DA4994C3D8EBD());
				unk_0x4EDE34FBADD967A6(100);
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					if (!unk_0x1D2BB0F375C29D1D(unk_0x507DA4994C3D8EBD()))
					{
						if (unk_0xA858564DC37EED5E(&(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iLocal_46 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0x667C1EAAF1741A67(&(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iLocal_46 /*6*/]), unk_0x507DA4994C3D8EBD(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14371 == 0)
	{
		if (func_10(2, Global_14362, 0))
		{
			func_23();
			Global_14371 = 1;
			unk_0xF48C88BD1F0007E8(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = unk_0x0D72C1C0D4A044A4();
			while (!unk_0xEB72DB563C7B7566(uLocal_40))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_45 = unk_0x88AE9F0292C2B117(uLocal_40);
			if (iLocal_45 < 0)
			{
				iLocal_45 = 0;
			}
			Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
			if (iLocal_42 == 2)
			{
				iVar0 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				Global_97173.f_12272[Global_14393 /*20*/].f_6 = Global_3068[Global_14393 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_68067)
				{
					Global_2543748 = Global_3068[3 /*2811*/][2 /*281*/].f_259;
					func_20(2011, Global_3068[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_45(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_2543748), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_44), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 4)
			{
				Global_97173.f_12272[Global_14393 /*20*/].f_9 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68067)
				{
					Global_2543749 = Global_3068[3 /*2811*/][4 /*281*/].f_259;
					func_20(2010, Global_3068[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_2543749 == 0)
					{
						Var17 = { func_17(unk_0xAF65E5A58BE87D95()) };
						iVar30 = 0;
						if (unk_0xC91D05FCB0DA28F6(0) == 0)
						{
						}
						if ((unk_0x39606F3949DA3895(&Var17) && unk_0xC91D05FCB0DA28F6(0)) && Global_2543752 == 0)
						{
							unk_0xC1B1E9A034A63A62(0);
							while (!unk_0xAAB782F753BC4B9A(&Var17, &uVar1) && unk_0x83666F9FB8FEBD4B() < 3000)
							{
								unk_0x4EDE34FBADD967A6(0);
								if (unk_0x83666F9FB8FEBD4B() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								unk_0xF48C88BD1F0007E8(Global_14374, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x44F4D219F8513945("CELL_2000");
								unk_0xD1F22DD7F7363AB6(&uVar1);
								unk_0x113A6F657EE871A3();
								unk_0xA52FC2467E672B55();
							}
						}
						else
						{
							func_45(Global_14374, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14374, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_2543749), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14374, "SET_BACKGROUND_IMAGE", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_44), unk_0xBBDA792448DB5A89(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 1)
			{
				Global_97173.f_12272[Global_14393 /*20*/].f_11 = { Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_68067)
				{
					func_20(1185, Global_3068[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_44), unk_0xBBDA792448DB5A89(18), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 3)
			{
				Global_97173.f_12272[Global_14393 /*20*/].f_10 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68067)
				{
					func_20(1184, Global_97173.f_12272[3 /*20*/].f_10, -1, 1);
				}
				if (Global_97173.f_12272[Global_14393 /*20*/].f_10 == 1)
				{
					iLocal_52 = 1;
					iLocal_54 = unk_0xF976C624234A4AA8();
				}
				else
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_42 == 0)
			{
				if (Global_68067 == 1)
				{
					Global_3068[3 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_44), unk_0xBBDA792448DB5A89(19), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iLocal_45), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
					iLocal_44 = iLocal_45;
					func_45(Global_14374, "DISPLAY_VIEW", 22f, unk_0xBBDA792448DB5A89(iLocal_45), -1082130432, -1082130432, -1082130432);
					func_20(2073, Global_3068[3 /*2811*/][iLocal_42 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_3068[0 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					Global_3068[1 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					Global_3068[2 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_34909 == 15)
						{
							if (Global_97173.f_12272.f_82 == 0)
							{
								unk_0x4A4C1A1BC79EFE8F(1);
								func_16("CELL_7050");
								if (fLocal_62 == fLocal_63)
								{
								}
								bLocal_55 = true;
							}
							else
							{
								func_45(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x3DBE2A7AF9E71C82(&Global_2263, 25);
								unk_0x3DBE2A7AF9E71C82(&Global_2264, 11);
								if (Global_97173.f_12272.f_83 == 0)
								{
									unk_0x4A4C1A1BC79EFE8F(1);
									func_15("CELL_7051", -1);
									Global_97173.f_12272.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0xCD27BF29FB9012E2(&Global_2263, 25);
						unk_0x3DBE2A7AF9E71C82(&Global_2264, 11);
					}
				}
			}
			func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0x8FA72E132AAFA62F(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xA52FC2467E672B55();
}

void func_14(char* sParam0)
{
	unk_0x44F4D219F8513945(uParam0);
	unk_0x113A6F657EE871A3();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x8FA72E132AAFA62F(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xA52FC2467E672B55();
}

void func_19()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2543748)
			{
				case 1:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 0);
					break;
				
				case 2:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 1);
					break;
				
				case 3:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 2);
					break;
				
				case 4:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 3);
					break;
				
				case 5:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 4);
					break;
				
				case 6:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 5);
					break;
				
				case 7:
					unk_0x5E0712245D353952(unk_0xAF65E5A58BE87D95(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
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
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

var func_22()
{
	return Global_1312736;
}

void func_23()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Accept", &Global_14382, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0xD3370B46DD5E27B0(5);
	}
}

int func_25()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xCF4F7FBD80ABE315();
	iVar1 = unk_0xD686D61A57BCB6E7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543750 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()
{
	if (Global_14371 == 0)
	{
		if (func_10(2, Global_14362, 0))
		{
			func_23();
			Global_14371 = 1;
			unk_0xF48C88BD1F0007E8(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = unk_0x0D72C1C0D4A044A4();
			while (!unk_0xEB72DB563C7B7566(uLocal_40))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_43 = unk_0x88AE9F0292C2B117(uLocal_40);
			iLocal_42 = iLocal_17[iLocal_43];
			switch (iLocal_42)
			{
				case 0:
					if (Global_68067 == 0)
					{
						if (Global_34909 == 15)
						{
							if (Global_97173.f_12272.f_82 == 0)
							{
								unk_0x4A4C1A1BC79EFE8F(1);
								func_16("CELL_7050");
								if (fLocal_62 == fLocal_63)
								{
								}
								bLocal_55 = true;
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
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
			}
			func_27();
			iLocal_51 = 1;
			iLocal_54 = unk_0xF976C624234A4AA8();
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
	
	func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_38 = 0;
	iVar20 = 0;
	if (Global_68067)
	{
		StringCopy(&(Global_3068[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(unk_0xAF65E5A58BE87D95()) };
		if (!unk_0x39606F3949DA3895(&Var21))
		{
			StringCopy(&(Global_3068[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar34] < Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_17[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (unk_0xA858564DC37EED5E(&(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_47 = iVar20;
			if (iLocal_47 < 0)
			{
				iLocal_47 = 0;
			}
			if ((iLocal_42 == 1 || iLocal_42 == 4) || iLocal_42 == 2)
			{
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
			if (iLocal_42 == 0 && Global_68067 == 1)
			{
				func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(22), unk_0xBBDA792448DB5A89(iVar20), unk_0xBBDA792448DB5A89(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
		}
		if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_38++;
		}
		iVar20++;
	}
	func_45(Global_14374, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14381)
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCD27BF29FB9012E2(&Global_2263, 17);
}

void func_28()
{
	if (iLocal_61)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			func_29();
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_10(2, Global_14369, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			func_31();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_10(2, Global_14370, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			func_29();
			iLocal_61 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_29()
{
	func_45(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_14556 == 0)
		{
			unk_0xD3370B46DD5E27B0(2);
		}
		else
		{
			unk_0xD3370B46DD5E27B0(1);
		}
	}
}

void func_31()
{
	func_45(Global_14374, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x84795EA8F54230A1(-1, "Menu_Navigate", &Global_14382, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_14556 == 0)
		{
			unk_0xD3370B46DD5E27B0(1);
		}
		else
		{
			unk_0xD3370B46DD5E27B0(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_38 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_3068[Global_14393 /*2811*/][iVar23 /*281*/] = 5000;
		if (unk_0x227FB8F9C772BAFB(2) == 0)
		{
			Global_3068[Global_14393 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3068[Global_14393 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iVar22 /*281*/] < Global_3068[Global_14393 /*2811*/][iVar23 /*281*/])
					{
						if (Global_68067)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
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
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(13), unk_0xBBDA792448DB5A89(iVar21), unk_0xBBDA792448DB5A89(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_17[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3068[Global_14393 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_38++;
		}
		iVar21++;
	}
	func_45(Global_14374, "DISPLAY_VIEW", 13f, unk_0xBBDA792448DB5A89(iLocal_43), -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14381)
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xCD27BF29FB9012E2(&Global_2263, 17);
}

int func_34()
{
	if (Global_68067)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = func_35();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_97173.f_12272[Global_14393 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_40(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_39(unk_0x507DA4994C3D8EBD());
			if (func_38(iVar0) && (!func_37(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_38(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_37(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_68067)
			{
				iLocal_48 = 19;
			}
			else if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_48 = 26;
			}
			else
			{
				iLocal_48 = 25;
			}
			break;
		
		case 3:
			if (Global_3068[Global_14393 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_48 = 20;
			}
			else
			{
				iLocal_48 = 21;
			}
			break;
		
		default:
			iLocal_48 = Global_3068[Global_14393 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()
{
	if (Global_34909 != 15)
	{
		func_44();
		Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_21(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()
{
	if (func_37(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_35();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xA52FC2467E672B55();
}

