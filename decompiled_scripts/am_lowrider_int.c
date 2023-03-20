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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	struct<3> Local_99 = { 0, 0, 0 } ;
	int iLocal_102 = 0;
	var uLocal_103[3] = { 0, 0, 0 };
	int iLocal_107[3] = { 0, 0, 0 };
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	var uLocal_115 = 0;
	struct<4> Local_116[32];
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	if (ScriptParam_0.f_16 == ScriptParam_0.f_16)
	{
	}
	func_341(ScriptParam_0);
	Local_99 = { func_340(0, 0) };
	while (true)
	{
		func_339();
		if (func_329())
		{
			Global_2458121.f_1624 = 0;
			func_321();
		}
		if (func_319(unk_0xA34E7C2A5118D638(), 0))
		{
			func_321();
		}
		if (func_315(unk_0xA34E7C2A5118D638()) && Local_116[unk_0x935FA14EDA695A82() /*4*/].f_1 == 0)
		{
			Global_2458121.f_1624 = 0;
			func_321();
		}
		func_310(&Global_1710035);
		switch (func_309(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if (func_308() == 2)
				{
					Local_116[unk_0x935FA14EDA695A82() /*4*/] = 2;
					if (func_307(unk_0xC8B93D94F8954288(), 0))
					{
						unk_0x59A0729D503ED758(&iLocal_98, 6);
					}
				}
				else if (func_308() == 6)
				{
					Local_116[unk_0x935FA14EDA695A82() /*4*/] = 5;
				}
				break;
			
			case 2:
				if (func_308() == 2)
				{
					if (func_13())
					{
						func_6();
						Local_116[unk_0x935FA14EDA695A82() /*4*/] = 3;
					}
				}
				else if (func_308() == 6)
				{
					Local_116[unk_0x935FA14EDA695A82() /*4*/] = 5;
				}
				break;
			
			case 5:
				func_4(&(Local_112.f_2));
				if (func_3(&(Local_112.f_2)))
				{
					Local_116[unk_0x935FA14EDA695A82() /*4*/] = 6;
				}
				break;
			
			case 3:
				Local_116[unk_0x935FA14EDA695A82() /*4*/] = 6;
			
			case 6:
				func_321();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_308())
			{
				case 0:
					Local_112.f_0 = 2;
					break;
				
				case 2:
					func_2();
					func_1();
					break;
				
				case 6:
					break;
				}
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (unk_0x736DBE187CFCC863())
	{
	}
}

int func_3(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x736DBE187CFCC863())
		{
			func_5(uParam0, 0, 0);
		}
	}
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

void func_6()
{
	if (!func_12())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
	{
		return;
	}
	func_7();
}

void func_7()
{
	func_9();
	func_8(0);
}

void func_8(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_9()
{
	if (!func_11())
	{
	}
	if (func_12())
	{
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_10();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_10()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_11()
{
	if (!func_12())
	{
		return 0;
	}
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_10();
	return unk_0xD6AFC45B1375A9DD();
}

int func_12()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_13()
{
	switch (Local_116[unk_0x935FA14EDA695A82() /*4*/].f_1)
	{
		case 0:
			func_306();
			if (((((func_303(unk_0xA34E7C2A5118D638(), 1) || func_302()) || func_301() > 0) || func_300()) || func_299()) || unk_0xDCC86F723E82125E(Global_1710188, 4))
			{
				func_6();
				func_298();
				if (unk_0x6B4865E08E90ACC5(Global_1710035))
				{
					unk_0x706ABF1139F36482(Global_1710035, 0);
					unk_0x5356E82C1E5E0C44(&Global_1710035);
				}
				func_297(0);
			}
			else
			{
				func_297(1);
				if (func_307(unk_0xC8B93D94F8954288(), 0))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_98, 6))
					{
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
						{
							if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
							{
								if (unk_0xDCC86F723E82125E(iLocal_98, 5))
								{
									unk_0x77621132305B133B(&iLocal_98, 5);
								}
								if (((((!func_296() && !func_295(0)) && func_293()) && (!func_292() || func_291())) && !unk_0x2BF05095F2389894()) && !func_290())
								{
									if (func_291())
									{
										func_287();
									}
									func_6();
									if (unk_0x6B4865E08E90ACC5(Global_1710035))
									{
										unk_0x706ABF1139F36482(Global_1710035, 0);
										unk_0x5356E82C1E5E0C44(&Global_1710035);
									}
									unk_0x9F4AA6F234E8A860(1);
									func_286(31, 1);
									func_283();
									unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 1);
									unk_0x45AC5DC5B0B1B5F0(unk_0xC8B93D94F8954288(), 0, 1);
									unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
									Local_116[unk_0x935FA14EDA695A82() /*4*/].f_1 = 1;
									unk_0x0244D7561F260D1A(unk_0xA34E7C2A5118D638(), 0);
								}
								else if (func_290())
								{
									if (!unk_0xDCC86F723E82125E(iLocal_98, 4))
									{
										unk_0x59A0729D503ED758(&iLocal_98, 4);
										func_6();
										if (unk_0x6B4865E08E90ACC5(Global_1710035))
										{
											unk_0x706ABF1139F36482(Global_1710035, 0);
											unk_0x5356E82C1E5E0C44(&Global_1710035);
										}
										func_298();
									}
								}
							}
							else if (!unk_0xDCC86F723E82125E(iLocal_98, 5))
							{
								if (func_277(0, 1, 1, 1) && !func_276())
								{
									func_275("FM_LAMC_LV", -1);
									unk_0x59A0729D503ED758(&iLocal_98, 5);
								}
							}
						}
						else if (!unk_0xB45DF29A98EEAD5D())
						{
							if (!func_274("FM_LAMC_LCP"))
							{
								func_275("FM_LAMC_LCP", -1);
							}
						}
					}
				}
				else
				{
					if (unk_0xDCC86F723E82125E(iLocal_98, 6))
					{
						unk_0x77621132305B133B(&iLocal_98, 6);
					}
					if (!unk_0x6B4865E08E90ACC5(Global_1710035))
					{
						if (func_277(0, 1, 1, 1) && !func_276())
						{
							if (!func_300())
							{
								if (!unk_0x6B4865E08E90ACC5(Global_1710035))
								{
									Global_1710035 = unk_0xDF811B9EAB020A4D(Local_99);
									unk_0x31FDDAFCCFEFA478(Global_1710035, func_273(0, 0));
									unk_0x8755DAC584918BF9(Global_1710035, "FMMC_RSTAR_MSL");
									unk_0x32546F91F646B246(Global_1710035, 60);
									unk_0xEB19FBC5156AAE3A(Global_1710035, 10);
									unk_0x577E650C288BBD2C(Global_1710035, 0);
									unk_0xD66C551FC33EDE83(Global_1710035, 10000);
								}
								if (!unk_0xDCC86F723E82125E(iLocal_98, 3) && !unk_0xDCC86F723E82125E(Global_1719506, 0))
								{
									func_275("FM_LAMC_COM1", -1);
									unk_0x59A0729D503ED758(&iLocal_98, 3);
									unk_0x59A0729D503ED758(&Global_1719506, 0);
								}
							}
						}
					}
					if (unk_0xDCC86F723E82125E(iLocal_98, 5))
					{
						unk_0x77621132305B133B(&iLocal_98, 5);
					}
				}
			}
			break;
		
		case 1:
			if (func_23())
			{
				if (!unk_0xDCC86F723E82125E(iLocal_98, 2))
				{
					func_14();
				}
				Local_116[unk_0x935FA14EDA695A82() /*4*/].f_1 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_14()
{
	if (!func_22())
	{
		func_21(1);
	}
	if (!unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_99, 1f, 1f, 4f, 0, 1, 0))
	{
		unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Local_99.f_0, Local_99.f_1, (Local_99.f_2 + 0.2f), 1, 0, 0, 1);
	}
	func_20(0, 0);
	func_15(0, 1);
	unk_0x59A0729D503ED758(&iLocal_98, 2);
}

void func_15(int iParam0, int iParam1)
{
	Global_1719511[iParam0 /*8*/] = iParam1;
	func_16(func_19(iParam0), iParam1, -1, 1);
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_17(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1312746;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3694;
		
		default:
	}
	return 3694;
}

void func_20(int iParam0, int iParam1)
{
	Global_1719511[iParam0 /*8*/].f_2 = 0;
	unk_0x59A0729D503ED758(&(Global_1719511[iParam0 /*8*/].f_2), iParam1);
	Global_1719511.f_9 = 1;
}

void func_21(int iParam0)
{
	Global_1719511.f_11 = iParam0;
}

bool func_22()
{
	return Global_1719511.f_11;
}

int func_23()
{
	unk_0xB8EF15E8AA215700();
	switch (Local_116[unk_0x935FA14EDA695A82() /*4*/].f_2)
	{
		case 0:
			if (func_306())
			{
				func_272(0);
				func_271();
				func_270();
				func_269(1);
				unk_0x0244D7561F260D1A(unk_0xA34E7C2A5118D638(), 0);
			}
			break;
		
		case 1:
			unk_0x0244D7561F260D1A(unk_0xA34E7C2A5118D638(), 0);
			if (unk_0xA65C064741F2CA67() && func_270())
			{
				if (func_267())
				{
					if (func_63())
					{
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !unk_0x2DC9BA2299B45EA6(iLocal_102))
						{
							unk_0x872B541D7953A19B(iLocal_102, true, 0);
							unk_0x5D713171D2C2E177(iLocal_102, "MP_1", 0, 0, 64);
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_103[0]) && !unk_0x2DC9BA2299B45EA6(uLocal_103[0]))
						{
							unk_0x872B541D7953A19B(uLocal_103[0], true, 0);
							unk_0x5D713171D2C2E177(uLocal_103[0], "MP_2", 0, 0, 64);
						}
						else
						{
							unk_0x5D713171D2C2E177(0, "MP_2", 3, 0, 64);
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_103[1]) && !unk_0x2DC9BA2299B45EA6(uLocal_103[1]))
						{
							unk_0x872B541D7953A19B(uLocal_103[1], true, 0);
							unk_0x5D713171D2C2E177(uLocal_103[1], "MP_3", 0, 0, 64);
						}
						else
						{
							unk_0x5D713171D2C2E177(0, "MP_3", 3, 0, 64);
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_103[2]) && !unk_0x2DC9BA2299B45EA6(uLocal_103[2]))
						{
							unk_0x872B541D7953A19B(uLocal_103[2], true, 0);
							unk_0x5D713171D2C2E177(uLocal_103[2], "MP_4", 0, 0, 64);
						}
						else
						{
							unk_0x5D713171D2C2E177(0, "MP_4", 3, 0, 64);
						}
						func_56();
						func_269(2);
					}
				}
				else
				{
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !unk_0x2DC9BA2299B45EA6(iLocal_102))
					{
						unk_0x5D713171D2C2E177(iLocal_102, "MP_1", 0, 0, 64);
					}
					unk_0x5D713171D2C2E177(0, "MP_2", 3, 0, 64);
					unk_0x5D713171D2C2E177(0, "MP_3", 3, 0, 64);
					unk_0x5D713171D2C2E177(0, "MP_4", 3, 0, 64);
					iLocal_111 = unk_0xA34E7C2A5118D638();
					func_56();
					func_269(2);
				}
			}
			break;
		
		case 2:
			if (unk_0x308528B5CF35F306())
			{
				func_269(3);
			}
			break;
		
		case 3:
			if (func_53())
			{
				func_52();
			}
			func_51();
			if (!unk_0xDCC86F723E82125E(iLocal_98, 2))
			{
				if ((unk_0x5269389B943ECBD0() - unk_0xFE2EB5413118713A()) < 3000)
				{
					func_14();
				}
			}
			if (unk_0xF490A05A3C6F92BC(1) || !unk_0x57CF017E37442A64())
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_290())
				{
					unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
					unk_0x77A10AB6D4288EA1(unk_0xC8B93D94F8954288(), 1);
					func_49(0);
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
					unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 0);
				}
				if (!unk_0xDCC86F723E82125E(iLocal_98, 2))
				{
					func_14();
				}
				func_24(1, 1);
				func_298();
				unk_0xCDBEE0F3B4A74754();
				unk_0x0217B82D340DA699(1);
				func_21(0);
				func_269(4);
				return 1;
			}
			else if (unk_0xDCC86F723E82125E(iLocal_98, 7))
			{
				unk_0x82264AB2842DCAEA(1);
				if (!unk_0xD5DFCA69ACAA20E3() && !unk_0xE71FCE10773CF7B0())
				{
					unk_0x00F9843B9C06C2E9(500);
				}
			}
			break;
		
		case 4:
			return 1;
	}
	return 0;
}

void func_24(bool bParam0, int iParam1)
{
	func_47();
	if (bParam0)
	{
		func_45(1);
		unk_0x9F4AA6F234E8A860(1);
	}
	unk_0x7846F09C04C34C46();
	func_40();
	unk_0x936D7C240ACEB88A(0);
	func_37(0, 1, 1, 0);
	func_36();
	func_35(12, 0, -1);
	func_34(1);
	unk_0xFF14BCEFC40262BF(0, -1);
	unk_0xB7709513BF7C1AC0(1);
	unk_0xB1DF6C0157E453DE(1);
	func_33();
	unk_0x384EC102F362C893(1);
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0x547823CBA92EEF50())
		{
			unk_0x4C409393D24BAACF(0, 0);
		}
	}
	func_32(0);
	if (((func_300() == 0 && func_31() == 0) && iParam1) && !func_29(unk_0xA34E7C2A5118D638()))
	{
		func_25(unk_0xA34E7C2A5118D638(), 1, 0);
	}
	Global_2426867.f_3136 = 0;
}

void func_25(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xFD790CCEB2024190())
		{
			unk_0x4A7FE215482FE126(0);
		}
	}
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		uVar0 = iParam2;
		unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_293())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xDF73DA5E2287C499(iParam0) && unk_0x06972B20E75CBE06(iParam0))
		{
			iVar25 = unk_0xCF4C00513A86E840(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xBBAE3E0C60A8AD4B())
				{
					unk_0x3C97CC6571B00B28(1);
				}
				else
				{
					unk_0x872B541D7953A19B(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xBBAE3E0C60A8AD4B() && !bVar18)
					{
						unk_0x3C97CC6571B00B28(0);
					}
					Global_2417071[iParam0 /*306*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_28(iVar25) && !unk_0x2EB1FABE3FD7BD6D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(iVar25, true, 0);
					}
				}
				if (!unk_0xB0A9B470CE75BF12(iVar25))
				{
					if (!bVar20)
					{
						unk_0xB7A2078CD1C9A82F(iVar25, false);
					}
					unk_0x3907D4738A2C8ABD(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB7A2078CD1C9A82F(iVar25, false);
				}
				unk_0x58F516BB5E324590(iVar25, true);
				unk_0x9B5503F5CD2CEB12(iParam0, 0);
				unk_0xD18E3053ACCB190F(iVar25);
				unk_0xCE224502DAE6D698(iVar25, 1);
				func_27();
				func_26();
				if (unk_0x1E7B4B730C1981F4())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2394B86AAC723FB8())
				{
				}
				Global_2417071[iParam0 /*306*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_28(iVar25) && !unk_0x2EB1FABE3FD7BD6D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(iVar25, !bVar14, 0);
					}
					if (!unk_0xB0A9B470CE75BF12(iVar25))
					{
						if (!bVar20)
						{
							unk_0xB7A2078CD1C9A82F(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x3907D4738A2C8ABD(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 0);
				}
				else
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 1);
				}
				unk_0x58F516BB5E324590(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF3D6EAEF84D60393(iVar25) && !unk_0x277ECDA23D8CCEB4(iVar25, 0))
					{
						unk_0xBA73099E237C7E5E(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, iVar26);
		}
	}
}

void func_26()
{
	struct<2> Var0;
	
	Global_2426867.f_691 = 0;
	Global_2426867.f_692 = 0;
	Global_2426867.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1668 = { Var0 };
}

void func_27()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1709 = 0;
	Global_2404919.f_484 = 0;
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_205 = 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x090C65D5190A249D(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (func_319(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_31()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 7);
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

void func_33()
{
	Global_17118.f_5 = 0;
}

void func_34(int iParam0)
{
	Global_2458121.f_4383 = iParam0;
}

void func_35(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1338611.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x59A0729D503ED758(&(Global_1338611.f_947), iParam0);
			}
			else
			{
				unk_0x77621132305B133B(&(Global_1338611.f_947), iParam0);
			}
			break;
	}
}

void func_36()
{
	func_34(1);
	func_35(4, 0, -1);
	func_35(6, 0, -1);
	func_35(7, 0, -1);
	func_35(3, 0, -1);
	func_35(1, 0, -1);
	func_35(2, 0, -1);
	func_35(11, 0, -1);
	func_35(13, 0, -1);
	func_35(14, 0, -1);
	func_35(16, 0, -1);
}

void func_37(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_32(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_39())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_32(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_29(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_38(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_39()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	func_41(0);
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_44();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_295(0))
		{
			func_42(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_42(int iParam0)
{
	if (Global_14571)
	{
		func_43(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_39())
	{
		Global_14413.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_295(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

void func_44()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_99630)
	{
		unk_0x31E622495A0F2BE6(iVar0, iParam0);
		func_46(iVar0);
		iVar0++;
	}
}

void func_46(int iParam0)
{
	Global_99630[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99630[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99630[iParam0 /*28*/].f_4), "", 64);
	Global_99630[iParam0 /*28*/].f_23 = 0;
	Global_99630[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_99630[iParam0 /*28*/].f_27 = 0;
	Global_99630[iParam0 /*28*/].f_20 = 0;
	Global_99630[iParam0 /*28*/].f_22 = 0;
}

void func_47()
{
	if (!Global_1312569)
	{
		return;
	}
	func_48();
}

void func_48()
{
	Global_1312569 = 0;
	StringCopy(&(Global_1312569.f_1), "", 24);
	Global_1312569.f_7 = 0;
}

void func_49(bool bParam0)
{
	if (!bParam0)
	{
		func_5(&Global_2464684, 1, 0);
	}
	else
	{
		func_50(&Global_2464684);
	}
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_51()
{
	int iVar0;
	
	iVar0 = iLocal_111;
	if (iVar0 > -1 && iVar0 < 32)
	{
		if (Local_116[iLocal_111 /*4*/].f_3)
		{
			if (!unk_0xDCC86F723E82125E(iLocal_98, 7))
			{
				unk_0x59A0729D503ED758(&iLocal_98, 7);
			}
		}
	}
}

void func_52()
{
	Local_116[unk_0x141F0E5D020B2DB5() /*4*/].f_3 = 1;
}

int func_53()
{
	int iVar0;
	
	if (!func_55())
	{
		return 0;
	}
	if (!unk_0xB45DF29A98EEAD5D())
	{
		iVar0 = func_54(2915, -1, 0);
		if (!unk_0xDCC86F723E82125E(iVar0, 6))
		{
			unk_0x59A0729D503ED758(&iVar0, 6);
			func_275("FLOW_CS_SKIP", -1);
			func_16(2915, iVar0, -1, 1);
		}
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (!unk_0x23F863EF7FB5E687())
		{
			if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
			{
				return 1;
			}
		}
	}
	else if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_55()
{
	return func_54(2904, -1, 0) > 0;
}

void func_56()
{
	unk_0x8E6D4B516B44DE88(0);
	func_60(0, 1, 0, 1, 0, 1, 0);
	unk_0xD86D1440F51EEB6E(0, 0);
	unk_0x0217B82D340DA699(0);
	func_57(1, 1);
	func_272(1);
}

void func_57(bool bParam0, int iParam1)
{
	func_59();
	func_45(1);
	unk_0x9F4AA6F234E8A860(1);
	unk_0x7846F09C04C34C46();
	func_37(1, 1, 1, 0);
	func_58();
	func_35(12, 1, -1);
	func_34(0);
	unk_0xFF14BCEFC40262BF(1, -1);
	unk_0xB7709513BF7C1AC0(0);
	unk_0xB1DF6C0157E453DE(0);
	func_45(1);
	func_32(1);
	Global_2426867.f_3136 = 1;
	if (bParam0)
	{
		if (!unk_0x547823CBA92EEF50())
		{
			unk_0x4C409393D24BAACF(1, iParam1);
		}
	}
}

void func_58()
{
	func_34(0);
	func_35(4, 1, -1);
	func_35(6, 1, -1);
	func_35(7, 1, -1);
	func_35(3, 1, -1);
	func_35(1, 1, -1);
	func_35(2, 1, -1);
	func_35(11, 1, -1);
	func_35(13, 1, -1);
	func_35(14, 1, -1);
	func_35(16, 1, -1);
}

void func_59()
{
	Global_1312569 = 1;
	StringCopy(&(Global_1312569.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312569.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312569.f_1));
}

void func_60(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_62();
	func_41(1);
	func_34(1);
	func_35(12, 1, -1);
	func_61();
	unk_0x384EC102F362C893(0);
	if (bParam0)
	{
		unk_0xC6B24B24C8BCC445(unk_0xA34E7C2A5118D638(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_25(unk_0xA34E7C2A5118D638(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0x8AF57B7CF7F1331B(unk_0xC8B93D94F8954288()))
		{
			unk_0xD6A1047C5FCFCEB6(unk_0xC8B93D94F8954288(), 0);
		}
	}
}

void func_61()
{
	Global_17118.f_5 = 1;
}

void func_62()
{
	func_42(0);
	func_41(1);
}

int func_63()
{
	switch (iLocal_246)
	{
		case 0:
			break;
		
		case 1:
			if (func_64(iLocal_107[0], &(uLocal_103[0])))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_64(iLocal_107[0], &(uLocal_103[0])) && func_64(iLocal_107[1], &(uLocal_103[1])))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_64(iLocal_107[0], &(uLocal_103[0])) && func_64(iLocal_107[1], &(uLocal_103[1]))) && func_64(iLocal_107[2], &(uLocal_103[2])))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_64(int iParam0, var uParam1)
{
	var uVar0;
	struct<10> Var1;
	
	if (!unk_0x95CCECA3948CFE7B(*uParam1))
	{
		uVar0 = unk_0xCF4C00513A86E840(uParam0);
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (!unk_0x2DC9BA2299B45EA6(uVar0))
			{
				*uParam1 = unk_0x2CC20E6F4A72C4D8(iVar0, 0, 0, 0);
				Var1.f_1 = -1;
				Var1.f_2 = -1;
				Var1.f_3 = -1;
				Var1.f_4 = -1;
				Var1.f_8 = -1;
				Var1.f_9 = 20;
				Var1.f_0 = iVar0;
				Var1.f_2 = -1;
				Var1.f_6 = 1;
				Var1.f_8 = iParam0;
				func_65(&Var1, 1, 1, 0, 1, 1, 0);
				unk_0xEE6504C7ECC425AB(*uParam1, 1);
				unk_0xAAD662D7E0D59F4C(*uParam1, 1);
				unk_0x872B541D7953A19B(*uParam1, false, 0);
			}
		}
	}
	if (!unk_0x95CCECA3948CFE7B(*uParam1))
	{
		return 0;
	}
	if (!unk_0x2DC9BA2299B45EA6(*uParam1))
	{
		if (!unk_0x8D5BFC55CE180425(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_65(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	struct<14> Var9;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	struct<4> Var27;
	int iVar44;
	int iVar45;
	bool bVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	struct<4> Var51;
	int iVar66;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_69247[iVar0] = -1;
		Global_69247.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_69247.f_26)
	{
		Global_69247.f_26[iVar0] = -1;
		Global_69247.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_69247.f_46)
	{
		Global_69247.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!unk_0x902595DAD7718896(*uParam0, 1))
	{
		iVar1 = unk_0x6D5BB810CC209E15(*uParam0);
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 726)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 164)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (func_262(&Global_69247, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (func_258(&Global_69247, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (func_256(*uParam0, &Global_69247, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (func_256(*uParam0, &Global_69247, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!func_255(uParam0, &Global_69247))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						
						case 1:
							if (!bParam6)
							{
								unk_0x962B7D68444204CB(*uParam0);
								unk_0x1775E0DE78304CB9(*uParam0, 1);
								if (bParam3)
								{
									unk_0x33A1196C1AC59747(*uParam0);
									unk_0xB834C31CE224FA2C(*uParam0);
								}
								iVar6 = 0;
								uVar7 = unk_0x3A59BCC40A12FD28(*uParam0, 5);
								iVar8 = -1;
								uVar7 = uVar7;
								iVar8 = iVar8;
								if (func_254(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && iParam5)
								{
									Global_69247[5] = 0;
									if (Global_69247.f_13[5] == -1)
									{
										Global_69247.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (func_253(uParam0->f_2) == 22)
										{
											Global_69247.f_26[2] = -1;
										}
										else if (func_253(uParam0->f_2) == 8)
										{
											Global_69247.f_26[1] = -1;
											Global_69247.f_26[2] = -1;
										}
										else
										{
											Global_69247.f_26[1] = -1;
											Global_69247.f_26[2] = -1;
											Global_69247.f_26[0] = -1;
											if (unk_0x277ECDA23D8CCEB4(*uParam0, 0))
											{
												unk_0xF5A326C6FF81EDEF(*uParam0);
											}
										}
										if (unk_0x6D5BB810CC209E15(*uParam0) == joaat("mp_f_freemode_01"))
										{
											if (func_251(iVar1, 7, func_252(*uParam0, Global_69247[7], Global_69247[7], 7)))
											{
												Global_69247[7] = 0;
												Global_69247.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										Global_69247.f_26[1] = -1;
										Global_69247.f_26[2] = -1;
										Global_69247.f_26[0] = -1;
										if (unk_0x6D5BB810CC209E15(*uParam0) == joaat("mp_f_freemode_01"))
										{
											if (func_251(iVar1, 7, func_252(*uParam0, Global_69247[7], Global_69247[7], 7)))
											{
												Global_69247[7] = 0;
												Global_69247.f_13[7] = 0;
											}
										}
										if (unk_0x277ECDA23D8CCEB4(*uParam0, 0))
										{
											unk_0xF5A326C6FF81EDEF(*uParam0);
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_69247.f_26[1] = -1;
										Global_69247.f_26[2] = -1;
										Global_69247.f_26[0] = -1;
										if (unk_0x277ECDA23D8CCEB4(*uParam0, 0))
										{
											unk_0xF5A326C6FF81EDEF(*uParam0);
										}
									}
								}
								func_250(*uParam0, &Global_69247, uParam0->f_8);
								if (!unk_0x01857CD66B677E58(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										unk_0xF066C933D7BB55AD(*uParam0, Global_69247.f_26[0], 1);
										unk_0x80582B443154F91B(*uParam0, Global_69247.f_36[0]);
									}
									else
									{
										Var9 = { func_208(iVar1, 14, func_54(578, -1, 0)) };
										unk_0xF066C933D7BB55AD(*uParam0, Var9.f_3, 1);
										unk_0x80582B443154F91B(*uParam0, Var9.f_4);
									}
								}
								if (unk_0xDCC86F723E82125E(Global_1613622.f_79[Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_85.f_28 /*6794*/].f_3822, 4))
								{
									if (Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_114 == 7 || Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_114 == 2)
									{
										unk_0xF57CD658A9A3BA69(*uParam0, 4, 0, 0f);
									}
								}
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_69247[iVar0] != -1)
									{
										unk_0x8C245572EDB27776(*uParam0, iVar0, Global_69247[iVar0], Global_69247.f_13[iVar0], 0);
									}
									iVar0++;
								}
								iVar0 = 0;
								while (iVar0 < Global_69247.f_26)
								{
									if (Global_69247.f_26[iVar0] != -1 && Global_69247.f_26[iVar0] != 255)
									{
										unk_0x9982920999FF4733(*uParam0, iVar0, Global_69247.f_26[iVar0], Global_69247.f_36[iVar0], true);
									}
									iVar0++;
								}
								if (!func_207())
								{
									if (uParam0->f_3 != -1)
									{
										func_197(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_197(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == unk_0xC8B93D94F8954288() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										func_16(2052, 1, -1, 1);
									}
									if (func_196(*uParam0, 7))
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											unk_0x8C245572EDB27776(*uParam0, 7, 0, 0, 0);
											unk_0x37D5496B3B31995F(*uParam0, 0);
										}
									}
									else if (func_195(*uParam0))
									{
										iVar23 = func_194(*uParam0, 1);
										iVar24 = unk_0x268F3DC177BF5D38(*uParam0, 8);
										unk_0x8C245572EDB27776(*uParam0, 8, iVar23, iVar24, 0);
										unk_0x37D5496B3B31995F(*uParam0, 0);
									}
									else if (!func_195(*uParam0) && func_193(*uParam0))
									{
										iVar25 = func_194(*uParam0, 0);
										iVar26 = unk_0x268F3DC177BF5D38(*uParam0, 8);
										unk_0x8C245572EDB27776(*uParam0, 8, iVar25, iVar26, 0);
										unk_0x37D5496B3B31995F(*uParam0, 0);
									}
									func_192(*uParam0);
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("mp_m_freemode_01"))
										{
											unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var27);
										}
										else if (iVar1 == joaat("mp_f_freemode_01"))
										{
											unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var27);
										}
										if (Global_69247[2] == Var27.f_3)
										{
											Global_69247[2] = -1;
										}
									}
									if (Global_69247[2] == -1)
									{
										if ((uParam0->f_8 != -1 && unk_0x20A20BF765914E37(uParam0->f_8) != unk_0xA34E7C2A5118D638()) && !*uParam0 == unk_0xC8B93D94F8954288())
										{
											iVar44 = Global_2417071[uParam0->f_8 /*306*/].f_237;
											iVar45 = Global_2417071[uParam0->f_8 /*306*/].f_238;
											func_127(*uParam0, 2, Global_2417071[uParam0->f_8 /*306*/].f_236, 0, -1, 0, 0, 0, iVar44, iVar45, uParam0->f_8, 1);
										}
										else
										{
											iVar44 = func_54(2140, -1, 0);
											iVar45 = func_54(2147, -1, 0);
											if (func_126(161, -1))
											{
												func_127(*uParam0, 2, func_54(2040, Global_69176, 0), 0, -1, 0, 0, 0, iVar44, iVar45, -1, 1);
											}
											else
											{
												func_127(*uParam0, 2, func_54(742, Global_69176, 0), 0, -1, 0, 0, 0, iVar44, iVar45, -1, 1);
											}
										}
									}
								}
							}
							if (!func_207())
							{
								if (uParam0->f_1 == 0)
								{
									bVar46 = false;
								}
								else
								{
									bVar46 = true;
								}
								if (uParam0->f_8 != -1)
								{
									func_125(*uParam0, &(Global_1606476[uParam0->f_8 /*21*/]), bVar46);
								}
								else
								{
									func_69(*uParam0, bVar46, 0);
								}
								if (func_68(*uParam0))
								{
									Global_69247.f_46[0] = joaat("MP_Bugstar_A");
									Global_69247.f_46[1] = joaat("MP_Bugstar_B");
									Global_69247.f_46[2] = joaat("MP_Bugstar_C");
								}
								iVar48 = 0;
								while (iVar48 < Global_69247.f_46)
								{
									if (Global_69247.f_46[iVar48] != -1)
									{
										bVar47 = true;
									}
									iVar48++;
								}
								if (bVar47)
								{
									if (iVar1 == joaat("mp_m_freemode_01"))
									{
										iVar66 = 3;
									}
									else if (iVar1 == joaat("mp_f_freemode_01"))
									{
										iVar66 = 4;
									}
									iVar50 = unk_0x1A63000484B6AF50(iVar66);
									func_69(*uParam0, bVar46, 0);
									iVar49 = 0;
									while (iVar49 < iVar50)
									{
										if (unk_0x4837866CF25A54CD(iVar66, iVar49, &Var51))
										{
											iVar48 = 0;
											while (iVar48 < Global_69247.f_46)
											{
												if (Global_69247.f_46[iVar48] == Var51.f_3 && Global_69247.f_46[iVar48] != -1)
												{
													unk_0x427BAD5517247249(*uParam0, Var51.f_2, Var51.f_3);
													func_67(*uParam0, Var51.f_2, Var51.f_3);
												}
												iVar48++;
											}
										}
										iVar49++;
									}
								}
							}
							unk_0xD7C03E23D4D91466(*uParam0, 0, 0);
							func_66(*uParam0);
							uParam0->f_6 = 2;
							break;
						
						case 2:
							if (!func_207())
							{
								if (!unk_0x8D5BFC55CE180425(*uParam0) || !unk_0x6EAE252212D4D53F(*uParam0))
								{
									return 0;
								}
								else
								{
									unk_0xD18E3053ACCB190F(*uParam0);
									func_66(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								func_66(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_66(var uParam0)
{
	unk_0x77AD8FC27AACD240(uParam0);
	unk_0x6225D75B40725535(uParam0);
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0x427BAD5517247249(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
				
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0x427BAD5517247249(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
		
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_LUXE_TAT_029_M"):
					unk_0x427BAD5517247249(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
					unk_0x427BAD5517247249(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
					break;
				
				case joaat("MP_LUXE_TAT_029_F"):
					unk_0x427BAD5517247249(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
					unk_0x427BAD5517247249(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
					break;
			}
			break;
	}
}

int func_68(int iParam0)
{
	struct<5> Var0;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	bVar17 = unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01");
	iVar18 = unk_0x3A59BCC40A12FD28(iParam0, 11);
	iVar19 = unk_0x268F3DC177BF5D38(iParam0, 11);
	if (bVar17)
	{
		unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_JBIB_12_0"), &Var0);
	}
	else
	{
		unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_JBIB_13_0"), &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}

void func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = Global_69176;
		unk_0x4D60342C432CE7D8(iParam0);
		iVar14 = func_124(iParam0);
		bVar15 = func_116(iParam0);
		bVar16 = func_114(iParam0);
		bVar17 = func_86(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_79(iVar18, iVar0))
			{
				if (func_71(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_70(&Var1, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						unk_0x427BAD5517247249(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_79(123, iVar0))
		{
			if (unk_0x8218F3FE341273DE(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0x427BAD5517247249(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = unk_0x1A63000484B6AF50(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (unk_0x4837866CF25A54CD(iVar14, iVar19, &Var21))
			{
				if (!unk_0x06C32703437E5BC3(Var21.f_0))
				{
					iVar36 = (129 + iVar19);
					if (func_79(iVar36, iVar0))
					{
						if (func_70(&(Var21.f_7), Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							unk_0x427BAD5517247249(iParam0, Var21.f_2, Var21.f_3);
							func_67(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

int func_70(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	iVar0 = unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288());
	if (iParam1 == 449512698)
	{
		return 0;
	}
	switch (iParam2)
	{
		case joaat("CHEST_MID"):
		case joaat("SIDE_RIGHT"):
		case joaat("STOMACH_RIGHT"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_FULL"):
		case joaat("STOMACH_LEFT"):
		case 1361645381:
		case -1238079313:
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("STOMACH_FULL"):
			if (bParam3)
			{
				return 0;
			}
			if ((((((iParam2 == joaat("CHEST_FULL") && iVar0 == joaat("mp_f_freemode_01")) || (iParam2 == joaat("CHEST_MID") && iVar0 == joaat("mp_f_freemode_01"))) || (iParam2 == joaat("CHEST_LEFT") && iVar0 == joaat("mp_f_freemode_01"))) || iParam2 == joaat("CHEST_RIGHT")) || (iParam2 == joaat("CHEST_STOM") && iVar0 == joaat("mp_f_freemode_01"))) || (iParam2 == joaat("CHEST_STOM_FULL") && iVar0 == joaat("mp_f_freemode_01")))
			{
				if (Global_2558022 == -1)
				{
					if (func_79(13, -1))
					{
						return 0;
					}
					else if (func_79(14, -1))
					{
						return 0;
					}
					else if (func_79(15, -1))
					{
						return 0;
					}
					else if (func_79(16, -1))
					{
					}
					else if (func_79(71, -1))
					{
					}
					else if (func_79(72, -1))
					{
					}
				}
				else if (Global_2558022 == 13)
				{
					return 0;
				}
				else if (Global_2558022 == 14)
				{
					return 0;
				}
				else if (Global_2558022 == 15)
				{
					return 0;
				}
				else if (Global_2558022 == 16)
				{
				}
				else if (Global_2558022 == 71)
				{
				}
				else if (Global_2558022 == 72)
				{
				}
			}
			else if (iParam2 == joaat("STOMACH_FULL") && iVar0 == joaat("mp_f_freemode_01"))
			{
				if (Global_2558022 == -1)
				{
					if (func_79(13, -1))
					{
					}
					else if (func_79(14, -1))
					{
					}
					else if (func_79(15, -1))
					{
						return 0;
					}
					else if (func_79(16, -1))
					{
					}
					else if (func_79(71, -1))
					{
					}
					else if (func_79(72, -1))
					{
					}
				}
				else if (Global_2558022 == 13)
				{
				}
				else if (Global_2558022 == 14)
				{
				}
				else if (Global_2558022 == 15)
				{
					return 0;
				}
				else if (Global_2558022 == 16)
				{
				}
				else if (Global_2558022 == 71)
				{
				}
				else if (Global_2558022 == 72)
				{
				}
			}
			break;
		
		case 1484379715:
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			if (bParam6)
			{
				return 0;
			}
			break;
		
		case 1019352240:
			if (bParam4)
			{
				return 0;
			}
			if (bParam3)
			{
				if (Global_2558022 == -1)
				{
					if (func_79(13, -1))
					{
						return 0;
					}
					else if (func_79(14, -1))
					{
						return 0;
					}
					else if (func_79(15, -1))
					{
						return 0;
					}
					else if (func_79(16, -1))
					{
					}
					else if (func_79(71, -1))
					{
					}
					else if (func_79(72, -1))
					{
					}
				}
				else if (Global_2558022 == 13)
				{
					return 0;
				}
				else if (Global_2558022 == 14)
				{
					return 0;
				}
				else if (Global_2558022 == 15)
				{
					return 0;
				}
				else if (Global_2558022 == 16)
				{
				}
				else if (Global_2558022 == 71)
				{
				}
				else if (Global_2558022 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam3)
			{
				if (!unk_0xB8A06E7E729EED0A(sParam0))
				{
					switch (unk_0x7CBED6EFED40E7EB(sParam0))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (Global_2558022 == -1)
				{
					if (func_79(13, -1))
					{
					}
					else if (func_79(14, -1))
					{
					}
					else if (func_79(15, -1))
					{
					}
					else if (func_79(16, -1))
					{
					}
					else if (func_79(71, -1))
					{
					}
					else if (func_79(72, -1))
					{
					}
				}
				else if (Global_2558022 == 13)
				{
					return 0;
				}
				else if (Global_2558022 == 14)
				{
				}
				else if (Global_2558022 == 15)
				{
					return 0;
				}
				else if (Global_2558022 == 16)
				{
				}
				else if (Global_2558022 == 71)
				{
				}
				else if (Global_2558022 == 72)
				{
				}
			}
			break;
		
		case joaat("torsoDecal"):
			if (bParam5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_78(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (unk_0x95CCECA3948CFE7B(iParam3) && !unk_0x2DC9BA2299B45EA6(iParam3))
	{
		iVar0 = unk_0x6D5BB810CC209E15(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_77() || func_76())
					{
						iVar1 = 400;
						if (func_75() && (func_74() || func_73()))
						{
							iVar1 = 0;
						}
						func_78(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_78(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_72(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_77() || func_76())
					{
						iVar1 = 450;
						if (func_75() && (func_74() || func_73()))
						{
							iVar1 = 0;
						}
						func_78(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_78(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_72(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_77() || func_76())
					{
						iVar1 = 380;
						if (func_75() && (func_74() || func_73()))
						{
							iVar1 = 0;
						}
						func_78(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_78(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_72(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(20000) * Global_262145.f_2900)), 0);
					break;
				
				case 1:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1400) * Global_262145.f_2901)), 2);
					break;
				
				case 2:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(9750) * Global_262145.f_2902)), 3);
					break;
				
				case 3:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2150) * Global_262145.f_2903)), 0);
					break;
				
				case 4:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2904)), 0);
					break;
				
				case 54:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12400) * Global_262145.f_2905)), 1);
					break;
				
				case 5:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3500) * Global_262145.f_2906)), 0);
					break;
				
				case 6:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(4950) * Global_262145.f_2907)), 2);
					break;
				
				case 55:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1350) * Global_262145.f_2908)), 1);
					break;
				
				case 7:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1450) * Global_262145.f_2909)), 0);
					break;
				
				case 8:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2700) * Global_262145.f_2910)), 7);
					break;
				
				case 9:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1200) * Global_262145.f_2911)), 0);
					break;
				
				case 10:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1500) * Global_262145.f_2912)), 0);
					break;
				
				case 11:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2650) * Global_262145.f_2913)), 0);
					break;
				
				case 56:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1900) * Global_262145.f_2914)), 1);
					break;
				
				case 12:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(4950) * Global_262145.f_2915)), 2);
					break;
				
				case 57:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2400) * Global_262145.f_2916)), 1);
					break;
				
				case 58:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5100) * Global_262145.f_2917)), 1);
					break;
				
				case 59:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7400) * Global_262145.f_2918)), 1);
					break;
				
				case 60:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2919)), 1);
					break;
				
				case 17:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2400) * Global_262145.f_2924)), 2);
					break;
				
				case 18:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5100) * Global_262145.f_2925)), 2);
					break;
				
				case 19:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3600) * Global_262145.f_2926)), 2);
					break;
				
				case 20:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2927)), 3);
					break;
				
				case 21:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12500) * Global_262145.f_2928)), 3);
					break;
				
				case 22:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2929)), 3);
					break;
				
				case 23:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2930)), 3);
					break;
				
				case 24:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7500) * Global_262145.f_2931)), 3);
					break;
				
				case 25:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3750) * Global_262145.f_2932)), 2);
					break;
				
				case 26:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3750) * Global_262145.f_2933)), 3);
					break;
				
				case 27:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(4800) * Global_262145.f_2934)), 3);
					break;
				
				case 28:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3500) * Global_262145.f_2935)), 3);
					break;
				
				case 61:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12350) * Global_262145.f_2936)), 1);
					break;
				
				case 62:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1900) * Global_262145.f_2937)), 1);
					break;
				
				case 63:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(4500) * Global_262145.f_2938)), 1);
					break;
				
				case 64:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12250) * Global_262145.f_2939)), 1);
					break;
				
				case 65:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12300) * Global_262145.f_2940)), 1);
					break;
				
				case 29:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2500) * Global_262145.f_2941)), 0);
					break;
				
				case 30:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2942)), 0);
					break;
				
				case 31:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2943)), 0);
					break;
				
				case 66:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7500) * Global_262145.f_2944)), 1);
					break;
				
				case 32:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2945)), 2);
					break;
				
				case 33:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7300) * Global_262145.f_2946)), 3);
					break;
				
				case 34:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7250) * Global_262145.f_2947)), 2);
					break;
				
				case 35:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(11900) * Global_262145.f_2948)), 0);
					break;
				
				case 36:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2750) * Global_262145.f_2949)), 0);
					break;
				
				case 37:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1750) * Global_262145.f_2950)), 0);
					break;
				
				case 38:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7300) * Global_262145.f_2951)), 3);
					break;
				
				case 39:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(3250) * Global_262145.f_2952)), 2);
					break;
				
				case 40:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1000) * Global_262145.f_2953)), 0);
					break;
				
				case 67:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2954)), 1);
					break;
				
				case 41:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7500) * Global_262145.f_2955)), 2);
					break;
				
				case 68:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5100) * Global_262145.f_2956)), 1);
					break;
				
				case 42:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5050) * Global_262145.f_2957)), 0);
					break;
				
				case 43:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2450) * Global_262145.f_2958)), 2);
					break;
				
				case 44:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(4950) * Global_262145.f_2959)), 0);
					break;
				
				case 45:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5100) * Global_262145.f_2960)), 0);
					break;
				
				case 46:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(12250) * Global_262145.f_2961)), 0);
					break;
				
				case 47:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1150) * Global_262145.f_2962)), 3);
					break;
				
				case 48:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7500) * Global_262145.f_2963)), 3);
					break;
				
				case 49:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7600) * Global_262145.f_2964)), 3);
					break;
				
				case 50:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2600) * Global_262145.f_2965)), 2);
					break;
				
				case 51:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2500) * Global_262145.f_2966)), 3);
					break;
				
				case 52:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7450) * Global_262145.f_2967)), 3);
					break;
				
				case 53:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(7500) * Global_262145.f_2968)), 0);
					break;
				
				case 69:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2969)), 1);
					break;
				
				case 70:
					func_78(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(2500) * Global_262145.f_2970)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2971)), 0);
						break;
					
					case 88:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2972)), 0);
						break;
					
					case 89:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2973)), 0);
						break;
					
					case 93:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2920)), 0);
						break;
					
					case 14:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2921)), 0);
						break;
					
					case 15:
						func_78(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2922)), 2);
						break;
					
					case 16:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2923)), 0);
						break;
					
					case 71:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2923)), 0);
						break;
					
					case 72:
						func_78(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2923)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case joaat("mpsv_lp0_31"):
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2971)), 0);
						break;
					
					case 88:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2972)), 0);
						break;
					
					case 89:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(100) * Global_262145.f_2973)), 0);
						break;
					
					case 93:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_78(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2920)), 0);
						break;
					
					case 14:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(5000) * Global_262145.f_2921)), 0);
						break;
					
					case 15:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2922)), 2);
						break;
					
					case 16:
						func_78(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(10000) * Global_262145.f_2923)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_72(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_72(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = unk_0x1A63000484B6AF50(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (unk_0x4837866CF25A54CD(iParam1, iVar0, &Var2))
		{
			if (!unk_0x06C32703437E5BC3(Var2.f_0))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_73()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (unk_0xDCC86F723E82125E(Global_25, 5))
	{
		if (unk_0xDCC86F723E82125E(Global_25, 1) || unk_0xDCC86F723E82125E(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xDCC86F723E82125E(uVar0, 5))
		{
			if (unk_0xDCC86F723E82125E(iVar0, 1) || unk_0xDCC86F723E82125E(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xD2B9A826BD9EDF3E(0))
	{
		if (Global_138041.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x5F0618A5FDAD55C4(iVar2, &uVar1, -1))
			{
				if (unk_0xDCC86F723E82125E(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		uVar3 = unk_0x11BD984A2A4EF9A7(866);
		if (unk_0xDCC86F723E82125E(uVar3, 1) || unk_0xDCC86F723E82125E(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x7897609594472C66())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x59A0729D503ED758(&uVar4, 1);
				unk_0x59A0729D503ED758(&uVar4, 3);
				unk_0x59A0729D503ED758(&uVar4, 5);
				unk_0x59A0729D503ED758(&Global_25, 1);
				unk_0x59A0729D503ED758(&Global_25, 3);
				unk_0x59A0729D503ED758(&Global_25, 5);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar4 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar4, 1);
					unk_0x59A0729D503ED758(&iVar4, 3);
					unk_0x1F071A4E400AAE0A(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_74()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0xDCC86F723E82125E(Global_25, 6))
	{
		if (unk_0xDCC86F723E82125E(Global_25, 2) || unk_0xDCC86F723E82125E(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xDCC86F723E82125E(uVar0, 6))
		{
			if (unk_0xDCC86F723E82125E(iVar0, 2) || unk_0xDCC86F723E82125E(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xD2B9A826BD9EDF3E(0))
	{
		if (Global_138041.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x5F0618A5FDAD55C4(iVar2, &uVar1, -1))
			{
				if (unk_0xDCC86F723E82125E(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		uVar3 = unk_0x11BD984A2A4EF9A7(866);
		if (unk_0xDCC86F723E82125E(uVar3, 2) || unk_0xDCC86F723E82125E(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_76()
{
	return 1;
}

int func_77()
{
	return 1;
}

void func_78(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = unk_0x7CBED6EFED40E7EB(sParam4);
	sParam0->f_5 = unk_0x7CBED6EFED40E7EB(sParam5);
	sParam0->f_8 = unk_0x7CBED6EFED40E7EB(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (unk_0x95CCECA3948CFE7B(iParam2) && !unk_0x2DC9BA2299B45EA6(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (unk_0x6D5BB810CC209E15(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (unk_0xF8D041B05C3D1FD4(sParam6, "torsoDecal") || unk_0xF8D041B05C3D1FD4(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (unk_0x6D5BB810CC209E15(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = unk_0x7CBED6EFED40E7EB(&cVar0);
			if (unk_0x8218F3FE341273DE(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

bool func_79(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_81(iParam0, iParam1);
	iVar1 = func_80(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(uVar0, iVar1);
}

int func_80(int iParam0)
{
	return (iParam0 % 32);
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(func_82(iParam0), iParam1, 0);
	return iVar0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_85(iVar0);
	if ((func_84() == 0 || func_83() == 0) || (func_84() == 999 && func_83() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1043;
				break;
			
			case 6:
				return 1477;
				break;
			
			case 7:
				return 1478;
				break;
			
			case 8:
				return 1479;
				break;
			
			case 9:
				return 1480;
				break;
			
			case 10:
				return 1936;
				break;
			
			case 11:
				return 1937;
				break;
			
			case 12:
				return 1938;
				break;
			
			case 13:
				return 2396;
				break;
			
			case 14:
				return 2416;
				break;
			
			case 15:
				return 2419;
				break;
			
			case 16:
				return 2422;
				break;
			
			case 17:
				return 2585;
				break;
			
			case 18:
				return 2588;
				break;
			
			case 19:
				return 2591;
				break;
			}
	}
	return 3790;
}

int func_83()
{
	return Global_25116;
}

int func_84()
{
	return Global_25115;
}

int func_85(int iParam0)
{
	return (iParam0 / 32);
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
			iVar2 = func_54(1746, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_91(iParam0, 11, -1);
				if (iVar3 >= 256)
				{
					iVar4 = func_87(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if ((unk_0xED5E7EEE0DB220EF(iVar4, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar2 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
			iVar1 = unk_0x268F3DC177BF5D38(iParam0, 11);
			iVar2 = func_54(1746, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_91(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_87(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar2 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xEB1D5FC55488385F(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_90(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xC9E3A692557F7FB1(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x3157A53507A41BEF(iVar17, &Var0);
			if (!unk_0x06C32703437E5BC3(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x9B9B863E6E606420(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_88(iParam0, func_89(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0xC9E3A692557F7FB1(iParam3, 6, -1, 0, -1, func_89(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x5D83343EA9D5A5C1(iVar38, &Var21);
			if (!unk_0x06C32703437E5BC3(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_98(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_98(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_93(iParam0, iParam2);
			}
		}
		else
		{
			return func_92(iParam0, iParam1);
		}
	}
	return -99;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x2DC9BA2299B45EA6(iParam0))
	{
		return -99;
	}
	iVar0 = func_89(iParam1);
	iVar1 = unk_0x3A59BCC40A12FD28(iParam0, iVar0);
	iVar2 = unk_0x268F3DC177BF5D38(iParam0, iVar0);
	return func_252(iParam0, iVar1, iVar2, iParam1);
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2DC9BA2299B45EA6(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xFEBA5661B4F1602A(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_97(iParam1);
	}
	iVar1 = unk_0x92A7B7367F7CD521(iParam0, iParam1);
	return func_94(iParam0, iVar0, iVar1, iParam1);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_97(iParam3);
	}
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	iVar1 = unk_0x5A20391B13A0611C(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_96(unk_0x6D5BB810CC209E15(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_96(unk_0x6D5BB810CC209E15(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xBD2BD33E382A368B(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xA152B9988697FF66(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_95(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_97(iParam3);
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xEB1D5FC55488385F(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xC9E3A692557F7FB1(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x3157A53507A41BEF(iVar17, &Var0);
			if (!unk_0x06C32703437E5BC3(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_90(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x9B9B863E6E606420(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xC9E3A692557F7FB1(iParam3, 6, -1, 0, -1, func_89(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x5D83343EA9D5A5C1(iVar37, &Var20);
			if (!unk_0x06C32703437E5BC3(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_88(iParam0, func_89(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (unk_0x2DC9BA2299B45EA6(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	Global_69178[1 /*14*/] = { func_208(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_110(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_98(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { func_107(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_98(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69178[2 /*14*/] = { func_208(iVar0, 14, iVar6) };
									if (Global_69178[2 /*14*/].f_12 == iVar5)
									{
										if (func_98(iParam0, 14, iVar6))
										{
											if (!func_102(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69178[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_92(iParam0, iVar4);
						Global_69178[2 /*14*/] = { func_208(iVar0, iVar4, iVar1) };
						if (!func_102(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69178[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (func_54(1746, Global_69176, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { func_107(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_98(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xFEBA5661B4F1602A(iParam0, Global_69178[1 /*14*/].f_12) == Global_69178[1 /*14*/].f_3 && (unk_0x92A7B7367F7CD521(iParam0, Global_69178[1 /*14*/].f_12) == Global_69178[1 /*14*/].f_4 || Global_69178[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_69178[1 /*14*/].f_3 == unk_0x3A59BCC40A12FD28(iParam0, func_89(iParam1)) && Global_69178[1 /*14*/].f_4 == unk_0x268F3DC177BF5D38(iParam0, func_89(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_101(iVar0, 11, func_92(iParam0, 11)))
			{
				if (func_100(iVar0, 4, iParam2, &uVar45))
				{
					return func_98(iParam0, 4, uVar45);
				}
			}
			else if (func_99(iVar0, 4, iParam2, &uVar45))
			{
				return func_98(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_87(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x7D62D032481867D5(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xFBE76C9788411A2E(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0xED5E7EEE0DB220EF(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_96(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_87(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x7D62D032481867D5(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xFBE76C9788411A2E(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0xED5E7EEE0DB220EF(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_96(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 11, 4), joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_107(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_106(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_105(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_105(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_105(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_104(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_87(iParam0, iParam2, 1, 3);
					if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_87(iParam0, iParam2, 1, 4);
					if (unk_0xED5E7EEE0DB220EF(iVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_107(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_109(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_109(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_109(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_109(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_109(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_109(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_109(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_109(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_109(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_109(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_109(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_108(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_109(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_109(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_109(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_109(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_109(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_109(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_109(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_109(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_109(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_109(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_108(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_109(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_109(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_109(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_109(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_109(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_109(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_109(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_109(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_109(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_109(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_108(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_109(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_109(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_109(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_109(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_109(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_109(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_109(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_109(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_109(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_109(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_109(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_109(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_109(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_109(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_109(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_109(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_109(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_109(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_109(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_109(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_109(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_109(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_109(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_109(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_109(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_109(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_108(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_109(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_109(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_109(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_109(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_109(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_109(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_109(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_109(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_109(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_109(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_109(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_109(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_109(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_109(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_109(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_109(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_109(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_109(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_109(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_109(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_109(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_109(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_109(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_109(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_109(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_108(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x20181C8C1C73048A(iParam2, &Var1);
		if (!unk_0x06C32703437E5BC3(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x6EA8C608EE7829A3(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_96(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_110(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_100976.f_7719.f_99.f_58[120])
					{
						func_113(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_113(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_113(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_113(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_113(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_113(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_113(&Var1, -99, -99, Global_100976.f_1770.f_539.f_196[0], Global_100976.f_1770.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_113(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_113(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_113(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_113(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_113(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_113(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_113(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_113(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_113(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_113(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_113(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_113(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_113(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_113(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_113(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_113(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_113(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_113(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_113(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_113(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_113(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_113(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_113(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_113(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_113(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_113(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_113(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_113(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_113(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_113(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_113(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_113(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_113(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_113(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_113(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_113(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_113(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_113(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_113(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_113(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_113(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_113(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_113(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_113(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_113(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_113(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_113(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_111(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_113(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_113(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_113(&Var1, -99, -99, Global_100976.f_1770.f_539.f_196[1], Global_100976.f_1770.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_113(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_113(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_113(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_113(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_113(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_113(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_113(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_113(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_113(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_113(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_113(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_113(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_113(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_113(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_113(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_113(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_113(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_113(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_113(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_113(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_113(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_113(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_113(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_113(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_113(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_113(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_113(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_113(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_113(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_113(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_113(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_113(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_113(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_113(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_113(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_113(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_113(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_113(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_113(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_113(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_113(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_113(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_113(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_113(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_111(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_113(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_113(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_113(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_113(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_113(&Var1, -99, -99, Global_100976.f_1770.f_539.f_196[2], Global_100976.f_1770.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_113(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_113(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_113(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_113(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_113(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_113(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_113(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_113(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_113(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_113(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_113(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_113(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_113(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_113(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_113(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_113(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_113(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_113(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_113(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_113(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_113(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_113(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_113(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_113(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_113(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_113(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_113(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_113(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_113(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_113(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_113(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_113(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_113(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_113(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_113(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_113(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_113(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_113(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_113(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_113(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_113(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_113(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_113(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_111(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_113(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_113(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_113(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_113(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_113(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_113(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_113(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_113(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_113(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_113(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_113(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_113(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_113(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_113(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_113(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_113(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_113(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_113(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_113(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_113(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_113(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_113(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_113(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_113(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_113(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_113(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_111(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_113(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_113(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_113(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_113(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_113(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_113(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_113(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_113(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_113(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_113(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_113(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_113(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_113(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_113(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_113(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_113(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_113(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_113(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_113(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_113(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_113(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_113(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_113(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_113(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_113(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_113(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_113(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_113(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_111(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	int iVar19;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x58563FCB7515F022(iVar0, 0);
	unk_0x72C6687B4C81285A((iParam2 - iParam3), &Var1);
	if (!unk_0x06C32703437E5BC3(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x4CACF88CE190EAAD(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_112(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_112(Var16.f_2)] = func_96(iParam1, Var16.f_0, func_112(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_112(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_85.f_28;
	if (iVar0 != -1 && iVar0 < 4)
	{
		if (func_115(iVar0) != -1 && func_115(iVar0) != 0)
		{
			return 1;
		}
	}
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (unk_0x3A59BCC40A12FD28(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2433864.f_5701[iParam0];
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
			iVar1 = unk_0x268F3DC177BF5D38(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_117(joaat("mp_f_freemode_01"), 11, func_91(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_91(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_87(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if ((unk_0xED5E7EEE0DB220EF(iVar4, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 8);
			iVar1 = unk_0x268F3DC177BF5D38(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_91(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_87(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if ((unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
			iVar1 = unk_0x268F3DC177BF5D38(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_117(joaat("mp_f_freemode_01"), 11, func_91(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_91(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_87(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if ((unk_0xED5E7EEE0DB220EF(iVar9, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar9, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 8);
			iVar1 = unk_0x268F3DC177BF5D38(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_117(joaat("mp_f_freemode_01"), 11, func_91(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_117(joaat("mp_f_freemode_01"), 11, func_91(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_91(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_87(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if ((unk_0xED5E7EEE0DB220EF(iVar13, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar13, joaat("MULTI_DECAL"), 0)) || unk_0xED5E7EEE0DB220EF(iVar13, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (func_68(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_87(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar1 = unk_0x9CEB16FD2DD9853F(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							unk_0x2DFD0B33E5E67629(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != joaat("0"))
								{
									return func_118(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_54(1746, -1, 0);
						}
						return func_118(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 236)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_87(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar7 = unk_0x9CEB16FD2DD9853F(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							unk_0x2DFD0B33E5E67629(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != joaat("0"))
								{
									return func_118(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_54(1746, -1, 0);
						}
						return func_118(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_87(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar12, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar13 = unk_0x9CEB16FD2DD9853F(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							unk_0x2DFD0B33E5E67629(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != joaat("0"))
								{
									return func_118(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (unk_0xED5E7EEE0DB220EF(iVar12, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_54(1746, -1, 0);
						}
						return func_118(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_121(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				if (func_121(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 25)
			{
				if (func_121(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_87(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar18, joaat("TAT_DECL"), 0) || unk_0xED5E7EEE0DB220EF(iVar18, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						iVar19 = unk_0x9CEB16FD2DD9853F(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							unk_0x2DFD0B33E5E67629(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != joaat("0"))
								{
									return func_118(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (unk_0xED5E7EEE0DB220EF(iVar18, joaat("MULTI_DECAL"), 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_54(1746, -1, 0);
						}
						return func_118(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_118(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_120(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_119(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = unk_0x1A63000484B6AF50(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (unk_0x4837866CF25A54CD(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_119(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_F_Chest_002"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_F_Back_001"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_F_LArm_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_F_Back_000"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_F_Should_001"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_F_Back_002"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_F_RSide_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_F_RLeg_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_F_Neck_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_F_Stom_001"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_F_Stom_002"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_F_Should_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_F_Chest_000"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_F_Chest_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_F_Stom_000"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_F_RArm_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Bea_F_LArm_001"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_F_Tshirt_A"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_F_Tshirt_B"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_F_Tshirt_C"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_F_Tshirt_D"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_F_Tshirt_E"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_F_Tshirt_F"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_F_Tshirt_G"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_F_Tshirt_H"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_F_Tshirt_I"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_F_Tshirt_J"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_F_Tshirt_K"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_F_Tshirt_L"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_F_Tshirt_M"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_F_Tshirt_N"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_F_Tshirt_O"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_F_Tshirt_P"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_F_Tshirt_Q"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_F_Tshirt_R"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_F_Tshirt_S"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Val_F_Tshirt_T"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_F_Back_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_F_Back_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_F_Chest_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_F_Chest_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_F_Chest_002"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_F_LArm_000"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_F_LLeg_000"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_F_Neck_000"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_F_Neck_001"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_F_RArm_000"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_F_RLeg_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Buis_F_Stom_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Buis_F_Stom_001"):
			iVar0 = 49;
			break;
		
		case joaat("MP_Buis_F_Stom_002"):
			iVar0 = 50;
			break;
		
		case joaat("MP_Female_Crew_Tat_000"):
			iVar0 = 51;
			break;
		
		case joaat("MP_Female_Crew_Tat_001"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_F_Hair_a"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_F_Hair_b"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_F_Hair_c"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_F_Hair_d"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_F_Hair_e"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Hip_F_Tat_000"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Hip_F_Tat_001"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_F_Tat_002"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_F_Tat_003"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_F_Tat_004"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_F_Tat_005"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_F_Tat_006"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_F_Tat_007"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_F_Tat_008"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_F_Tat_009"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_F_Tat_010"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_F_Tat_011"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_F_Tat_012"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_F_Tat_013"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_F_Tat_014"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_F_Tat_015"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_F_Tat_016"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_F_Tat_017"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_F_Tat_018"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_F_Tat_019"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_F_Tat_020"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_F_Tat_021"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_F_Tat_022"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_F_Tat_023"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_F_Tat_024"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_F_Tat_025"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_F_Tat_026"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_F_Tat_027"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_F_Tat_028"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_F_Tat_029"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_F_Tat_030"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_F_Tat_031"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_F_Tat_032"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_F_Tat_033"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_F_Tat_034"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_F_Tat_035"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_F_Tat_036"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_F_Tat_037"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_F_Tat_038"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_F_Tat_039"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_F_Tat_040"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_F_Tat_041"):
			iVar0 = 99;
			break;
		
		case joaat("FM_Hip_F_Tat_042"):
			iVar0 = 100;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_F_Tat_043"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_F_Tat_044"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_F_Tat_045"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_F_Tat_046"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_F_Tat_047"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_F_Tat_048"):
			iVar0 = 106;
			break;
		
		case joaat("FM_F_Hair_017_a"):
			iVar0 = 107;
			break;
		
		case joaat("FM_F_Hair_017_b"):
			iVar0 = 108;
			break;
		
		case joaat("FM_F_Hair_017_c"):
			iVar0 = 109;
			break;
		
		case joaat("FM_F_Hair_017_d"):
			iVar0 = 110;
			break;
		
		case joaat("FM_F_Hair_017_e"):
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case joaat("FM_F_Hair_019_a"):
			iVar0 = 117;
			break;
		
		case joaat("FM_F_Hair_019_b"):
			iVar0 = 118;
			break;
		
		case joaat("FM_F_Hair_019_c"):
			iVar0 = 119;
			break;
		
		case joaat("FM_F_Hair_019_d"):
			iVar0 = 120;
			break;
		
		case joaat("FM_F_Hair_019_e"):
			iVar0 = 121;
			break;
		
		case joaat("FM_F_Hair_020_a"):
			iVar0 = 122;
			break;
		
		case joaat("FM_F_Hair_020_b"):
			iVar0 = 123;
			break;
		
		case joaat("FM_F_Hair_020_c"):
			iVar0 = 124;
			break;
		
		case joaat("FM_F_Hair_020_d"):
			iVar0 = 125;
			break;
		
		case joaat("FM_F_Hair_020_e"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_F_Hair_000_a"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_F_Hair_000_b"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_F_Hair_000_c"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_F_Hair_000_d"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_F_Hair_000_e"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_F_Tshirt_000"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_F_Tshirt_001"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_F_Tshirt_002"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_F_Tshirt_003"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_F_Tshirt_004"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_F_Tshirt_005"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_F_Tshirt_006"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_F_Tshirt_007"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_F_Tshirt_008"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_F_Tshirt_009"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_F_Tshirt_010"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_F_Tshirt_011"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_F_Tshirt_012"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_F_Tshirt_013"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_F_Tshirt_014"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_F_Tshirt_015"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_F_Tshirt_016"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_F_Tshirt_017"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_F_Tshirt_018"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_F_Tshirt_019"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_F_Tshirt_020"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_F_Tshirt_021"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_F_Tshirt_022"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_F_Retro_000"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Hip_F_Retro_001"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Hip_F_Retro_002"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Hip_F_Retro_003"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Hip_F_Retro_004"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Hip_F_Retro_005"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Hip_F_Retro_006"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Hip_F_Retro_007"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Hip_F_Retro_008"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Hip_F_Retro_009"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Hip_F_Retro_010"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Hip_F_Retro_011"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Hip_F_Retro_012"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Hip_F_Retro_013"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_000"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_001"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Rstar_F_Tshirt_002"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_F_Tshirt_000"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_F_Tshirt_001"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_F_Tshirt_002"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_F_Tshirt_003"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_F_Tshirt_004"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_F_Tshirt_005"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_F_Tshirt_007"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_F_Tshirt_008"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_F_Tshirt_009"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_F_Tshirt_010"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_F_Tshirt_011"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_F_Tshirt_012"):
			iVar0 = 183;
			break;
		
		case joaat("FM_Ind_F_Tshirt_013"):
			iVar0 = 184;
			break;
		
		case joaat("FM_Ind_F_Tshirt_014"):
			iVar0 = 185;
			break;
		
		case joaat("FM_Ind_F_Tshirt_015"):
			iVar0 = 186;
			break;
		
		case joaat("FM_Ind_F_Tshirt_017"):
			iVar0 = 187;
			break;
		
		case joaat("FM_Ind_F_Tshirt_019"):
			iVar0 = 188;
			break;
		
		case joaat("FM_Ind_F_Tshirt_020"):
			iVar0 = 189;
			break;
		
		case joaat("FM_Ind_F_Tshirt_021"):
			iVar0 = 190;
			break;
		
		case joaat("FM_Ind_F_Tshirt_022"):
			iVar0 = 191;
			break;
		
		case joaat("FM_Ind_F_Tshirt_023"):
			iVar0 = 192;
			break;
		
		case joaat("FM_Ind_F_Tshirt_024"):
			iVar0 = 193;
			break;
		
		case joaat("FM_Ind_F_Tshirt_025"):
			iVar0 = 194;
			break;
		
		case joaat("FM_Ind_F_Tshirt_026"):
			iVar0 = 195;
			break;
		
		case joaat("FM_Ind_F_Award_000"):
			iVar0 = 196;
			break;
		
		case joaat("MP_Fli_F_Tshirt_000"):
			iVar0 = 197;
			break;
		
		case joaat("FM_LTS_F_Tshirt_000"):
			iVar0 = 198;
			break;
		
		case joaat("MP_FM_OGA_000_f"):
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_FM_OGA_001_f"):
			iVar0 = 200;
			break;
		
		case joaat("MP_FM_OGA_002_f"):
			iVar0 = 201;
			break;
		
		case joaat("MP_FM_OGA_003_f"):
			iVar0 = 202;
			break;
		
		case joaat("NG_F_Hair_001"):
			iVar0 = 203;
			break;
		
		case joaat("NG_F_Hair_002"):
			iVar0 = 204;
			break;
		
		case joaat("NG_F_Hair_003"):
			iVar0 = 205;
			break;
		
		case joaat("NG_F_Hair_004"):
			iVar0 = 206;
			break;
		
		case joaat("NG_F_Hair_005"):
			iVar0 = 207;
			break;
		
		case joaat("NG_F_Hair_006"):
			iVar0 = 208;
			break;
		
		case joaat("NG_F_Hair_007"):
			iVar0 = 209;
			break;
		
		case joaat("NG_F_Hair_008"):
			iVar0 = 210;
			break;
		
		case joaat("NG_F_Hair_009"):
			iVar0 = 211;
			break;
		
		case joaat("NG_F_Hair_010"):
			iVar0 = 212;
			break;
		
		case joaat("NG_F_Hair_011"):
			iVar0 = 213;
			break;
		
		case joaat("NG_F_Hair_012"):
			iVar0 = 214;
			break;
		
		case joaat("NG_F_Hair_013"):
			iVar0 = 215;
			break;
		
		case joaat("NG_F_Hair_014"):
			iVar0 = 216;
			break;
		
		case joaat("NG_F_Hair_015"):
			iVar0 = 217;
			break;
		
		case joaat("NGBea_F_Hair_000"):
			iVar0 = 218;
			break;
		
		case joaat("NGBea_F_Hair_001"):
			iVar0 = 219;
			break;
		
		case joaat("NGBus_F_Hair_000"):
			iVar0 = 220;
			break;
		
		case joaat("NGBus_F_Hair_001"):
			iVar0 = 221;
			break;
		
		case joaat("NGHip_F_Hair_000"):
			iVar0 = 222;
			break;
		
		case joaat("NGHip_F_Hair_001"):
			iVar0 = 223;
			break;
		
		case joaat("NGInd_F_Hair_000"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_F_Tat_000"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_F_Tat_001"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_F_Tat_002"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_F_Tat_003"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_F_Tat_004"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_F_Tat_005"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_F_Tat_006"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_F_Tat_007"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_F_Tat_008"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_F_Tat_009"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_F_Tat_010"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_F_Tat_011"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_F_Tat_012"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_F_Tat_013"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_F_Tat_014"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_F_Tat_015"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_F_Tat_016"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Xmas2_F_Tat_017"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Xmas2_F_Tat_018"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Xmas2_F_Tat_019"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Xmas2_F_Tat_020"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Xmas2_F_Tat_021"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Xmas2_F_Tat_022"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Xmas2_F_Tat_023"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Xmas2_F_Tat_024"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Xmas2_F_Tat_025"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Xmas2_F_Tat_026"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Xmas2_F_Tat_027"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Xmas2_F_Tat_028"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Xmas2_F_Tat_029"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Award_F_Tshirt_004"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Award_F_Tshirt_005"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Award_F_Tshirt_006"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Award_F_Tshirt_007"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Award_F_Tshirt_008"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Award_F_Tshirt_009"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Award_F_Tshirt_010"):
			iVar0 = 261;
			break;
		
		case joaat("MP_Award_F_Tshirt_011"):
			iVar0 = 262;
			break;
		
		case joaat("MP_Award_F_Tshirt_012"):
			iVar0 = 263;
			break;
		
		case joaat("MP_Award_F_Tshirt_013"):
			iVar0 = 264;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 265;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 266;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 267;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 268;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 269;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 270;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 271;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 272;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 273;
			break;
		
		case joaat("MP_Elite_F_Tshirt"):
			iVar0 = 274;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_120(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_Bea_M_LArm_001"):
			iVar0 = 0;
			break;
		
		case joaat("MP_Bea_M_Back_000"):
			iVar0 = 1;
			break;
		
		case joaat("MP_Bea_M_Chest_000"):
			iVar0 = 2;
			break;
		
		case joaat("MP_Bea_M_Chest_001"):
			iVar0 = 3;
			break;
		
		case joaat("MP_Bea_M_Head_000"):
			iVar0 = 4;
			break;
		
		case joaat("MP_Bea_M_Head_001"):
			iVar0 = 5;
			break;
		
		case joaat("MP_Bea_M_Stom_000"):
			iVar0 = 6;
			break;
		
		case joaat("MP_Bea_M_LArm_000"):
			iVar0 = 7;
			break;
		
		case joaat("MP_Bea_M_Rleg_000"):
			iVar0 = 8;
			break;
		
		case joaat("MP_Bea_M_RArm_000"):
			iVar0 = 9;
			break;
		
		case joaat("MP_Bea_M_Lleg_000"):
			iVar0 = 10;
			break;
		
		case joaat("MP_Bea_M_Neck_000"):
			iVar0 = 11;
			break;
		
		case joaat("MP_Bea_M_Neck_001"):
			iVar0 = 12;
			break;
		
		case joaat("MP_Bea_M_RArm_001"):
			iVar0 = 13;
			break;
		
		case joaat("MP_Bea_M_Head_002"):
			iVar0 = 14;
			break;
		
		case joaat("MP_Bea_M_Stom_001"):
			iVar0 = 15;
			break;
		
		case joaat("MP_Val_M_Tshirt_A"):
			iVar0 = 16;
			break;
		
		case joaat("MP_Val_M_Tshirt_B"):
			iVar0 = 17;
			break;
		
		case joaat("MP_Val_M_Tshirt_C"):
			iVar0 = 18;
			break;
		
		case joaat("MP_Val_M_Tshirt_D"):
			iVar0 = 19;
			break;
		
		case joaat("MP_Val_M_Tshirt_E"):
			iVar0 = 20;
			break;
		
		case joaat("MP_Val_M_Tshirt_F"):
			iVar0 = 21;
			break;
		
		case joaat("MP_Val_M_Tshirt_G"):
			iVar0 = 22;
			break;
		
		case joaat("MP_Val_M_Tshirt_H"):
			iVar0 = 23;
			break;
		
		case joaat("MP_Val_M_Tshirt_I"):
			iVar0 = 24;
			break;
		
		case joaat("MP_Val_M_Tshirt_J"):
			iVar0 = 25;
			break;
		
		case joaat("MP_Val_M_Tshirt_K"):
			iVar0 = 26;
			break;
		
		case joaat("MP_Val_M_Tshirt_L"):
			iVar0 = 27;
			break;
		
		case joaat("MP_Val_M_Tshirt_M"):
			iVar0 = 28;
			break;
		
		case joaat("MP_Val_M_Tshirt_N"):
			iVar0 = 29;
			break;
		
		case joaat("MP_Val_M_Tshirt_O"):
			iVar0 = 30;
			break;
		
		case joaat("MP_Val_M_Tshirt_P"):
			iVar0 = 31;
			break;
		
		case joaat("MP_Val_M_Tshirt_Q"):
			iVar0 = 32;
			break;
		
		case joaat("MP_Val_M_Tshirt_R"):
			iVar0 = 33;
			break;
		
		case joaat("MP_Val_M_Tshirt_S"):
			iVar0 = 34;
			break;
		
		case joaat("MP_Val_M_Tshirt_T"):
			iVar0 = 35;
			break;
		
		case joaat("MP_Buis_M_Back_000"):
			iVar0 = 36;
			break;
		
		case joaat("MP_Buis_M_Chest_000"):
			iVar0 = 37;
			break;
		
		case joaat("MP_Buis_M_Chest_001"):
			iVar0 = 38;
			break;
		
		case joaat("MP_Buis_M_LeftArm_000"):
			iVar0 = 39;
			break;
		
		case joaat("MP_Buis_M_LeftArm_001"):
			iVar0 = 40;
			break;
		
		case joaat("MP_Buis_M_Neck_000"):
			iVar0 = 41;
			break;
		
		case joaat("MP_Buis_M_Neck_001"):
			iVar0 = 42;
			break;
		
		case joaat("MP_Buis_M_Neck_002"):
			iVar0 = 43;
			break;
		
		case joaat("MP_Buis_M_Neck_003"):
			iVar0 = 44;
			break;
		
		case joaat("MP_Buis_M_RightArm_000"):
			iVar0 = 45;
			break;
		
		case joaat("MP_Buis_M_RightArm_001"):
			iVar0 = 46;
			break;
		
		case joaat("MP_Buis_M_Stomach_000"):
			iVar0 = 47;
			break;
		
		case joaat("MP_Male_Crew_Tat_000"):
			iVar0 = 48;
			break;
		
		case joaat("MP_Male_Crew_Tat_001"):
			iVar0 = 49;
			break;
		
		case joaat("FM_Bus_M_Hair_000_a"):
			iVar0 = 50;
			break;
		
		case joaat("FM_Bus_M_Hair_000_b"):
			iVar0 = 51;
			break;
		
		case joaat("FM_Bus_M_Hair_000_c"):
			iVar0 = 52;
			break;
		
		case joaat("FM_Bus_M_Hair_000_d"):
			iVar0 = 53;
			break;
		
		case joaat("FM_Bus_M_Hair_000_e"):
			iVar0 = 54;
			break;
		
		case joaat("FM_Bus_M_Hair_001_a"):
			iVar0 = 55;
			break;
		
		case joaat("FM_Bus_M_Hair_001_b"):
			iVar0 = 56;
			break;
		
		case joaat("FM_Bus_M_Hair_001_c"):
			iVar0 = 57;
			break;
		
		case joaat("FM_Bus_M_Hair_001_d"):
			iVar0 = 58;
			break;
		
		case joaat("FM_Bus_M_Hair_001_e"):
			iVar0 = 59;
			break;
		
		case joaat("FM_Hip_M_Tat_000"):
			iVar0 = 60;
			break;
		
		case joaat("FM_Hip_M_Tat_001"):
			iVar0 = 61;
			break;
		
		case joaat("FM_Hip_M_Tat_002"):
			iVar0 = 62;
			break;
		
		case joaat("FM_Hip_M_Tat_003"):
			iVar0 = 63;
			break;
		
		case joaat("FM_Hip_M_Tat_004"):
			iVar0 = 64;
			break;
		
		case joaat("FM_Hip_M_Tat_005"):
			iVar0 = 65;
			break;
		
		case joaat("FM_Hip_M_Tat_006"):
			iVar0 = 66;
			break;
		
		case joaat("FM_Hip_M_Tat_007"):
			iVar0 = 67;
			break;
		
		case joaat("FM_Hip_M_Tat_008"):
			iVar0 = 68;
			break;
		
		case joaat("FM_Hip_M_Tat_009"):
			iVar0 = 69;
			break;
		
		case joaat("FM_Hip_M_Tat_010"):
			iVar0 = 70;
			break;
		
		case joaat("FM_Hip_M_Tat_011"):
			iVar0 = 71;
			break;
		
		case joaat("FM_Hip_M_Tat_012"):
			iVar0 = 72;
			break;
		
		case joaat("FM_Hip_M_Tat_013"):
			iVar0 = 73;
			break;
		
		case joaat("FM_Hip_M_Tat_014"):
			iVar0 = 74;
			break;
		
		case joaat("FM_Hip_M_Tat_015"):
			iVar0 = 75;
			break;
		
		case joaat("FM_Hip_M_Tat_016"):
			iVar0 = 76;
			break;
		
		case joaat("FM_Hip_M_Tat_017"):
			iVar0 = 77;
			break;
		
		case joaat("FM_Hip_M_Tat_018"):
			iVar0 = 78;
			break;
		
		case joaat("FM_Hip_M_Tat_019"):
			iVar0 = 79;
			break;
		
		case joaat("FM_Hip_M_Tat_020"):
			iVar0 = 80;
			break;
		
		case joaat("FM_Hip_M_Tat_021"):
			iVar0 = 81;
			break;
		
		case joaat("FM_Hip_M_Tat_022"):
			iVar0 = 82;
			break;
		
		case joaat("FM_Hip_M_Tat_023"):
			iVar0 = 83;
			break;
		
		case joaat("FM_Hip_M_Tat_024"):
			iVar0 = 84;
			break;
		
		case joaat("FM_Hip_M_Tat_025"):
			iVar0 = 85;
			break;
		
		case joaat("FM_Hip_M_Tat_026"):
			iVar0 = 86;
			break;
		
		case joaat("FM_Hip_M_Tat_027"):
			iVar0 = 87;
			break;
		
		case joaat("FM_Hip_M_Tat_028"):
			iVar0 = 88;
			break;
		
		case joaat("FM_Hip_M_Tat_029"):
			iVar0 = 89;
			break;
		
		case joaat("FM_Hip_M_Tat_030"):
			iVar0 = 90;
			break;
		
		case joaat("FM_Hip_M_Tat_031"):
			iVar0 = 91;
			break;
		
		case joaat("FM_Hip_M_Tat_032"):
			iVar0 = 92;
			break;
		
		case joaat("FM_Hip_M_Tat_033"):
			iVar0 = 93;
			break;
		
		case joaat("FM_Hip_M_Tat_034"):
			iVar0 = 94;
			break;
		
		case joaat("FM_Hip_M_Tat_035"):
			iVar0 = 95;
			break;
		
		case joaat("FM_Hip_M_Tat_036"):
			iVar0 = 96;
			break;
		
		case joaat("FM_Hip_M_Tat_037"):
			iVar0 = 97;
			break;
		
		case joaat("FM_Hip_M_Tat_038"):
			iVar0 = 98;
			break;
		
		case joaat("FM_Hip_M_Tat_039"):
			iVar0 = 99;
			break;
		
		case joaat("FM_Hip_M_Tat_040"):
			iVar0 = 100;
			break;
	}
	switch (iParam0)
	{
		case joaat("FM_Hip_M_Tat_041"):
			iVar0 = 101;
			break;
		
		case joaat("FM_Hip_M_Tat_042"):
			iVar0 = 102;
			break;
		
		case joaat("FM_Hip_M_Tat_043"):
			iVar0 = 103;
			break;
		
		case joaat("FM_Hip_M_Tat_044"):
			iVar0 = 104;
			break;
		
		case joaat("FM_Hip_M_Tat_045"):
			iVar0 = 105;
			break;
		
		case joaat("FM_Hip_M_Tat_046"):
			iVar0 = 106;
			break;
		
		case joaat("FM_Hip_M_Tat_047"):
			iVar0 = 107;
			break;
		
		case joaat("FM_Hip_M_Tat_048"):
			iVar0 = 108;
			break;
		
		case joaat("FM_Hip_M_Hair_000_a"):
			iVar0 = 109;
			break;
		
		case joaat("FM_Hip_M_Hair_000_b"):
			iVar0 = 110;
			break;
		
		case joaat("FM_Hip_M_Hair_000_c"):
			iVar0 = 111;
			break;
		
		case joaat("FM_Hip_M_Hair_000_d"):
			iVar0 = 112;
			break;
		
		case joaat("FM_Hip_M_Hair_000_e"):
			iVar0 = 113;
			break;
		
		case joaat("FM_Hip_M_Hair_001_a"):
			iVar0 = 114;
			break;
		
		case joaat("FM_Hip_M_Hair_001_b"):
			iVar0 = 115;
			break;
		
		case joaat("FM_Hip_M_Hair_001_c"):
			iVar0 = 116;
			break;
		
		case joaat("FM_Hip_M_Hair_001_d"):
			iVar0 = 117;
			break;
		
		case joaat("FM_Hip_M_Hair_001_e"):
			iVar0 = 118;
			break;
		
		case joaat("FM_Hip_M_Tshirt_000"):
			iVar0 = 119;
			break;
		
		case joaat("FM_Hip_M_Tshirt_001"):
			iVar0 = 120;
			break;
		
		case joaat("FM_Hip_M_Tshirt_002"):
			iVar0 = 121;
			break;
		
		case joaat("FM_Hip_M_Tshirt_003"):
			iVar0 = 122;
			break;
		
		case joaat("FM_Hip_M_Tshirt_004"):
			iVar0 = 123;
			break;
		
		case joaat("FM_Hip_M_Tshirt_005"):
			iVar0 = 124;
			break;
		
		case joaat("FM_Hip_M_Tshirt_006"):
			iVar0 = 125;
			break;
		
		case joaat("FM_Hip_M_Tshirt_007"):
			iVar0 = 126;
			break;
		
		case joaat("FM_Hip_M_Tshirt_008"):
			iVar0 = 127;
			break;
		
		case joaat("FM_Hip_M_Tshirt_009"):
			iVar0 = 128;
			break;
		
		case joaat("FM_Hip_M_Tshirt_010"):
			iVar0 = 129;
			break;
		
		case joaat("FM_Hip_M_Tshirt_011"):
			iVar0 = 130;
			break;
		
		case joaat("FM_Hip_M_Tshirt_012"):
			iVar0 = 131;
			break;
		
		case joaat("FM_Hip_M_Tshirt_013"):
			iVar0 = 132;
			break;
		
		case joaat("FM_Hip_M_Tshirt_014"):
			iVar0 = 133;
			break;
		
		case joaat("FM_Hip_M_Tshirt_015"):
			iVar0 = 134;
			break;
		
		case joaat("FM_Hip_M_Tshirt_016"):
			iVar0 = 135;
			break;
		
		case joaat("FM_Hip_M_Tshirt_017"):
			iVar0 = 136;
			break;
		
		case joaat("FM_Hip_M_Tshirt_018"):
			iVar0 = 137;
			break;
		
		case joaat("FM_Hip_M_Tshirt_019"):
			iVar0 = 138;
			break;
		
		case joaat("FM_Hip_M_Tshirt_020"):
			iVar0 = 139;
			break;
		
		case joaat("FM_Hip_M_Tshirt_021"):
			iVar0 = 140;
			break;
		
		case joaat("FM_Hip_M_Tshirt_022"):
			iVar0 = 141;
			break;
		
		case joaat("FM_Hip_M_Retro_000"):
			iVar0 = 142;
			break;
		
		case joaat("FM_Hip_M_Retro_001"):
			iVar0 = 143;
			break;
		
		case joaat("FM_Hip_M_Retro_002"):
			iVar0 = 144;
			break;
		
		case joaat("FM_Hip_M_Retro_003"):
			iVar0 = 145;
			break;
		
		case joaat("FM_Hip_M_Retro_004"):
			iVar0 = 146;
			break;
		
		case joaat("FM_Hip_M_Retro_005"):
			iVar0 = 147;
			break;
		
		case joaat("FM_Hip_M_Retro_006"):
			iVar0 = 148;
			break;
		
		case joaat("FM_Hip_M_Retro_007"):
			iVar0 = 149;
			break;
		
		case joaat("FM_Hip_M_Retro_008"):
			iVar0 = 150;
			break;
		
		case joaat("FM_Hip_M_Retro_009"):
			iVar0 = 151;
			break;
		
		case joaat("FM_Hip_M_Retro_010"):
			iVar0 = 152;
			break;
		
		case joaat("FM_Hip_M_Retro_011"):
			iVar0 = 153;
			break;
		
		case joaat("FM_Hip_M_Retro_012"):
			iVar0 = 154;
			break;
		
		case joaat("FM_Hip_M_Retro_013"):
			iVar0 = 155;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_000"):
			iVar0 = 156;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_001"):
			iVar0 = 157;
			break;
		
		case joaat("FM_Rstar_M_Tshirt_002"):
			iVar0 = 158;
			break;
		
		case joaat("FM_Ind_M_Tshirt_000"):
			iVar0 = 159;
			break;
		
		case joaat("FM_Ind_M_Tshirt_001"):
			iVar0 = 160;
			break;
		
		case joaat("FM_Ind_M_Tshirt_002"):
			iVar0 = 161;
			break;
		
		case joaat("FM_Ind_M_Tshirt_003"):
			iVar0 = 162;
			break;
		
		case joaat("FM_Ind_M_Tshirt_004"):
			iVar0 = 163;
			break;
		
		case joaat("FM_Ind_M_Tshirt_005"):
			iVar0 = 164;
			break;
		
		case joaat("FM_Ind_M_Tshirt_007"):
			iVar0 = 165;
			break;
		
		case joaat("FM_Ind_M_Tshirt_008"):
			iVar0 = 166;
			break;
		
		case joaat("FM_Ind_M_Tshirt_009"):
			iVar0 = 167;
			break;
		
		case joaat("FM_Ind_M_Tshirt_010"):
			iVar0 = 168;
			break;
		
		case joaat("FM_Ind_M_Tshirt_011"):
			iVar0 = 169;
			break;
		
		case joaat("FM_Ind_M_Tshirt_012"):
			iVar0 = 170;
			break;
		
		case joaat("FM_Ind_M_Tshirt_013"):
			iVar0 = 171;
			break;
		
		case joaat("FM_Ind_M_Tshirt_014"):
			iVar0 = 172;
			break;
		
		case joaat("FM_Ind_M_Tshirt_015"):
			iVar0 = 173;
			break;
		
		case joaat("FM_Ind_M_Tshirt_017"):
			iVar0 = 174;
			break;
		
		case joaat("FM_Ind_M_Tshirt_019"):
			iVar0 = 175;
			break;
		
		case joaat("FM_Ind_M_Tshirt_020"):
			iVar0 = 176;
			break;
		
		case joaat("FM_Ind_M_Tshirt_021"):
			iVar0 = 177;
			break;
		
		case joaat("FM_Ind_M_Tshirt_022"):
			iVar0 = 178;
			break;
		
		case joaat("FM_Ind_M_Tshirt_023"):
			iVar0 = 179;
			break;
		
		case joaat("FM_Ind_M_Tshirt_024"):
			iVar0 = 180;
			break;
		
		case joaat("FM_Ind_M_Tshirt_025"):
			iVar0 = 181;
			break;
		
		case joaat("FM_Ind_M_Tshirt_026"):
			iVar0 = 182;
			break;
		
		case joaat("FM_Ind_M_Award_000"):
			iVar0 = 183;
			break;
		
		case joaat("MP_Fli_M_Tshirt_000"):
			iVar0 = 184;
			break;
		
		case joaat("FM_LTS_M_Tshirt_000"):
			iVar0 = 185;
			break;
		
		case joaat("MP_FM_OGA_000_m"):
			iVar0 = 186;
			break;
		
		case joaat("MP_FM_OGA_001_m"):
			iVar0 = 187;
			break;
		
		case joaat("MP_FM_OGA_002_m"):
			iVar0 = 188;
			break;
		
		case joaat("MP_FM_OGA_003_m"):
			iVar0 = 189;
			break;
		
		case joaat("NG_M_Hair_001"):
			iVar0 = 190;
			break;
		
		case joaat("NG_M_Hair_002"):
			iVar0 = 191;
			break;
		
		case joaat("NG_M_Hair_003"):
			iVar0 = 192;
			break;
		
		case joaat("NG_M_Hair_004"):
			iVar0 = 193;
			break;
		
		case joaat("NG_M_Hair_005"):
			iVar0 = 194;
			break;
		
		case joaat("NG_M_Hair_006"):
			iVar0 = 195;
			break;
		
		case joaat("NG_M_Hair_007"):
			iVar0 = 196;
			break;
		
		case joaat("NG_M_Hair_008"):
			iVar0 = 197;
			break;
		
		case joaat("NG_M_Hair_009"):
			iVar0 = 198;
			break;
		
		case joaat("NG_M_Hair_010"):
			iVar0 = 199;
			break;
		
		case joaat("NG_M_Hair_011"):
			iVar0 = 200;
			break;
	}
	switch (iParam0)
	{
		case joaat("NG_M_Hair_012"):
			iVar0 = 201;
			break;
		
		case joaat("NG_M_Hair_013"):
			iVar0 = 202;
			break;
		
		case joaat("NG_M_Hair_014"):
			iVar0 = 203;
			break;
		
		case joaat("NG_M_Hair_015"):
			iVar0 = 204;
			break;
		
		case joaat("NGBea_M_Hair_000"):
			iVar0 = 205;
			break;
		
		case joaat("NGBea_M_Hair_001"):
			iVar0 = 206;
			break;
		
		case joaat("NGBus_M_Hair_000"):
			iVar0 = 207;
			break;
		
		case joaat("NGBus_M_Hair_001"):
			iVar0 = 208;
			break;
		
		case joaat("NGHip_M_Hair_000"):
			iVar0 = 209;
			break;
		
		case joaat("NGHip_M_Hair_001"):
			iVar0 = 210;
			break;
		
		case joaat("NGInd_M_Hair_000"):
			iVar0 = 211;
			break;
		
		case joaat("MP_Xmas2_M_Tat_000"):
			iVar0 = 212;
			break;
		
		case joaat("MP_Xmas2_M_Tat_001"):
			iVar0 = 213;
			break;
		
		case joaat("MP_Xmas2_M_Tat_002"):
			iVar0 = 214;
			break;
		
		case joaat("MP_Xmas2_M_Tat_003"):
			iVar0 = 215;
			break;
		
		case joaat("MP_Xmas2_M_Tat_004"):
			iVar0 = 216;
			break;
		
		case joaat("MP_Xmas2_M_Tat_005"):
			iVar0 = 217;
			break;
		
		case joaat("MP_Xmas2_M_Tat_006"):
			iVar0 = 218;
			break;
		
		case joaat("MP_Xmas2_M_Tat_007"):
			iVar0 = 219;
			break;
		
		case joaat("MP_Xmas2_M_Tat_008"):
			iVar0 = 220;
			break;
		
		case joaat("MP_Xmas2_M_Tat_009"):
			iVar0 = 221;
			break;
		
		case joaat("MP_Xmas2_M_Tat_010"):
			iVar0 = 222;
			break;
		
		case joaat("MP_Xmas2_M_Tat_011"):
			iVar0 = 223;
			break;
		
		case joaat("MP_Xmas2_M_Tat_012"):
			iVar0 = 224;
			break;
		
		case joaat("MP_Xmas2_M_Tat_013"):
			iVar0 = 225;
			break;
		
		case joaat("MP_Xmas2_M_Tat_014"):
			iVar0 = 226;
			break;
		
		case joaat("MP_Xmas2_M_Tat_015"):
			iVar0 = 227;
			break;
		
		case joaat("MP_Xmas2_M_Tat_016"):
			iVar0 = 228;
			break;
		
		case joaat("MP_Xmas2_M_Tat_017"):
			iVar0 = 229;
			break;
		
		case joaat("MP_Xmas2_M_Tat_018"):
			iVar0 = 230;
			break;
		
		case joaat("MP_Xmas2_M_Tat_019"):
			iVar0 = 231;
			break;
		
		case joaat("MP_Xmas2_M_Tat_020"):
			iVar0 = 232;
			break;
		
		case joaat("MP_Xmas2_M_Tat_021"):
			iVar0 = 233;
			break;
		
		case joaat("MP_Xmas2_M_Tat_022"):
			iVar0 = 234;
			break;
		
		case joaat("MP_Xmas2_M_Tat_023"):
			iVar0 = 235;
			break;
		
		case joaat("MP_Xmas2_M_Tat_024"):
			iVar0 = 236;
			break;
		
		case joaat("MP_Xmas2_M_Tat_025"):
			iVar0 = 237;
			break;
		
		case joaat("MP_Xmas2_M_Tat_026"):
			iVar0 = 238;
			break;
		
		case joaat("MP_Xmas2_M_Tat_027"):
			iVar0 = 239;
			break;
		
		case joaat("MP_Xmas2_M_Tat_028"):
			iVar0 = 240;
			break;
		
		case joaat("MP_Xmas2_M_Tat_029"):
			iVar0 = 241;
			break;
		
		case joaat("MP_Award_M_Tshirt_004"):
			iVar0 = 242;
			break;
		
		case joaat("MP_Award_M_Tshirt_005"):
			iVar0 = 243;
			break;
		
		case joaat("MP_Award_M_Tshirt_006"):
			iVar0 = 244;
			break;
		
		case joaat("MP_Award_M_Tshirt_007"):
			iVar0 = 245;
			break;
		
		case joaat("MP_Award_M_Tshirt_008"):
			iVar0 = 246;
			break;
		
		case joaat("MP_Award_M_Tshirt_009"):
			iVar0 = 247;
			break;
		
		case joaat("MP_Award_M_Tshirt_010"):
			iVar0 = 248;
			break;
		
		case joaat("MP_Award_M_Tshirt_011"):
			iVar0 = 249;
			break;
		
		case joaat("MP_Award_M_Tshirt_012"):
			iVar0 = 250;
			break;
		
		case joaat("MP_Award_M_Tshirt_013"):
			iVar0 = 251;
			break;
		
		case joaat("MP_Bugstar_A"):
			iVar0 = 252;
			break;
		
		case joaat("MP_Bugstar_B"):
			iVar0 = 253;
			break;
		
		case joaat("MP_Bugstar_C"):
			iVar0 = 254;
			break;
		
		case joaat("MP_Rogers_A"):
			iVar0 = 255;
			break;
		
		case joaat("MP_Rogers_B"):
			iVar0 = 256;
			break;
		
		case joaat("MP_Als_A"):
			iVar0 = 257;
			break;
		
		case joaat("MP_Als_B"):
			iVar0 = 258;
			break;
		
		case joaat("MP_Power_A"):
			iVar0 = 259;
			break;
		
		case joaat("MP_Power_B"):
			iVar0 = 260;
			break;
		
		case joaat("MP_Elite_M_Tshirt"):
			iVar0 = 261;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

bool func_121(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_123(iParam0) == 3790)
	{
		return 0;
	}
	uVar0 = func_122(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xDCC86F723E82125E(uVar0, func_80(iVar1));
}

var func_122(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_54(func_123(uParam0), iParam1, 0);
	return uVar0;
}

int func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_85(iVar0);
	if ((func_84() == 0 || func_83() == 0) || (func_84() == 999 && func_83() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1028;
				break;
			
			case 1:
				return 1029;
				break;
			
			case 2:
				return 1030;
				break;
			
			case 3:
				return 1031;
				break;
			
			case 4:
				return 1032;
				break;
			
			case 5:
				return 1492;
				break;
			
			case 6:
				return 1745;
				break;
			
			case 7:
				return 1939;
				break;
			
			case 8:
				return 1940;
				break;
			
			case 9:
				return 1941;
				break;
			
			case 10:
				return 1942;
				break;
			
			case 11:
				return 1943;
				break;
			
			case 12:
				return 1944;
				break;
			
			case 13:
				return 2395;
				break;
			
			case 14:
				return 2415;
				break;
			
			case 15:
				return 2418;
				break;
			
			case 16:
				return 2421;
				break;
			
			case 17:
				return 2584;
				break;
			
			case 18:
				return 2587;
				break;
			
			case 19:
				return 2590;
				break;
			}
	}
	return 3790;
}

int func_124(int iParam0)
{
	switch (unk_0x6D5BB810CC209E15(uParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

void func_125(int iParam0, var uParam1, bool bParam2)
{
	struct<9> Var0;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0x4D60342C432CE7D8(iParam0);
		iVar13 = func_124(iParam0);
		bVar14 = func_116(iParam0);
		bVar15 = func_114(iParam0);
		bVar16 = func_86(iParam0);
		if (bParam2)
		{
			bVar15 = true;
		}
		iVar17 = 0;
		while (iVar17 < 127)
		{
			if (unk_0xDCC86F723E82125E((*uParam1)[(iVar17 / 32)], (iVar17 % 32)))
			{
				if (func_71(&Var0, iVar17, iVar13, iParam0, -1))
				{
					if (func_70(&Var0, Var0.f_4, Var0.f_8, bVar14, bVar15, bParam2, bVar16))
					{
						unk_0x6FD05648E66DA599(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar17++;
		}
		if (unk_0xDCC86F723E82125E((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (unk_0x8218F3FE341273DE(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				unk_0x6FD05648E66DA599(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar19 = unk_0x1A63000484B6AF50(iVar13);
		iVar18 = 0;
		while (iVar18 < iVar19)
		{
			if (unk_0x4837866CF25A54CD(iVar13, iVar18, &Var20))
			{
				if (!unk_0x06C32703437E5BC3(Var20.f_0))
				{
					iVar35 = (129 + iVar18);
					if (unk_0xDCC86F723E82125E((*uParam1)[(iVar35 / 32)], (iVar35 % 32)))
					{
						if (func_70(&(Var20.f_7), Var20.f_2, Var20.f_6, bVar14, bVar15, bParam2, bVar16))
						{
							unk_0x6FD05648E66DA599(iParam0, Var20.f_2, Var20.f_3);
							func_67(iParam0, Var20.f_2, Var20.f_3);
						}
					}
				}
			}
			iVar18++;
		}
	}
}

int func_126(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	var uVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		if ((Global_1315843 != 4 && Global_1315843 != 5) && Global_1315843 != 7)
		{
			return 0;
		}
	}
	if (unk_0x2DC9BA2299B45EA6(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0xC8B93D94F8954288() && Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_220 == 2)
	{
		return 0;
	}
	Global_69177++;
	iVar5 = unk_0x6D5BB810CC209E15(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
		if (!func_191(iParam3))
		{
			Global_69177 = (Global_69177 - 1);
			return 0;
		}
		func_186(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0x962B7D68444204CB(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_69221 };
		}
		else
		{
			uVar15 = { func_110(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69178[1 /*14*/] = { func_208(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						unk_0x8C245572EDB27776(iParam0, func_89(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, unk_0x8005AF704B3AAC41(iParam0, func_89(iVar0)));
					}
					else
					{
						unk_0x8C245572EDB27776(iParam0, func_89(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
					{
						func_186(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69178[1 /*14*/] = { func_208(iVar5, iVar0, uVar15[iVar0]) };
					if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_69237 };
							}
							else
							{
								uVar31 = { func_107(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69178[1 /*14*/] = { func_208(iVar5, 14, uVar31[iVar1]) };
								func_185(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
								if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
								{
									func_186(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x8C245572EDB27776(iParam0, func_89(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, unk_0x8005AF704B3AAC41(iParam0, func_89(iVar0)));
								}
								else
								{
									unk_0x8C245572EDB27776(iParam0, func_89(iVar0), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_127(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
							{
								func_186(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69178[1 /*14*/] = { func_208(iVar5, iVar0, func_91(iParam0, iVar0, -1)) };
				if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 3))
				{
					uVar41 = { func_110(iVar5, 0) };
					func_127(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_184();
			if (iVar57 != -1)
			{
				func_182(iVar57, 0, Global_69176);
			}
			func_180(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { func_107(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69178[1 /*14*/] = { func_208(iVar5, 14, uVar58[iVar1]) };
			func_185(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
			if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
			{
				func_186(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69177 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_178(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_127(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, unk_0x3A59BCC40A12FD28(iParam0, 1), unk_0x268F3DC177BF5D38(iParam0, 1));
		if (unk_0xED5E7EEE0DB220EF(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = func_92(iParam0, 1);
			iVar3 = func_178(iParam0, iVar5, 1, iVar69, 14, Global_69178[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_177(iVar5, 1, -1);
			}
		}
		func_185(iParam0, Global_69178[1 /*14*/].f_12, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
		if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
		{
			func_186(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69177 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_178(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_127(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = -1;
				if (unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 6) && unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0xBCBAE0795E840663(iParam0, Global_1317070, Global_1317071, Global_1317072, 0);
					unk_0xBCBAE0795E840663(iParam0, Global_1317070, Global_1317071, Global_1317072, 1);
					unk_0xBCBAE0795E840663(iParam0, Global_1317070, Global_1317071, Global_1317072, 2);
					unk_0xBCBAE0795E840663(iParam0, Global_1317070, Global_1317071, Global_1317072, 3);
				}
				iVar71 = func_92(iParam0, 11);
				iVar72 = func_92(iParam0, 8);
				iVar73 = func_92(iParam0, 4);
				iVar8 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
				if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_87(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_87(iVar5, iParam2, 11, 4);
					}
					if (((unk_0xED5E7EEE0DB220EF(iVar70, joaat("SILK_ROBE"), 0) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar70, -826135203, 0))
					{
					}
					else
					{
						iVar9 = func_92(iParam0, 8);
					}
				}
				iVar74 = unk_0x4D4C7C54C2E89DDF(iParam0, 3, unk_0x3A59BCC40A12FD28(iParam0, 3), 0);
				if (unk_0xED5E7EEE0DB220EF(iVar74, joaat("GLOVES"), 0))
				{
					iVar75 = func_176(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_178(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar75 = 11;
							iVar70 = func_87(iVar5, iParam2, 11, 4);
							if (!unk_0xED5E7EEE0DB220EF(iVar70, joaat("DRESS"), 0))
							{
								iVar75 = -99;
							}
							break;
					}
					if (iVar75 != -99)
					{
						iVar76 = iVar75;
						iVar77 = 0;
						while (iVar77 < 15)
						{
							if (func_175(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = unk_0x268F3DC177BF5D38(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0xED5E7EEE0DB220EF(func_87(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar71 = func_92(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_87(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && unk_0xED5E7EEE0DB220EF(iVar70, joaat("VEST_SHIRT"), 0))
					{
						iVar78 = func_173(iVar5, iVar71, iParam2, unk_0x268F3DC177BF5D38(iParam0, 11));
						if (iVar78 != -99)
						{
							func_127(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (func_172(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_87(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_87(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_172(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (unk_0xED5E7EEE0DB220EF(iVar70, joaat("VEST"), 0) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((unk_0xED5E7EEE0DB220EF(iVar70, joaat("HEIST_DRAW_5"), 0) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("HEIST_DRAW_11"), 0)) || unk_0xED5E7EEE0DB220EF(iVar70, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar79 = func_173(iVar5, iVar71, iParam2, unk_0x268F3DC177BF5D38(iParam0, 11));
							if (iVar79 != -99)
							{
								func_127(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_177(iVar5, 11, -1);
									Global_69178[1 /*14*/] = { func_208(iVar5, 11, iVar80) };
									iVar79 = func_173(iVar5, iVar80, iParam2, Global_69178[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_127(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_69178[1 /*14*/] = { func_208(iVar5, 11, iVar71) };
						iVar81 = Global_69178[1 /*14*/].f_3;
						Global_69178[1 /*14*/] = { func_208(iVar5, 11, iParam2) };
						iVar82 = Global_69178[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69178[1 /*14*/] = { func_208(iVar5, 8, iVar72) };
							iVar83 = Global_69178[1 /*14*/].f_4;
							iVar84 = func_171(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_170(func_87(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_177(iVar5, 11, -1);
										Global_69178[1 /*14*/] = { func_208(iVar5, 11, iVar84) };
										iVar85 = func_173(iVar5, iVar84, iParam2, Global_69178[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!unk_0xED5E7EEE0DB220EF(func_87(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar84 = func_177(iVar5, 11, -1);
										Global_69178[1 /*14*/] = { func_208(iVar5, 11, iVar84) };
										iVar85 = func_173(iVar5, iVar84, iParam2, Global_69178[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_173(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0xED5E7EEE0DB220EF(func_87(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_169(iVar5, func_92(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0xED5E7EEE0DB220EF(func_87(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_169(iVar5, func_92(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_127(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_177(iVar5, 11, -1);
								Global_69178[1 /*14*/] = { func_208(iVar5, 11, iVar84) };
								iVar85 = func_173(iVar5, iVar84, iParam2, Global_69178[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_127(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_127(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					func_167(iVar5, iParam2);
					unk_0x8C245572EDB27776(iParam0, 10, 0, 0, unk_0x8005AF704B3AAC41(iParam0, 10));
				}
			}
			func_180(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_176(iVar5, func_91(iParam0, 8, -1), iParam2, func_91(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_54(2140, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_54(2147, iParam10, 0);
				}
				unk_0xED6C15CF11A9F0B2(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_164(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_180(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_92(iParam0, 11);
			if (func_172(iVar5, iVar86))
			{
				iVar87 = func_171(iVar5, iParam2, Global_69178[1 /*14*/].f_4);
				func_167(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_176(iVar5, iParam2, func_92(iParam0, 11), func_92(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_92(iParam0, 7);
				if (!func_161(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x8C245572EDB27776(iParam0, func_89(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar89 = func_54(2087, iParam10, 0);
				iVar90 = func_54(2088, iParam10, 0);
				iVar91 = func_54(2089, iParam10, 0);
				fVar92 = func_160(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x6B585FC99F218EC3(iParam0, 0, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x6B585FC99F218EC3(iParam0, 21, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, false);
				}
				iVar93 = 0;
				while (iVar93 < 20)
				{
					unk_0xC7D2581625C50E99(iParam0, iVar93, 0f);
					iVar93++;
				}
			}
			else
			{
				func_144(iParam0, Global_69176);
			}
			iVar94 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, unk_0x3A59BCC40A12FD28(iParam0, 1), unk_0x268F3DC177BF5D38(iParam0, 1));
			iVar95 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4);
			if (unk_0xED5E7EEE0DB220EF(iVar94, joaat("FORCE_PROP"), 0))
			{
				if (!unk_0xED5E7EEE0DB220EF(iVar95, joaat("FORCE_PROP"), 0))
				{
					iVar96 = func_92(iParam0, 1);
					iVar97 = 0;
					while (iVar97 < 9)
					{
						iVar3 = func_178(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_93(iParam0, iVar97);
						if (iVar3 == iVar98)
						{
							unk_0x37D5496B3B31995F(iParam0, iVar97);
						}
						iVar97++;
					}
				}
			}
		}
		else if (iParam1 == 4)
		{
			iVar99 = func_92(iParam0, 11);
			iVar100 = func_92(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0xED5E7EEE0DB220EF(func_87(iVar5, iVar99, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_169(iVar5, iParam2, func_171(iVar5, iVar100, 0)))
					{
						func_127(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0xED5E7EEE0DB220EF(func_87(iVar5, iVar99, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_169(iVar5, iParam2, func_171(iVar5, iVar100, 0)))
					{
						func_127(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69178[1 /*14*/] = { func_208(iVar5, iParam1, iParam2) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_176(iVar5, func_92(iParam0, 8), func_92(iParam0, 11), iParam2);
			}
			iVar101 = unk_0x4D4C7C54C2E89DDF(iParam0, 3, unk_0x3A59BCC40A12FD28(iParam0, 3), 0);
			if (unk_0xED5E7EEE0DB220EF(iVar101, joaat("GLOVES"), 0))
			{
				iVar102 = func_176(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_178(iParam0, iVar5, 11, iVar99, 3, 0);
				}
				switch (iVar101)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar102 = 11;
						iVar103 = func_87(iVar5, iParam2, 11, 4);
						if (!unk_0xED5E7EEE0DB220EF(iVar103, joaat("DRESS"), 0))
						{
							iVar102 = -99;
						}
						break;
				}
				if (iVar102 != -99)
				{
					iVar104 = iVar102;
					iVar105 = 0;
					while (iVar105 < 15)
					{
						if (func_175(iVar5, iVar104, iVar105) == iVar101)
						{
							iVar11 = iVar105;
							iVar12 = unk_0x268F3DC177BF5D38(iParam0, 3);
						}
						iVar105++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x8C245572EDB27776(iParam0, func_89(iParam1), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, unk_0x8005AF704B3AAC41(iParam0, func_89(iParam1)));
		}
		else
		{
			unk_0x8C245572EDB27776(iParam0, func_89(iParam1), Global_69178[1 /*14*/].f_3, Global_69178[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69177 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_178(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_127(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_176(iVar5, iVar3, func_92(iParam0, 11), func_92(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_143(iParam0))
				{
					iVar106 = func_142(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 = (iVar106 + unk_0x268F3DC177BF5D38(iParam0, 9));
						if (!func_98(iParam0, 9, iVar106))
						{
							func_127(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_127(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
					if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_127(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_54(2029, -1, 0);
				if (unk_0x3A59BCC40A12FD28(iParam0, 5) != 0)
				{
					unk_0x8C245572EDB27776(iParam0, 5, func_139(iParam0, iVar107), func_138(iParam0, iVar107), func_137(iParam0, iVar107));
				}
				if (iParam0 == unk_0xC8B93D94F8954288())
				{
					unk_0x2E9F709E6BB1D74A(unk_0xA34E7C2A5118D638(), 5, func_139(unk_0xC8B93D94F8954288(), iVar107), func_138(unk_0xC8B93D94F8954288(), iVar107), 0);
					unk_0xB097B46113B38749(unk_0xA34E7C2A5118D638(), func_137(unk_0xC8B93D94F8954288(), iVar107));
					func_134(unk_0xA34E7C2A5118D638(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_127(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_91(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_91(iParam0, 11, -1);
				}
				if (func_101(iVar5, 11, iVar109))
				{
					if (!func_133(iVar5, 4, iVar108))
					{
						if (func_100(iVar5, 4, iVar108, &uVar110))
						{
							func_127(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_133(iVar5, 4, iVar108))
				{
					if (func_99(iVar5, 4, iVar108, &uVar110))
					{
						func_127(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_192(iParam0);
				iVar111 = unk_0x3A59BCC40A12FD28(iParam0, 1);
				iVar112 = unk_0x268F3DC177BF5D38(iParam0, 1);
				iVar113 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, iVar111, iVar112);
				if (unk_0xED5E7EEE0DB220EF(iVar113, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_178(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_127(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_178(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_127(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_128(iParam0, &uVar4))
		{
			func_127(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_127(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_127(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_127(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar114 = func_175(iVar5, unk_0x3A59BCC40A12FD28(iParam0, 3), iVar11);
		if (iVar114 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_96(iVar5, iVar114, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_96(iVar5, iVar114, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_127(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69177 = (Global_69177 - 1);
	return 1;
}

int func_128(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_91(unk_0xC8B93D94F8954288(), 2, -1);
	if (func_54(743, Global_69176, 0) != -99 && func_130())
	{
		if (func_129() == 4)
		{
			return 1;
		}
		if (func_54(743, Global_69176, 0) == 0 && func_54(744, Global_69176, 0) == 0)
		{
			if (func_126(161, Global_69176))
			{
				if (func_54(2040, Global_69176, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_54(742, Global_69176, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_54(743, Global_69176, 0);
		iVar1 = func_54(744, Global_69176, 0);
		if (!func_98(iParam0, iVar1, iVar0))
		{
			if (func_126(161, Global_69176))
			{
				*uParam1 = func_54(2040, Global_69176, 0);
			}
			else
			{
				*uParam1 = func_54(742, Global_69176, 0);
			}
			func_16(743, -99, Global_69176, 1);
			func_16(744, 2, Global_69176, 1);
			return 1;
		}
	}
	return 0;
}

int func_129()
{
	return Global_1315843;
}

int func_130()
{
	if (func_132() && func_131(0))
	{
		return 1;
	}
	return 0;
}

var func_131(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_132()
{
	return func_131(func_18() + 1);
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 4, 4), joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

void func_134(int iParam0, int iParam1)
{
	if (func_136())
	{
		if (iParam1 > 46)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
	else if (func_135())
	{
		if (iParam1 > 0)
		{
			unk_0x7171EAA53AF97DDD(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			unk_0x06470EB9AAE2FC33(iParam0);
		}
	}
}

bool func_135()
{
	return unk_0x9F37711843A20114(joaat("mppilot"));
}

bool func_136()
{
	return unk_0x9F37711843A20114(joaat("mplts"));
}

int func_137(int iParam0, int iParam1)
{
	return 0;
}

int func_138(int iParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x3A59BCC40A12FD28(iParam0, 11);
	if (unk_0x3A59BCC40A12FD28(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6D5BB810CC209E15(iParam0);
	iVar3 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
	if (unk_0xED5E7EEE0DB220EF(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x4D4C7C54C2E89DDF(iParam0, 11, iVar0, unk_0x268F3DC177BF5D38(iParam0, 11));
		if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar4);
			}
			else
			{
				return (6 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LUXE_COAT"), 0))
		{
			iVar6 = func_141(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar4);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_170(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar4);
						break;
					
					default:
						iVar0 = func_170(iVar5);
						break;
					}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_140(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_170(iVar5);
					break;
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0xED5E7EEE0DB220EF(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0xED5E7EEE0DB220EF(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar4);
			}
		}
		else if ((unk_0xED5E7EEE0DB220EF(iVar5, -1086258388, 0) || unk_0xED5E7EEE0DB220EF(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (7 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (4 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
					{
						return 51;
					}
					else if (iParam1 > 26)
					{
						return 50;
					}
					else if (iParam1 > 0)
					{
						return 49;
					}
					else
					{
						return 48;
					}
				}
				else
				{
					return (2 + iVar4);
				}
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (1 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar4);
			}
			else
			{
				return (2 + iVar4);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar4);
			}
			else
			{
				return (8 + iVar4);
			}
		}
		else if ((unk_0xED5E7EEE0DB220EF(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0xED5E7EEE0DB220EF(iVar5, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar5, -826135203, 0))
		{
			return (7 + iVar4);
		}
		else
		{
			iVar0 = func_170(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (2 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (6 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar4);
				}
				else
				{
					return (3 + iVar4);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar4);
				}
				else
				{
					return (5 + iVar4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 9:
				return (2 + iVar4);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar4);
				}
				else
				{
					return (7 + iVar4);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar4);
				}
				else
				{
					return (4 + iVar4);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar4);
				}
				else
				{
					return (1 + iVar4);
				}
				break;
			}
	}
	return (1 + iVar4);
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam1 == 11)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 16 && iParam2 <= 31)) || (iParam2 >= 80 && iParam2 <= 95)) || (iParam2 >= 140 && iParam2 <= 155)) || (iParam2 >= 188 && iParam2 <= 203))
			{
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 108 && iParam2 <= 123))
			{
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107)
			{
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171)
			{
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187)
			{
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219)
			{
				return 16;
			}
			else if ((iParam2 >= 220 && iParam2 <= 235) || (iParam2 >= 124 && iParam2 <= 139))
			{
				return 26;
			}
			else if (iParam2 == 236)
			{
				return 21;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_87(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x7D62D032481867D5(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0xFBE76C9788411A2E(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_96(iParam0, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 176 && iParam2 <= 191)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 208 && iParam2 <= 223)) || (iParam2 >= 240 && iParam2 <= 255))
			{
				return 1;
			}
			else if (((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 112 && iParam2 <= 127)) || (iParam2 >= 128 && iParam2 <= 143))
			{
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63)
			{
				return 11;
			}
			else if ((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 160 && iParam2 <= 175))
			{
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239)
			{
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159)
			{
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95)
			{
				return 31;
			}
			else if (iParam2 >= 256)
			{
				iVar6 = func_87(iParam0, iParam2, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x7D62D032481867D5(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0xFBE76C9788411A2E(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_96(iParam0, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_143(int iParam0)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = unk_0x6D5BB810CC209E15(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_92(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_92(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	int iVar20;
	
	if (!unk_0x6EAE252212D4D53F(iParam0))
	{
	}
	unk_0x2467B476C8DE6631(iParam0, &Var0);
	iVar10 = func_54(2084, iParam1, 0);
	iVar11 = func_54(2085, iParam1, 0);
	iVar12 = func_54(2086, iParam1, 0);
	iVar13 = func_54(2087, iParam1, 0);
	iVar14 = func_54(2088, iParam1, 0);
	iVar15 = func_54(2089, iParam1, 0);
	fVar16 = func_160(134, iParam1);
	fVar17 = func_160(135, iParam1);
	fVar18 = func_160(136, iParam1);
	bVar19 = func_126(160, iParam1);
	if (((((((((Var0.f_0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x6B585FC99F218EC3(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_54(2090, iParam1, 0);
		if (iVar20 > 0)
		{
			func_145(iParam0, iParam1, 0);
		}
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_159(iVar1);
		if (!bParam2)
		{
			fVar3 = func_160(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_158(iVar2, iParam1);
		}
		unk_0xC7D2581625C50E99(uParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_157(iVar4);
		iVar6 = func_156(iVar5);
		iVar7 = func_155(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_152(iVar6, iParam1, -1);
				uVar11 = func_160(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_151(iVar6, iParam1);
				uVar11 = func_158(iVar7, iParam1);
			}
			unk_0xF57CD658A9A3BA69(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_150(iVar5);
			iVar9 = func_149(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_54(iVar8, iParam1, 0);
					iVar14 = func_54(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_148(iVar8, iParam1);
					iVar14 = func_148(iVar9, iParam1);
				}
				func_147(iVar13, &uVar12, &uVar15);
				unk_0xEE84B38833C40EEC(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_146(&iParam0, iParam1, bParam2);
}

void func_146(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_160(157, iParam1);
	}
	else
	{
		fVar0 = func_158(157, iParam1);
	}
	if (*uParam0 == unk_0xC8B93D94F8954288())
	{
	}
	unk_0x0860ADA82206A7C7(*uParam0, unk_0xF2DB717A73826179(fVar0));
}

void func_147(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = unk_0x97EF1E5BCE9DC075(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_148(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2466774[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0x5FA3542C9D2014C9(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2148;
		
		case 1:
			return 2149;
		
		case 5:
			return 2150;
		
		case 8:
			return 2151;
		
		case 10:
			return 2146;
		
		default:
	}
	return -1;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2141;
		
		case 1:
			return 2142;
		
		case 5:
			return 2143;
		
		case 8:
			return 2144;
		
		case 10:
			return 2145;
		
		default:
	}
	return -1;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0xFB135F527D9DC0E3((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0x9AAB521F2B239BE6((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0xFB135F527D9DC0E3((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0x9AAB521F2B239BE6((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0xFB135F527D9DC0E3((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0x9AAB521F2B239BE6((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0xFB135F527D9DC0E3((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0x9AAB521F2B239BE6((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0xBB57E662FF623914((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0x9AAB521F2B239BE6((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0xBB57E662FF623914((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0x9AAB521F2B239BE6((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0x9AAB521F2B239BE6((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0x9AAB521F2B239BE6((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0x9AAB521F2B239BE6((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0x9AAB521F2B239BE6((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0x9AAB521F2B239BE6((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7449 && iParam0 < 7457)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 7449), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7449) - unk_0x9AAB521F2B239BE6((iParam0 - 7449)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x4736A10444241984((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0x9AAB521F2B239BE6((iParam0 - 7313)) * 8) * 8;
	}
	if (!unk_0x83CBFC12E3961BA2(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	iVar1 = func_154(iParam0, iParam1);
	uVar2 = func_153(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x5C5858C20FAA9D85(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x9AAB521F2B239BE6((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x9AAB521F2B239BE6((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x9AAB521F2B239BE6((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x9AAB521F2B239BE6((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x9AAB521F2B239BE6((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x9AAB521F2B239BE6((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x9AAB521F2B239BE6((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x9AAB521F2B239BE6((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x9AAB521F2B239BE6((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x9AAB521F2B239BE6((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x9AAB521F2B239BE6((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x9AAB521F2B239BE6((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7449 && iParam0 < 7457)
	{
		iVar0 = ((iParam0 - 7449) - unk_0x9AAB521F2B239BE6((iParam0 - 7449)) * 8) * 8;
	}
	return iVar0;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xFB135F527D9DC0E3((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xBB57E662FF623914((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xBB57E662FF623914((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7313), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 7449 && iParam0 < 7457)
	{
		iVar0 = unk_0x4736A10444241984((iParam0 - 7449), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	return iVar0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_158(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2485725[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0xCD97053E262BC6D0(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_160(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2485725[iParam0 /*5*/][func_17(iParam1)];
	if (unk_0xCE2D9189D4FA7E8E(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2556874 == iParam1)
		{
			iVar2 = Global_2556873;
			iVar1 = Global_2556872;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_87(iParam0, iParam1, 7, 3);
			iVar1 = func_170(iVar2);
			Global_2556874 = iParam1;
			Global_2556873 = iVar2;
			Global_2556872 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2556877 == iParam3)
		{
			iVar4 = Global_2556876;
			iVar3 = Global_2556875;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_87(iParam0, iParam3, 11, 3);
			iVar3 = func_170(iVar4);
			Global_2556877 = iParam3;
			Global_2556876 = iVar4;
			Global_2556875 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2556880 == iParam4)
		{
			iVar6 = Global_2556879;
			iVar5 = Global_2556878;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_87(iParam0, iParam4, 8, 3);
			iVar5 = func_170(iVar6);
			Global_2556880 = iParam4;
			Global_2556879 = iVar6;
			Global_2556878 = iVar5;
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SCARF"), 0))
			{
				if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if ((((((((((((((((((((((unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_6"), 0))
					{
						return 0;
					}
					else if (func_163(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_163(iParam0, iParam3))
				{
					return 0;
				}
			}
			if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("TUX_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("XMAS2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, -1086258388, 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SCRUFFY_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_13"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_15"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_16"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_5"), 0))
				{
					return 0;
				}
				else if (!unk_0xED5E7EEE0DB220EF(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13)
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE_BOMB"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_BOMB"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("JAN_BOMB"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_BOMB"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_6"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("ALLOW_TIES"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("VEST_SHIRT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_VEST"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("CLOSED_COLLAR"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("OPEN_COLLAR"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_SHIRT"), 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_172(iParam0, iParam3)) || iVar3 == 13)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_SHIRT"), 0)))
				{
				}
				else
				{
					iVar0 = func_92(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_170(func_87(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_172(iParam0, iParam3)) || iVar3 == 13) || iVar3 == 11)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_SHIRT"), 0))) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
				}
				else
				{
					iVar0 = func_92(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_170(func_87(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("LUXE2_DRAW_0"), 0)) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_0")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_1")) || iVar4 == joaat("DLC_MP_BUSI_M_JBIB4_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_0")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_1")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_2")) || iVar4 == joaat("DLC_MP_VAL_M_JBIB0_3"))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("VEST_SHIRT"), 0))) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4"))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_VEST"), 0)) && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_TIE_ALT"), 0)) || ((iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TUX_SHIRT"), 0)) && !unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_TIE_ALT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_1")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_2")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_3")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_4")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_5")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_6")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_7")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_2_8")) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("HEIST_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRAW_11"), 0))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_0")) || iVar6 == joaat("DLC_MP_IND_M_SPECIAL_0_1")) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_162(iVar6)) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("PILOT_SUIT"), 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar7 = -1;
		iVar8 = -1;
		if (iParam1 >= 55)
		{
			iVar8 = func_87(iParam0, iParam1, 7, 4);
			iVar7 = func_170(iVar8);
		}
		iVar9 = -1;
		iVar10 = -1;
		if (iParam3 >= 256)
		{
			iVar10 = func_87(iParam0, iParam3, 11, 4);
			iVar9 = func_170(iVar10);
		}
		iVar11 = -1;
		if (iParam9 >= 327)
		{
			iVar11 = func_87(iParam0, iParam9, 14, 4);
		}
		iVar12 = -1;
		iVar13 = -1;
		if (iParam4 >= 136)
		{
			iVar12 = func_87(iParam0, iParam4, 8, 4);
			iVar13 = func_170(iVar12);
		}
		if (iParam3 != -99)
		{
			if (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("SCARF"), 0))
			{
				if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("JACKET_SCARF"), 0))
				{
					if (((unk_0xED5E7EEE0DB220EF(iVar10, joaat("SMOKING_JACKET"), 0) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0))
					{
						return 0;
					}
					else if (func_163(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_163(iParam0, iParam3))
				{
					return 0;
				}
			}
			if (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("LUXE_SCARF"), 0))
			{
				if ((((unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar8 != -1 && (unk_0xED5E7EEE0DB220EF(iVar8, joaat("TIE"), 0) || unk_0xED5E7EEE0DB220EF(iVar8, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_5"), 0) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_11"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_12"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar9 == 7)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 == 8)
			{
				if (unk_0xED5E7EEE0DB220EF(iVar12, joaat("OPEN_COLLAR"), 0) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("CLOSED_COLLAR"), 0))
				{
					if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("TIE"), 0))
					{
						if (unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_8"), 0) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_9"), 0))
						{
							if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_TIE"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if (iVar11 != -1 && unk_0xED5E7EEE0DB220EF(iVar11, joaat("EARRING"), 1))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar7 == 1) || iVar7 == 2) || (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_5"), 0))
				{
					return 0;
				}
				else if (func_172(iParam0, iParam3))
				{
				}
				else if ((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar9 == 2) || iVar9 == 11) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_1"), 0)) || iVar10 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar10 == joaat("DLC_MP_IND_F_JBIB_1_1"))
				{
					if (!unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("DRESS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST_SHIRT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("PILOT_SUIT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_TOP"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_SWEAT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("XMAS2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, -1086258388, 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_9"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_10"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_13"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_14"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_15"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_9"), 0))
				{
					return 0;
				}
				else if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar13 == 11) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("OFF_SHOULDER_ACCS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_12"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_9"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_10"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LUXE_DRAW_11"), 0)) || iVar12 == joaat("DLC_MP_HEIST_F_SPECIAL_12_0")) || iVar12 == joaat("DLC_MP_HEIST_F_SPECIAL_12_1")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_2")) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("LOW2_DRAW_5"), 0))
				{
					if (!unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((unk_0xED5E7EEE0DB220EF(iVar12, joaat("VEST_SHIRT"), 0) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar12, joaat("HEIST_DRAW_9"), 0))
				{
					return 0;
				}
				else if (func_171(iParam0, iParam4, 0) != -99)
				{
					if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar7 == 3) || (iVar8 != -1 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && unk_0xED5E7EEE0DB220EF(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar7 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && unk_0xED5E7EEE0DB220EF(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar7 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && unk_0xED5E7EEE0DB220EF(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar7 == 6)
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_0"), 0))) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_9"), 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar7 == 7) || (iParam1 >= 55 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 2) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("HEIST_DRAW_3"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("DRAW_0"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_DRAW_4"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_SWEAT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_0"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_DRAW_3"), 0))) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST_SHIRT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_9"), 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar9 == 7) || iVar9 == 10) || iVar9 == 12) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("COMBAT_GEAR"), 0))) || unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0))
				{
					if (iParam1 >= 55 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam4, 8, 4), joaat("VEST_SHIRT"), 0))
				{
					if (iParam1 >= 55 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && unk_0xED5E7EEE0DB220EF(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar7 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar9 == 0) || iVar9 == 2) || iVar9 == 4) || iVar9 == 5) || iVar9 == 9) || iVar9 == 11) || iVar9 == 12) || iVar9 == 13) || iVar9 == 15) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("DRESS"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW_SWEAT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar7 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar9 == 0) || iVar9 == 4) || iVar9 == 5) || iVar9 == 11) || iVar9 == 12) || iVar9 == 15) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && unk_0xED5E7EEE0DB220EF(iVar8, joaat("BRACES"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar10 != -1 && unk_0xED5E7EEE0DB220EF(iVar10, joaat("LOW2_DRAW_7"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar14 = -1;
				if (iParam11 >= 256)
				{
					iVar14 = func_87(iParam0, iParam11, 4, 4);
				}
				if (unk_0xED5E7EEE0DB220EF(iVar14, joaat("HIGH_WAIST"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BUSI_M_ACCS4_0"):
		case joaat("DLC_MP_BUSI_M_ACCS5_0"):
		case joaat("DLC_MP_BUSI_M_ACCS4_1"):
		case joaat("DLC_MP_BUSI_M_ACCS5_1"):
		case joaat("DLC_MP_BUSI_M_ACCS4_2"):
		case joaat("DLC_MP_BUSI_M_ACCS5_2"):
		case joaat("DLC_MP_BUSI_M_ACCS4_3"):
		case joaat("DLC_MP_BUSI_M_ACCS5_3"):
		case joaat("DLC_MP_BUSI_M_ACCS4_4"):
		case joaat("DLC_MP_BUSI_M_ACCS5_4"):
		case joaat("DLC_MP_BUSI_M_ACCS4_5"):
		case joaat("DLC_MP_BUSI_M_ACCS5_5"):
		case joaat("DLC_MP_BUSI_M_ACCS4_6"):
		case joaat("DLC_MP_BUSI_M_ACCS5_6"):
		case joaat("DLC_MP_BUSI_M_ACCS4_7"):
		case joaat("DLC_MP_BUSI_M_ACCS5_7"):
		case joaat("DLC_MP_BUSI_M_ACCS4_8"):
		case joaat("DLC_MP_BUSI_M_ACCS5_8"):
		case joaat("DLC_MP_BUSI_M_ACCS4_9"):
		case joaat("DLC_MP_BUSI_M_ACCS5_9"):
		case joaat("DLC_MP_BUSI_M_ACCS4_10"):
		case joaat("DLC_MP_BUSI_M_ACCS5_10"):
		case joaat("DLC_MP_BUSI_M_ACCS4_11"):
		case joaat("DLC_MP_BUSI_M_ACCS5_11"):
		case joaat("DLC_MP_BUSI_M_ACCS4_12"):
		case joaat("DLC_MP_BUSI_M_ACCS5_12"):
		case joaat("DLC_MP_BUSI_M_ACCS4_13"):
		case joaat("DLC_MP_BUSI_M_ACCS5_13"):
		case joaat("DLC_MP_BUSI_M_ACCS4_14"):
		case joaat("DLC_MP_BUSI_M_ACCS5_14"):
		case joaat("DLC_MP_BUSI_M_ACCS4_15"):
		case joaat("DLC_MP_BUSI_M_ACCS5_15"):
			return 1;
			break;
	}
	return 0;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_87(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("JAN_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("JAN_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_3"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_6"), 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				return 1;
			}
		}
		return func_172(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_87(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_170(iVar1);
		}
		if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("COMBAT_TOP"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("HEIST_DRAW_9"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("SMOKING_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("SILK_ROBE"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("SILK_PYJAMAS"), 0)) || unk_0xED5E7EEE0DB220EF(iVar1, -826135203, 0)) || unk_0xED5E7EEE0DB220EF(iVar1, joaat("LOW2_DRAW_7"), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_164(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	func_166(unk_0x7CBED6EFED40E7EB("hairOverlay"), iParam0);
	iVar1 = func_165(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_69176;
		}
		func_182(iVar1, 1, Global_69176);
	}
	func_69(iParam0, bParam3, 0);
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_87(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case joaat("DLC_MP_BEACH_M_HAIR00"):
					case joaat("DLC_MP_BEACH_M_HAIR01"):
					case joaat("DLC_MP_BEACH_M_HAIR02"):
					case joaat("DLC_MP_BEACH_M_HAIR03"):
					case joaat("DLC_MP_BEACH_M_HAIR04"):
						return 108;
						break;
					
					case joaat("DLC_MP_BEACH_M_HAIR05"):
					case joaat("DLC_MP_BEACH_M_HAIR06"):
					case joaat("DLC_MP_BEACH_M_HAIR07"):
					case joaat("DLC_MP_BEACH_M_HAIR08"):
					case joaat("DLC_MP_BEACH_M_HAIR09"):
						return 109;
						break;
					
					case joaat("DLC_MP_BUSI_M_HAIR0_0"):
					case joaat("DLC_MP_BUSI_M_HAIR0_1"):
					case joaat("DLC_MP_BUSI_M_HAIR0_2"):
					case joaat("DLC_MP_BUSI_M_HAIR0_3"):
					case joaat("DLC_MP_BUSI_M_HAIR0_4"):
						return 110;
						break;
					
					case joaat("DLC_MP_BUSI_M_HAIR1_0"):
					case joaat("DLC_MP_BUSI_M_HAIR1_1"):
					case joaat("DLC_MP_BUSI_M_HAIR1_2"):
					case joaat("DLC_MP_BUSI_M_HAIR1_3"):
					case joaat("DLC_MP_BUSI_M_HAIR1_4"):
						return 111;
						break;
					
					case joaat("DLC_MP_HIPS_M_HAIR0_0"):
					case joaat("DLC_MP_HIPS_M_HAIR0_1"):
					case joaat("DLC_MP_HIPS_M_HAIR0_2"):
					case joaat("DLC_MP_HIPS_M_HAIR0_3"):
					case joaat("DLC_MP_HIPS_M_HAIR0_4"):
						return 112;
						break;
					
					case joaat("DLC_MP_HIPS_M_HAIR1_0"):
					case joaat("DLC_MP_HIPS_M_HAIR1_1"):
					case joaat("DLC_MP_HIPS_M_HAIR1_2"):
					case joaat("DLC_MP_HIPS_M_HAIR1_3"):
					case joaat("DLC_MP_HIPS_M_HAIR1_4"):
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = unk_0x9CEB16FD2DD9853F(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					unk_0x2DFD0B33E5E67629(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != joaat("0"))
						{
							return func_118(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 80)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 81)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 82)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 83)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 84)
		{
			return func_118(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_87(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case joaat("DLC_MP_BEACH_F_HAIR00"):
					case joaat("DLC_MP_BEACH_F_HAIR01"):
					case joaat("DLC_MP_BEACH_F_HAIR02"):
					case joaat("DLC_MP_BEACH_F_HAIR03"):
					case joaat("DLC_MP_BEACH_F_HAIR04"):
						return 108;
						break;
					
					case joaat("DLC_MP_BEACH_F_HAIR05"):
					case joaat("DLC_MP_BEACH_F_HAIR06"):
					case joaat("DLC_MP_BEACH_F_HAIR07"):
					case joaat("DLC_MP_BEACH_F_HAIR08"):
					case joaat("DLC_MP_BEACH_F_HAIR09"):
						return 109;
						break;
					
					case joaat("DLC_MP_BUSI_F_HAIR0_0"):
					case joaat("DLC_MP_BUSI_F_HAIR0_1"):
					case joaat("DLC_MP_BUSI_F_HAIR0_2"):
					case joaat("DLC_MP_BUSI_F_HAIR0_3"):
					case joaat("DLC_MP_BUSI_F_HAIR0_4"):
						return 110;
						break;
					
					case joaat("DLC_MP_BUSI_F_HAIR1_0"):
					case joaat("DLC_MP_BUSI_F_HAIR1_1"):
					case joaat("DLC_MP_BUSI_F_HAIR1_2"):
					case joaat("DLC_MP_BUSI_F_HAIR1_3"):
					case joaat("DLC_MP_BUSI_F_HAIR1_4"):
						return 111;
						break;
					
					case joaat("DLC_MP_HIPS_F_HAIR0_0"):
					case joaat("DLC_MP_HIPS_F_HAIR0_1"):
					case joaat("DLC_MP_HIPS_F_HAIR0_2"):
					case joaat("DLC_MP_HIPS_F_HAIR0_3"):
					case joaat("DLC_MP_HIPS_F_HAIR0_4"):
						return 112;
						break;
					
					case joaat("DLC_MP_HIPS_F_HAIR1_0"):
					case joaat("DLC_MP_HIPS_F_HAIR1_1"):
					case joaat("DLC_MP_HIPS_F_HAIR1_2"):
					case joaat("DLC_MP_HIPS_F_HAIR1_3"):
					case joaat("DLC_MP_HIPS_F_HAIR1_4"):
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = unk_0x9CEB16FD2DD9853F(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					unk_0x2DFD0B33E5E67629(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != joaat("0"))
						{
							return func_118(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_166(int iParam0, int iParam1)
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam1))
	{
		iVar13 = func_124(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_182(13, 0, Global_69176);
					func_182(14, 0, Global_69176);
					func_182(15, 0, Global_69176);
					func_182(16, 0, Global_69176);
					func_182(71, 0, Global_69176);
					func_182(72, 0, Global_69176);
					return;
				}
				else if (iParam0 == joaat("torsoDecal"))
				{
					if (iVar13 == 3)
					{
						func_182(73, 0, Global_69176);
						func_182(74, 0, Global_69176);
						func_182(75, 0, Global_69176);
						func_182(76, 0, Global_69176);
						func_182(77, 0, Global_69176);
						func_182(78, 0, Global_69176);
						func_182(79, 0, Global_69176);
						func_182(80, 0, Global_69176);
						func_182(81, 0, Global_69176);
						func_182(82, 0, Global_69176);
						func_182(83, 0, Global_69176);
						func_182(84, 0, Global_69176);
						func_182(85, 0, Global_69176);
						func_182(86, 0, Global_69176);
						func_182(90, 0, Global_69176);
						func_182(91, 0, Global_69176);
						func_182(124, 0, Global_69176);
						func_182(125, 0, Global_69176);
						func_182(87, 0, Global_69176);
						func_182(88, 0, Global_69176);
						func_182(89, 0, Global_69176);
						iVar15 = unk_0x1A63000484B6AF50(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (unk_0x4837866CF25A54CD(3, iVar14, &Var16))
							{
								if (Var16.f_6 == joaat("torsoDecal"))
								{
									func_182((129 + iVar14), 0, Global_69176);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_182(73, 0, Global_69176);
						func_182(74, 0, Global_69176);
						func_182(75, 0, Global_69176);
						func_182(76, 0, Global_69176);
						func_182(77, 0, Global_69176);
						func_182(78, 0, Global_69176);
						func_182(79, 0, Global_69176);
						func_182(80, 0, Global_69176);
						func_182(81, 0, Global_69176);
						func_182(82, 0, Global_69176);
						func_182(83, 0, Global_69176);
						func_182(84, 0, Global_69176);
						func_182(85, 0, Global_69176);
						func_182(92, 0, Global_69176);
						func_182(87, 0, Global_69176);
						func_182(88, 0, Global_69176);
						func_182(89, 0, Global_69176);
						iVar32 = unk_0x1A63000484B6AF50(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (unk_0x4837866CF25A54CD(4, iVar31, &Var33))
							{
								if (Var33.f_6 == joaat("torsoDecal"))
								{
									func_182((129 + iVar31), 0, Global_69176);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_182(93, 0, Global_69176);
						func_182(94, 0, Global_69176);
						func_182(95, 0, Global_69176);
						func_182(96, 0, Global_69176);
						func_182(97, 0, Global_69176);
						func_182(98, 0, Global_69176);
						func_182(99, 0, Global_69176);
						func_182(100, 0, Global_69176);
						func_182(101, 0, Global_69176);
						func_182(102, 0, Global_69176);
						func_182(103, 0, Global_69176);
						func_182(104, 0, Global_69176);
						func_182(105, 0, Global_69176);
						func_182(106, 0, Global_69176);
						func_182(107, 0, Global_69176);
						func_182(108, 0, Global_69176);
						func_182(109, 0, Global_69176);
						func_182(110, 0, Global_69176);
						func_182(111, 0, Global_69176);
						func_182(112, 0, Global_69176);
						func_182(113, 0, Global_69176);
						func_182(114, 0, Global_69176);
						func_182(115, 0, Global_69176);
						func_182(116, 0, Global_69176);
						func_182(117, 0, Global_69176);
						func_182(123, 0, Global_69176);
						iVar49 = unk_0x1A63000484B6AF50(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (unk_0x4837866CF25A54CD(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_182((129 + iVar48), 0, Global_69176);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_182(93, 0, Global_69176);
						func_182(94, 0, Global_69176);
						func_182(95, 0, Global_69176);
						func_182(96, 0, Global_69176);
						func_182(97, 0, Global_69176);
						func_182(98, 0, Global_69176);
						func_182(99, 0, Global_69176);
						func_182(100, 0, Global_69176);
						func_182(101, 0, Global_69176);
						func_182(102, 0, Global_69176);
						func_182(103, 0, Global_69176);
						func_182(104, 0, Global_69176);
						func_182(105, 0, Global_69176);
						func_182(106, 0, Global_69176);
						func_182(107, 0, Global_69176);
						func_182(108, 0, Global_69176);
						func_182(109, 0, Global_69176);
						func_182(110, 0, Global_69176);
						func_182(111, 0, Global_69176);
						func_182(112, 0, Global_69176);
						func_182(113, 0, Global_69176);
						func_182(114, 0, Global_69176);
						func_182(115, 0, Global_69176);
						func_182(116, 0, Global_69176);
						func_182(117, 0, Global_69176);
						func_182(118, 0, Global_69176);
						func_182(119, 0, Global_69176);
						func_182(120, 0, Global_69176);
						func_182(121, 0, Global_69176);
						func_182(122, 0, Global_69176);
						func_182(123, 0, Global_69176);
						iVar66 = unk_0x1A63000484B6AF50(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (unk_0x4837866CF25A54CD(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_182((129 + iVar65), 0, Global_69176);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (func_71(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_182(Var0.f_11, 0, Global_69176);
					}
				}
				iVar82++;
			}
		}
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_184();
	if (iVar0 != -1)
	{
		if (!func_168(iParam0, iParam1, iVar0))
		{
			func_182(iVar0, 0, Global_69176);
		}
	}
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_172(iParam0, iParam1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_87(iParam0, iParam1, 11, 3);
				iVar0 = func_170(iVar1);
			}
			if (iVar1 != -1 && func_141(iVar1, 0) != -1)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_117(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_87(iParam0, iParam1, 11, 4);
				iVar2 = func_170(iVar3);
			}
			if (iVar3 != -1 && func_141(iVar3, 0) != -1)
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_117(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_117(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !unk_0xED5E7EEE0DB220EF(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_87(iParam0, iParam1, 4, 3);
			iVar1 = func_170(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_87(iParam0, iParam2, 11, 3);
			iVar3 = func_170(iVar2);
		}
		if (iVar2 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && unk_0xED5E7EEE0DB220EF(iVar0, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar0 != -1 && unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar0 != -1 && unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_JACKET"), 0))
			{
				if (iVar0 != -1 && unk_0xED5E7EEE0DB220EF(iVar0, joaat("TUX_PANTS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("TUX_PANTS"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_JACKET"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar0 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("TUX_PANTS"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_JACKET"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TAILS_JACKET"), 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || unk_0xED5E7EEE0DB220EF(iVar0, joaat("HEIST_DRAW_4"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106:
				if ((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13)
				{
					return 0;
				}
				break;
		}
		if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("SCRUFFY_JACKET"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("LOW2_DRAW_0"), 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_87(iParam0, iParam1, 4, 4);
			iVar5 = func_170(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_87(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRESS"), 0))
			{
				if ((iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("DRESS"), 0)) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("DRESS"), 0))
			{
				if ((iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRESS"), 0)) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if ((((((((unk_0xED5E7EEE0DB220EF(iVar6, joaat("VEST"), 0) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("VEST_SHIRT"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("XMAS2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, -1086258388, 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW2_DRAW_1"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRAW_0"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		else if (iVar4 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("DRESS"), 0))
			{
				if ((iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("DRESS"), 0)) || (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("HIGH_WAIST"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW_DRAW_1"), 0) || unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW2_DRAW_7"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xED5E7EEE0DB220EF(iVar6, joaat("LOW2_DRAW_7"), 0))
		{
			if (unk_0xED5E7EEE0DB220EF(iVar4, joaat("HIGH_WAIST"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAILS_JACKET"), 0))
		{
			if ((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2)
			{
				return 0;
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2)
		{
			if (iVar6 != -1 && unk_0xED5E7EEE0DB220EF(iVar6, joaat("TAILS_JACKET"), 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_170(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0xED5E7EEE0DB220EF(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_87(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0x7D62D032481867D5(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0xFBE76C9788411A2E(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = func_96(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_87(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0x7D62D032481867D5(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0xFBE76C9788411A2E(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = func_96(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if ((((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172)) || (iParam1 >= 237 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam1, 11, 3), joaat("JACKET"), 0)))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 256 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam1, 11, 4), joaat("JACKET"), 0)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	bool bVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_87(iParam0, iParam2, 11, 3);
			iVar3 = func_170(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_87(iParam0, iParam1, 11, 3);
			iVar5 = func_170(iVar4);
		}
		if (iVar2 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_4"), 0) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("JAN_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW2_BOMB"), 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if ((unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_5"), 0) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("JAN_DRAW_1"), 0))
			{
				return -99;
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("TUX_JACKET"), 0))
			{
				return -99;
			}
			if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if ((iParam1 >= 220 && iParam1 <= 235) && func_174())
			{
				iVar0 = 34;
				iVar1 = 0;
				unk_0x9B9B863E6E606420(&Var6);
				if (Global_2556855[1] != 0)
				{
					unk_0xC9E3A692557F7FB1(3, 6, -1, 0, -1, 8);
					unk_0x5D83343EA9D5A5C1(Global_2556852[1], &Var6);
					if (Var6.f_1 != Global_2556855[1])
					{
						Global_2556855[1] = 0;
						Global_2556852[1] = 0;
					}
				}
				if (Global_2556855[1] == 0)
				{
					iVar24 = 0;
					iVar25 = unk_0xC9E3A692557F7FB1(3, 6, -1, 0, -1, 8);
					iVar23 = 0;
					while (iVar23 < iVar25)
					{
						unk_0x5D83343EA9D5A5C1(iVar23, &Var6);
						if (!unk_0x06C32703437E5BC3(Var6.f_0))
						{
							if (unk_0x7CBED6EFED40E7EB(&(Var6.f_9)) == -1665616807 && unk_0xED5E7EEE0DB220EF(Var6.f_1, joaat("ALT_SPECIAL"), 0))
							{
								Global_2556855[1] = Var6.f_1;
								Global_2556852[1] = iVar24;
								iVar23 = iVar25 + 1;
							}
							iVar24++;
						}
						iVar23++;
					}
				}
				if (Global_2556855[1] != 0)
				{
					iVar0 = (func_88(iParam0, func_89(8)) + Global_2556852[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar26 = func_87(iParam0, iParam1, 11, 3);
					if ((iVar26 != -1 && !unk_0xED5E7EEE0DB220EF(iVar26, joaat("DRAW_12"), 0)) && !unk_0xED5E7EEE0DB220EF(iVar26, joaat("DRAW_8"), 0))
					{
						iVar27 = unk_0x7D62D032481867D5(iVar26);
						iVar28 = 0;
						while (iVar28 < iVar27)
						{
							unk_0xFBE76C9788411A2E(iVar26, iVar28, &iVar29, &iVar30, &iVar31);
							if (iVar31 == 8)
							{
								if (iVar29 != 0 && iVar29 != joaat("0"))
								{
									iVar0 = func_96(iParam0, iVar29, 8, 3);
								}
								else
								{
									iVar0 = iVar30;
								}
							}
							iVar28++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar32 = 0;
				if (iParam2 >= 236 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TAILS_JACKET"), 0))
				{
					iVar32 = 1;
				}
				iVar33 = func_87(iParam0, iParam1, 11, 3);
				if (iVar33 != -1)
				{
					iVar34 = unk_0x7D62D032481867D5(iVar33);
					iVar35 = 0;
					while (iVar35 < iVar34)
					{
						unk_0xFBE76C9788411A2E(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
						if (iVar38 == 8 && iVar32 == unk_0xED5E7EEE0DB220EF(iVar36, joaat("TAILS_VERSION"), 0))
						{
							if (iVar36 != 0 && iVar36 != joaat("0"))
							{
								iVar0 = func_96(iParam0, iVar36, 8, 3);
							}
							else
							{
								iVar0 = iVar37;
							}
							iVar35 = iVar34 + 1;
							iVar1 = 0;
						}
						iVar35++;
					}
				}
				else
				{
					iVar0 = func_96(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_0"), 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_174())
			{
				iVar39 = 0;
				iVar40 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TAILS_JACKET"), 0)))
				{
					iVar39 = 1;
					iVar40 = 1;
				}
				unk_0x9B9B863E6E606420(&Var41);
				if (Global_2556855[iVar40] != 0)
				{
					unk_0xC9E3A692557F7FB1(3, 6, -1, 0, -1, 8);
					unk_0x5D83343EA9D5A5C1(Global_2556852[iVar40], &Var41);
					if (Var41.f_1 != Global_2556855[iVar40])
					{
						Global_2556855[iVar40] = 0;
						Global_2556852[iVar40] = 0;
					}
				}
				if (Global_2556855[iVar40] == 0)
				{
					iVar59 = 0;
					iVar60 = unk_0xC9E3A692557F7FB1(3, 6, -1, 0, -1, 8);
					iVar58 = 0;
					while (iVar58 < iVar60)
					{
						unk_0x5D83343EA9D5A5C1(iVar58, &Var41);
						if (!unk_0x06C32703437E5BC3(Var41.f_0))
						{
							if (unk_0x7CBED6EFED40E7EB(&(Var41.f_9)) == -1665616807 && iVar39 == unk_0xED5E7EEE0DB220EF(Var41.f_1, joaat("ALT_SPECIAL"), 0))
							{
								Global_2556855[iVar40] = Var41.f_1;
								Global_2556852[iVar40] = iVar59;
								iVar58 = iVar60 + 1;
							}
							iVar59++;
						}
						iVar58++;
					}
				}
				if (Global_2556855[iVar40] != 0)
				{
					iVar0 = (func_88(iParam0, func_89(8)) + Global_2556852[iVar40]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("TAILS_JACKET"), 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			iVar61 = func_87(iParam0, iParam1, 11, 3);
			if (iVar61 != -1)
			{
				iVar62 = unk_0x7D62D032481867D5(iVar61);
				iVar63 = 0;
				while (iVar63 < iVar62)
				{
					unk_0xFBE76C9788411A2E(iVar61, iVar63, &iVar64, &iVar65, &iVar66);
					if (iVar66 == 8)
					{
						if (iVar64 != 0 && iVar64 != joaat("0"))
						{
							iVar0 = func_96(iParam0, iVar64, 8, 3);
						}
						else
						{
							iVar0 = iVar65;
						}
						iVar63 = iVar62 + 1;
						iVar1 = 0;
					}
					iVar63++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar67 = -1;
		iVar68 = -1;
		if (iParam2 >= 256)
		{
			iVar67 = func_87(iParam0, iParam2, 11, 4);
			iVar68 = func_170(iVar67);
		}
		iVar69 = -1;
		iVar70 = -1;
		if (iParam1 >= 256)
		{
			iVar69 = func_87(iParam0, iParam1, 11, 4);
			iVar70 = func_170(iVar69);
		}
		if (iVar67 != -1)
		{
			if (unk_0xED5E7EEE0DB220EF(iVar67, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if (unk_0xED5E7EEE0DB220EF(iVar67, joaat("LOW2_OPEN_CHECK"), 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar70 == 0) || iVar70 == 2) || iVar70 == 4) || iVar70 == 5) || iVar70 == 11) || iVar70 == 12) || iVar70 == 13) || iVar70 == 15) || iVar69 == joaat("DLC_MP_BUS2_F_JBIB0_0")) || iVar69 == joaat("DLC_MP_BUS2_F_JBIB0_1")) || iVar69 == joaat("DLC_MP_BUS2_F_JBIB0_2")) || iVar69 == joaat("DLC_MP_HIPS_F_JBIB7_0")) || iVar69 == joaat("DLC_MP_HIPS_F_JBIB7_1")) || iVar69 == joaat("DLC_MP_HIPS_F_JBIB7_2")) || iVar69 == joaat("DLC_MP_HIPS_F_JBIB7_3")) || iVar69 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar69 == joaat("DLC_MP_LUXE_F_JBIB_3_0"))
			{
			}
			else
			{
				return -99;
			}
		}
		iVar71 = 0;
		bVar72 = false;
		if (((((unk_0xED5E7EEE0DB220EF(iVar69, joaat("HEIST_DRAW_3"), 0) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LUXE_DRAW_4"), 0)) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW2_DRAW_1"), 0))
		{
			bVar72 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar68 == 1) || iVar68 == 8)
			{
				iVar71 = 2;
			}
			else if ((unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE2_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE_DRAW_2"), 0))
			{
				iVar71 = 0;
			}
			else if (((((((iParam2 >= 160 && iParam2 <= 175) || iVar68 == 10) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("HEIST_DRAW_5"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("HEIST_DRAW_11"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("HEIST_DRAW_12"), 0))
			{
				if (unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW_DRAW_2"), 0))
				{
					iVar71 = 1;
				}
				else if (unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar69, joaat("LOW2_DRAW_0"), 0))
				{
					iVar71 = 1;
				}
				else
				{
					iVar71 = -1;
				}
			}
			else
			{
				iVar71 = 1;
			}
		}
		switch (iVar69)
		{
			case joaat("DLC_MP_BUS2_F_JBIB0_0"):
			case joaat("DLC_MP_BUS2_F_JBIB0_1"):
			case joaat("DLC_MP_BUS2_F_JBIB0_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_0"):
			case joaat("DLC_MP_HIPS_F_JBIB7_1"):
			case joaat("DLC_MP_HIPS_F_JBIB7_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_3"):
			case joaat("DLC_MP_IND_F_JBIB_1_0"):
			case joaat("DLC_MP_LUXE_F_JBIB_3_0"):
				bVar72 = true;
				if (unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE2_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE_DRAW_2"), 0))
				{
					iVar71 = 1;
				}
				else if (unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE2_DRAW_1"), 0))
				{
					iVar71 = 2;
				}
				else if (unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE_DRAW_0"), 0) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LOW2_OPEN_CHECK"), 0))
				{
					iVar71 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar68 == 1) || iVar68 == 7) || iVar68 == 8)
				{
					iVar71 = 0;
				}
				else
				{
					iVar71 = -1;
				}
				break;
			
			case joaat("DLC_MP_IND_F_JBIB_1_1"):
				bVar72 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar68 == 1) || iVar68 == 8)
				{
					iVar71 = 0;
				}
				else
				{
					iVar71 = -1;
				}
				break;
		}
		if (bVar72)
		{
			if (iVar71 != -1)
			{
				iVar73 = unk_0x7D62D032481867D5(iVar69);
				iVar74 = 0;
				while (iVar74 < iVar73)
				{
					unk_0xFBE76C9788411A2E(iVar69, iVar74, &iVar75, &iVar76, &iVar77);
					if (iVar77 == 8)
					{
						if ((((iVar71 == 3 && unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL_3"), 0)) || (iVar71 == 2 && unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL_2"), 0))) || (iVar71 == 1 && unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL"), 0))) || (((iVar71 == 0 && !unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL"), 0)) && !unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL_2"), 0)) && !unk_0xED5E7EEE0DB220EF(iVar75, joaat("ALT_SPECIAL_3"), 0)))
						{
							if (iVar75 != 0 && iVar75 != joaat("0"))
							{
								iVar0 = func_96(iParam0, iVar75, 8, 4);
							}
							else
							{
								iVar0 = iVar76;
							}
							iVar74 = iVar73 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar74++;
				}
			}
			return -99;
		}
		if ((((iParam1 >= 192 && iParam1 <= 207) || iVar70 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar68 == 6) || iVar68 == 7)) && func_174())
		{
			iVar78 = iVar69;
			if (iParam1 == 199)
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_0"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_3"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_1"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_4"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_2"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_5"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_3"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_6"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_4"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_7"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_5"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_8"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_6"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_9"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_7"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_10"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_8"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_11"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_9"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_12"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_10"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_13"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_11"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_14"), 8, 4);
			}
			else if (iVar78 == joaat("DLC_MP_BUSI_F_JBIB2_12"))
			{
				iVar0 = func_96(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_15"), 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((iParam2 >= 160 && iParam2 <= 175) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar67, joaat("LUXE_DRAW_2"), 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar68 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar69 != -1)
			{
				bVar79 = true;
				if (unk_0xED5E7EEE0DB220EF(iVar69, joaat("VEST_SHIRT"), 0))
				{
					bVar79 = false;
					if (iParam2 >= 256 && unk_0xED5E7EEE0DB220EF(iVar67, joaat("VEST"), 0))
					{
						bVar79 = true;
					}
				}
				if (bVar79)
				{
					iVar80 = 0;
					if (iParam2 >= 156 && iParam2 <= 171)
					{
						if (iVar70 == 12)
						{
							iVar80 = 1;
						}
					}
					iVar81 = unk_0x7D62D032481867D5(iVar69);
					iVar82 = 0;
					while (iVar82 < iVar81)
					{
						unk_0xFBE76C9788411A2E(iVar69, iVar82, &iVar83, &iVar84, &iVar85);
						if (iVar85 == 8 && ((iVar83 == 0 || iVar83 == joaat("0")) || iVar80 == unk_0xED5E7EEE0DB220EF(iVar83, joaat("ALT_SPECIAL"), 0)))
						{
							if (iVar83 != 0 && iVar83 != joaat("0"))
							{
								iVar0 = func_96(iParam0, iVar83, 8, 4);
							}
							else
							{
								iVar0 = iVar84;
							}
							iVar82 = iVar81 + 1;
							iVar1 = 0;
						}
						iVar82++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_174()
{
	return unk_0x9F37711843A20114(42019760);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_0_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_13_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_26_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_39_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_52_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_65_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_78_0");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_1_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_14_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_27_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_40_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_53_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_66_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_79_0");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_2_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_15_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_28_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_41_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_54_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_67_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_80_0");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return joaat("DLC_MP_LTS_F_UPPR_0_0");
							break;
						
						case 1:
							return joaat("DLC_MP_LTS_F_UPPR_1_0");
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_3_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_16_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_29_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_42_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_55_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_68_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_81_0");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_4_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_17_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_30_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_43_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_56_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_69_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_82_0");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_5_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_18_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_31_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_44_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_57_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_70_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_83_0");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_6_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_19_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_32_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_45_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_58_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_71_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_84_0");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_7_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_20_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_33_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_46_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_59_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_72_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_85_0");
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_8_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_21_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_34_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_47_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_60_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_73_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_86_0");
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_9_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_22_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_35_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_48_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_61_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_74_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_87_0");
							break;
						
						case 9:
							return joaat("DLC_MP_VAL_F_UPPR0_0");
							break;
						
						case 10:
							return joaat("DLC_MP_VAL_F_UPPR0_1");
							break;
						
						case 11:
							return joaat("DLC_MP_VAL_F_UPPR0_2");
							break;
						
						case 12:
							return joaat("DLC_MP_VAL_F_UPPR0_3");
							break;
						
						case 13:
							return joaat("DLC_MP_VAL_F_UPPR0_4");
							break;
						
						case 14:
							return joaat("DLC_MP_VAL_F_UPPR0_5");
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_10_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_23_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_36_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_49_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_62_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_75_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_88_0");
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_11_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_24_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_37_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_50_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_63_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_76_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_89_0");
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_F_TORSO_12_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_F_TORSO_25_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_F_TORSO_38_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_F_TORSO_51_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_F_TORSO_64_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_F_TORSO_77_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_F_TORSO_90_0");
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_0_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_11_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_22_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_33_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_44_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_55_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_66_0");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_1_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_12_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_23_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_34_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_45_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_56_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_67_0");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_2_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_13_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_24_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_35_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_46_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_57_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_68_0");
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return joaat("DLC_MP_LTS_M_UPPR_0_0");
							break;
						
						case 1:
							return joaat("DLC_MP_LTS_M_UPPR_1_0");
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_3_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_14_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_25_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_36_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_47_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_58_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_69_0");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_4_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_15_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_26_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_37_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_48_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_59_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_70_0");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_5_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_16_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_27_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_38_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_49_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_60_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_71_0");
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_6_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_17_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_28_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_39_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_50_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_61_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_72_0");
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_7_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_18_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_29_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_40_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_51_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_62_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_73_0");
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_8_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_19_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_30_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_41_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_52_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_63_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_74_0");
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_9_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_20_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_31_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_42_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_53_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_64_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_75_0");
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return joaat("DLC_MP_HEIST_M_TORSO_10_0");
							break;
						
						case 3:
							return joaat("DLC_MP_HEIST_M_TORSO_21_0");
							break;
						
						case 4:
							return joaat("DLC_MP_HEIST_M_TORSO_32_0");
							break;
						
						case 5:
							return joaat("DLC_MP_HEIST_M_TORSO_43_0");
							break;
						
						case 6:
							return joaat("DLC_MP_HEIST_M_TORSO_54_0");
							break;
						
						case 7:
							return joaat("DLC_MP_HEIST_M_TORSO_65_0");
							break;
						
						case 8:
							return joaat("DLC_MP_HEIST_M_TORSO_76_0");
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_87(iParam0, iParam2, 11, 3);
				iVar1 = func_170(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_87(iParam0, iParam1, 8, 3);
				iVar3 = func_170(iVar4);
			}
			if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = unk_0x9CEB16FD2DD9853F(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							unk_0x2DFD0B33E5E67629(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = func_96(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_87(iParam0, iParam2, 11, 4);
				iVar1 = func_170(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_87(iParam0, iParam1, 8, 4);
				iVar3 = func_170(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					}
			}
			if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if (((((iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && unk_0xED5E7EEE0DB220EF(iVar4, joaat("LOW2_DRAW_3"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if ((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("TAILS_JACKET"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_16"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_17"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_2"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE2_DRAW_0"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE2_DRAW_1"), 0)) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
				{
					iVar0 = 3;
				}
				else if (unk_0xED5E7EEE0DB220EF(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if (iVar2 != -1 && unk_0xED5E7EEE0DB220EF(iVar2, joaat("LUXE_DRAW_0"), 0))
			{
				if ((((unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_5"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = unk_0x9CEB16FD2DD9853F(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							unk_0x2DFD0B33E5E67629(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = func_96(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || unk_0xED5E7EEE0DB220EF(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_5"), 0) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_6"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0xED5E7EEE0DB220EF(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_97(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_100976.f_1770.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_100976.f_7719.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_100976.f_7719.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_100976.f_1770.f_539[1 /*65*/].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_100976.f_1770.f_539[2 /*65*/].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	bool bVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_179(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_92(iParam0, 8);
					iVar3 = func_87(iParam1, iVar2, 8, 3);
					iVar4 = func_170(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && unk_0xED5E7EEE0DB220EF(iVar3, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = func_87(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						bVar6 = true;
						if (unk_0xED5E7EEE0DB220EF(iVar5, joaat("DRAW_11"), 0))
						{
							iVar2 = func_92(iParam0, 8);
							iVar7 = func_87(iParam1, iVar2, 8, 3);
							iVar8 = func_170(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && unk_0xED5E7EEE0DB220EF(iVar7, joaat("VEST_SHIRT"), 0)))
							{
								bVar6 = false;
							}
						}
						if (bVar6)
						{
							iVar9 = unk_0x9CEB16FD2DD9853F(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								unk_0x2DFD0B33E5E67629(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != joaat("0"))
									{
										iVar0 = func_96(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_87(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = unk_0x9CEB16FD2DD9853F(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							unk_0x2DFD0B33E5E67629(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = func_170(func_87(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_92(iParam0, 8);
					iVar21 = func_87(iParam1, iVar2, 8, 3);
					iVar22 = func_170(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && unk_0xED5E7EEE0DB220EF(iVar21, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = func_87(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = unk_0x9CEB16FD2DD9853F(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							unk_0x2DFD0B33E5E67629(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = func_87(iParam1, iParam3, 7, 3);
					iVar29 = func_170(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("TIE"), 0)))
				{
					iVar2 = func_92(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar31 = func_87(iParam1, iVar2, 8, 3);
						iVar32 = func_170(iVar31);
						bVar33 = unk_0xED5E7EEE0DB220EF(iVar31, joaat("TUX_VEST"), 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || unk_0xED5E7EEE0DB220EF(iVar31, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = unk_0x7D62D032481867D5(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									unk_0xFBE76C9788411A2E(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !bVar33) || (iVar38 == 10 && bVar33))
									{
										if (iVar36 != 0 && iVar36 != joaat("0"))
										{
											iVar0 = func_96(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("SLACK_TIE"), 0))) || (iParam3 >= 92 && unk_0xED5E7EEE0DB220EF(iVar30, joaat("LOOSE_BOWTIE"), 0)))
				{
					iVar39 = func_87(iParam1, iVar2, 8, 3);
					iVar40 = func_170(iVar39);
					bVar41 = unk_0xED5E7EEE0DB220EF(iVar39, joaat("TUX_VEST"), 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || unk_0xED5E7EEE0DB220EF(iVar39, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = unk_0x7D62D032481867D5(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								unk_0xFBE76C9788411A2E(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !bVar41) || (iVar46 == 10 && bVar41))
								{
									if (iVar44 != 0 && iVar44 != joaat("0"))
									{
										iVar0 = func_96(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = func_87(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = unk_0x9CEB16FD2DD9853F(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							unk_0x2DFD0B33E5E67629(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = func_87(iParam1, iParam3, 7, 3);
					iVar53 = func_170(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || unk_0xED5E7EEE0DB220EF(iVar54, joaat("TIE"), 0))
				{
					iVar55 = func_92(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = func_87(iParam1, iVar55, 11, 3);
						if (unk_0xED5E7EEE0DB220EF(iVar56, joaat("SHIRT_BRACES"), 0) && unk_0xED5E7EEE0DB220EF(iVar56, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = unk_0x7D62D032481867D5(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									unk_0xFBE76C9788411A2E(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != joaat("0"))
										{
											iVar0 = func_96(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = func_92(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = func_87(iParam1, iVar62, 11, 3);
					if (unk_0xED5E7EEE0DB220EF(iVar63, joaat("SHIRT_BRACES"), 0) && unk_0xED5E7EEE0DB220EF(iVar63, joaat("OPEN_COLLAR"), 0))
					{
						iVar63 = func_87(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = unk_0x9CEB16FD2DD9853F(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								unk_0x2DFD0B33E5E67629(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != joaat("0"))
									{
										iVar0 = func_96(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = func_87(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = unk_0x9CEB16FD2DD9853F(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							unk_0x2DFD0B33E5E67629(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar75 = func_87(iParam1, iParam3, 11, 3);
					if (iVar75 != -1)
					{
						iVar76 = unk_0x9CEB16FD2DD9853F(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							unk_0x2DFD0B33E5E67629(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar78, 4, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar81 = func_87(iParam1, iParam3, 4, 3);
					if (iVar81 != -1)
					{
						iVar82 = unk_0x9CEB16FD2DD9853F(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							unk_0x2DFD0B33E5E67629(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == 6)
							{
								if (iVar84 != 0 && iVar84 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar84, 6, 3);
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar87 = func_87(iParam1, iParam3, 11, 3);
					if (iVar87 != -1)
					{
						iVar88 = unk_0x9CEB16FD2DD9853F(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							unk_0x2DFD0B33E5E67629(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 6)
							{
								if (iVar90 != 0 && iVar90 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar90, 6, 3);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar93 = func_87(iParam1, iParam3, 1, 3);
					if (iVar93 != -1)
					{
						iVar94 = unk_0x0597D57AAD076680(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							unk_0x646AAD4ECFF58AE3(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == iParam5)
							{
								if (iVar96 != 0 && iVar96 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar96, 14, 3);
									iVar95 = iVar94 + 1;
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar99 = func_87(iParam1, iParam3, 11, 4);
					if (iVar99 != -1)
					{
						iVar100 = unk_0x9CEB16FD2DD9853F(iVar99);
						iVar101 = 0;
						while (iVar101 < iVar100)
						{
							unk_0x2DFD0B33E5E67629(iVar99, iVar101, &iVar102, &iVar103, &iVar104);
							if (iVar104 == 3)
							{
								if (iVar102 != 0 && iVar102 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar102, 3, 4);
								}
								else
								{
									iVar0 = iVar103;
									iVar101 = iVar100 + 1;
								}
							}
							iVar101++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar105 = func_87(iParam1, iParam3, 11, 4);
					if (iVar105 != -1)
					{
						iVar106 = unk_0x9CEB16FD2DD9853F(iVar105);
						iVar107 = 0;
						while (iVar107 < iVar106)
						{
							unk_0x2DFD0B33E5E67629(iVar105, iVar107, &iVar108, &iVar109, &iVar110);
							if (iVar110 == 8)
							{
								if (iVar108 != 0 && iVar108 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar108, 8, 4);
								}
								else
								{
									iVar0 = iVar109;
									iVar107 = iVar106 + 1;
								}
							}
							iVar107++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar111 = -1;
				if (iParam3 >= 55)
				{
					iVar111 = func_87(iParam1, iParam3, 7, 4);
				}
				if ((iVar111 != -1 && unk_0xED5E7EEE0DB220EF(iVar111, joaat("TIE"), 0)) || (iVar111 != -1 && unk_0xED5E7EEE0DB220EF(iVar111, joaat("BOWTIE"), 0)))
				{
					iVar112 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
					bVar113 = false;
					if (unk_0xED5E7EEE0DB220EF(iVar111, joaat("LOOSE_TIE"), 0) || unk_0xED5E7EEE0DB220EF(iVar111, joaat("LOOSE_BOWTIE"), 0))
					{
						if (unk_0xED5E7EEE0DB220EF(iVar112, joaat("CLOSED_COLLAR"), 0))
						{
							bVar113 = true;
						}
					}
					else if (unk_0xED5E7EEE0DB220EF(iVar112, joaat("OPEN_COLLAR"), 0))
					{
						bVar113 = true;
					}
					if (bVar113)
					{
						iVar114 = unk_0x7D62D032481867D5(iVar112);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							unk_0xFBE76C9788411A2E(iVar112, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 8)
							{
								if (iVar116 != 0 && iVar116 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar116, 8, 4);
								}
								else
								{
									iVar0 = iVar117;
								}
								iVar115 = iVar114 + 1;
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar119 = func_87(iParam1, iParam3, 4, 4);
					if (iVar119 != -1)
					{
						iVar120 = unk_0x9CEB16FD2DD9853F(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							unk_0x2DFD0B33E5E67629(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 6)
							{
								if (iVar122 != 0 && iVar122 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar122, 6, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar125 = func_87(iParam1, iParam3, 11, 4);
					if (iVar125 != -1)
					{
						iVar126 = unk_0x9CEB16FD2DD9853F(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							unk_0x2DFD0B33E5E67629(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == 6)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar128, 6, 4);
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar131 = func_87(iParam1, iParam3, 11, 4);
					if (iVar131 != -1)
					{
						iVar132 = unk_0x9CEB16FD2DD9853F(iVar131);
						iVar133 = 0;
						while (iVar133 < iVar132)
						{
							unk_0x2DFD0B33E5E67629(iVar131, iVar133, &iVar134, &iVar135, &iVar136);
							if (iVar136 == 4)
							{
								if (iVar134 != 0 && iVar134 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar134, 4, 4);
								}
								else
								{
									iVar0 = iVar135;
									iVar133 = iVar132 + 1;
								}
							}
							iVar133++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar137 = func_87(iParam1, iParam3, 14, 4);
					if (iVar137 != -1)
					{
						iVar138 = unk_0x9CEB16FD2DD9853F(iVar137);
						iVar139 = 0;
						while (iVar139 < iVar138)
						{
							unk_0x2DFD0B33E5E67629(iVar137, iVar139, &iVar140, &iVar141, &iVar142);
							if (iVar142 == 7)
							{
								if (iVar140 != 0 && iVar140 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar140, 7, 4);
								}
								else
								{
									iVar0 = iVar141;
									iVar139 = iVar138 + 1;
								}
							}
							iVar139++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar143 = func_87(iParam1, iParam3, 1, 4);
					if (iVar143 != -1)
					{
						iVar144 = unk_0x0597D57AAD076680(iVar143);
						iVar145 = 0;
						while (iVar145 < iVar144)
						{
							unk_0x646AAD4ECFF58AE3(iVar143, iVar145, &iVar146, &iVar147, &iVar148);
							if (iVar148 == iParam5)
							{
								if (iVar146 != 0 && iVar146 != joaat("0"))
								{
									iVar0 = func_96(iParam1, iVar146, 14, 4);
									iVar145 = iVar144 + 1;
								}
								else
								{
									iVar0 = iVar147;
									iVar145 = iVar144 + 1;
								}
							}
							iVar145++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_88(iParam1, 1))
					{
						func_208(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_92(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_87(iParam1, iVar0, 1, 3);
						if (unk_0xED5E7EEE0DB220EF(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = func_87(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = unk_0x9CEB16FD2DD9853F(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									unk_0x2DFD0B33E5E67629(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = func_96(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_88(iParam1, 1))
					{
						func_208(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_92(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_87(iParam1, iVar7, 1, 4);
						if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = func_87(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = unk_0x9CEB16FD2DD9853F(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									unk_0x2DFD0B33E5E67629(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = func_96(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		func_16(743, iParam3, Global_69176, 1);
		func_16(744, iParam2, Global_69176, 1);
		return 1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = unk_0x6D5BB810CC209E15(iParam0);
			if (iParam1 == 11)
			{
				if (func_172(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = func_92(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_92(iParam0, 11);
				if (!func_172(iVar0, iVar1))
				{
					return;
				}
			}
			func_166(unk_0x7CBED6EFED40E7EB("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_168(iVar0, iParam2, 13) && !func_168(iVar0, iParam2, 14)) && !func_168(iVar0, iParam2, 15)) && !func_168(iVar0, iParam2, 16)) && !func_168(iVar0, iParam2, 71)) && !func_168(iVar0, iParam2, 72))
				{
					func_166(unk_0x7CBED6EFED40E7EB("crewLogo"), iParam0);
				}
			}
			iVar2 = func_117(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_181(iParam0, iVar2);
				}
				else
				{
					func_182(iVar2, 1, Global_69176);
				}
			}
		}
	}
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	struct<6> Var1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_124(iParam0);
			if (!func_79(iParam1, -1))
			{
				if (func_71(&Var1, iParam1, iVar0, iParam0, -1))
				{
					unk_0x427BAD5517247249(iParam0, Var1.f_4, Var1.f_5);
					func_67(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_182(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_79(iParam0, iParam2))
		{
			func_183(iParam0, 1, iParam2);
		}
	}
	else if (func_79(iParam0, iParam2))
	{
		func_183(iParam0, 0, iParam2);
	}
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_81(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0x59A0729D503ED758(&iVar0, func_80(iVar1));
		}
		else
		{
			unk_0x77621132305B133B(&iVar0, func_80(iVar1));
		}
		func_16(func_82(iParam0), iVar0, iParam2, 1);
	}
}

int func_184()
{
	int iVar0;
	
	iVar0 = Global_69176;
	if (func_79(13, iVar0))
	{
		return 13;
	}
	if (func_79(14, iVar0))
	{
		return 14;
	}
	if (func_79(15, iVar0))
	{
		return 15;
	}
	if (func_79(16, iVar0))
	{
		return 16;
	}
	if (func_79(71, iVar0))
	{
		return 71;
	}
	if (func_79(72, iVar0))
	{
		return 72;
	}
	return -1;
}

void func_185(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam2 == -1)
	{
		unk_0x37D5496B3B31995F(iParam0, iParam1);
	}
	else
	{
		unk_0x9982920999FF4733(iParam0, iParam1, iParam2, uParam3, unk_0xBBAE3E0C60A8AD4B());
	}
}

void func_186(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (Global_69176 != func_18() || iParam2 == -99)
		{
			return;
		}
		Global_69178[2 /*14*/] = { func_208(iParam0, iParam1, iParam2) };
		if (unk_0xDCC86F723E82125E(Global_69178[2 /*14*/].f_6, 1) && unk_0xDCC86F723E82125E(Global_69178[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_189(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_189(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				func_189(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = unk_0x7D62D032481867D5(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2556882)
					{
						Global_2556882[iVar1] = -1;
						Global_2556993[iVar1] = -1;
					}
					unk_0xFBE76C9788411A2E(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iParam1 == 4 && unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							func_189(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2556882)
							{
								Global_2556882[iVar1] = iVar2;
								Global_2556993[iVar1] = iVar4;
							}
						}
						else
						{
							func_186(iParam0, func_112(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2556881++;
				if (Global_2556881 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2556882)
						{
							if (Global_2556882[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_186(iParam0, func_112(Global_2556993[iVar1]), func_96(iParam0, Global_2556882[iVar1], func_112(Global_2556993[iVar1]), 3), 1);
								}
								else
								{
									func_186(iParam0, func_112(Global_2556993[iVar1]), func_96(iParam0, Global_2556882[iVar1], func_112(Global_2556993[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2556881 = (Global_2556881 - 1);
			}
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_69178[2 /*14*/].f_6, 1) && !unk_0xDCC86F723E82125E(Global_69178[2 /*14*/].f_6, 6))
		{
			if (func_188(iParam1, Global_69178[1 /*14*/].f_2, &iVar5))
			{
				iVar6 = func_54(iVar5, Global_69176, 0);
				unk_0x59A0729D503ED758(&iVar6, Global_69178[2 /*14*/].f_1);
				func_16(iVar5, iVar6, Global_69176, 1);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = (75 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							unk_0x9B9B863E6E606420(&Var12);
							iVar31 = unk_0xC9E3A692557F7FB1(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								unk_0x5D83343EA9D5A5C1(iVar29, &Var12);
								if (!unk_0x06C32703437E5BC3(Var12.f_0))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_186(iParam0, 8, (241 + iVar30), 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_69178[2 /*14*/].f_4)
							{
								case 0:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_69178[2 /*14*/].f_4)
							{
								case 0:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_186(iParam0, 7, func_96(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (16 + Global_69178[2 /*14*/].f_4);
							func_186(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_69178[2 /*14*/] = { func_208(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = func_187(iParam0, iParam2, Global_69178[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_186(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						unk_0x9B9B863E6E606420(&Var33);
						iVar52 = unk_0xC9E3A692557F7FB1(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							unk_0x5D83343EA9D5A5C1(iVar50, &Var33);
							if (!unk_0x06C32703437E5BC3(Var33.f_0))
							{
								if (Var33.f_1 == iVar32)
								{
									func_186(iParam0, 8, (136 + iVar51), 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = func_171(iParam0, iParam2, Global_69178[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_186(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_87(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = unk_0x7D62D032481867D5(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					unk_0xFBE76C9788411A2E(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = func_96(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_87(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = unk_0x7D62D032481867D5(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					unk_0xFBE76C9788411A2E(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = func_96(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

bool func_188(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 968;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 3:
					*uParam2 = 1419;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 9:
					*uParam2 = 1428;
					break;
				
				case 10:
					*uParam2 = 1430;
					break;
				
				case 1:
					*uParam2 = 1001;
					break;
				
				case 7:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
				
				case 12:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 970;
					break;
				
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 9:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 971;
					break;
				
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 7:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
	}
	return *uParam2 != 968;
}

void func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69176;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_190(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_54(iVar2, iVar0, 0);
		unk_0x59A0729D503ED758(&iVar3, iVar1);
		func_16(iVar2, iVar3, iVar0, 1);
	}
}

bool func_190(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3790;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2556851)
		{
			iVar0 = unk_0x0F46A7B60EEBCEDD(uParam0);
		}
		else
		{
			iVar0 = unk_0xA1A42B250F4B4827(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x0F46A7B60EEBCEDD(uParam0);
	}
	else
	{
		iVar0 = unk_0xA1A42B250F4B4827(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1748;
					break;
				
				case 1:
					*uParam2 = 1749;
					break;
				
				case 2:
					*uParam2 = 1750;
					break;
				
				case 3:
					*uParam2 = 1751;
					break;
				
				case 4:
					*uParam2 = 1752;
					break;
				
				case 5:
					*uParam2 = 1753;
					break;
				
				case 6:
					*uParam2 = 1760;
					break;
				
				case 7:
					*uParam2 = 1761;
					break;
				
				case 8:
					*uParam2 = 1762;
					break;
				
				case 9:
					*uParam2 = 1763;
					break;
				
				case 10:
					*uParam2 = 1764;
					break;
				
				case 11:
					*uParam2 = 1765;
					break;
				
				case 12:
					*uParam2 = 1766;
					break;
				
				case 13:
					*uParam2 = 1774;
					break;
				
				case 14:
					*uParam2 = 1775;
					break;
				
				case 15:
					*uParam2 = 1876;
					break;
				
				case 16:
					*uParam2 = 1877;
					break;
				
				case 17:
					*uParam2 = 1908;
					break;
				
				case 18:
					*uParam2 = 1922;
					break;
				
				case 19:
					*uParam2 = 1923;
					break;
				
				case 20:
					*uParam2 = 1924;
					break;
				
				case 21:
					*uParam2 = 1925;
					break;
				
				case 22:
					*uParam2 = 1926;
					break;
				
				case 23:
					*uParam2 = 2030;
					break;
				
				case 24:
					*uParam2 = 2031;
					break;
				
				case 25:
					*uParam2 = 2057;
					break;
				
				case 26:
					*uParam2 = 2058;
					break;
				
				case 27:
					*uParam2 = 2059;
					break;
				
				case 28:
					*uParam2 = 2060;
					break;
				
				case 29:
					*uParam2 = 2061;
					break;
				
				case 30:
					*uParam2 = 2062;
					break;
				
				case 31:
					*uParam2 = 2063;
					break;
				
				case 32:
					*uParam2 = 2064;
					break;
				
				case 33:
					*uParam2 = 2065;
					break;
				
				case 34:
					*uParam2 = 2066;
					break;
				
				case 35:
					*uParam2 = 2313;
					break;
				
				case 36:
					*uParam2 = 2314;
					break;
				
				case 37:
					*uParam2 = 2362;
					break;
				
				case 38:
					*uParam2 = 2363;
					break;
				
				case 39:
					*uParam2 = 2364;
					break;
				
				case 40:
					*uParam2 = 2365;
					break;
				
				case 41:
					*uParam2 = 2424;
					break;
				
				case 42:
					*uParam2 = 2425;
					break;
				
				case 43:
					*uParam2 = 2426;
					break;
				
				case 44:
					*uParam2 = 2427;
					break;
				
				case 45:
					*uParam2 = 2428;
					break;
				
				case 46:
					*uParam2 = 2429;
					break;
				
				case 47:
					*uParam2 = 2430;
					break;
				
				case 48:
					*uParam2 = 2431;
					break;
				
				case 49:
					*uParam2 = 2432;
					break;
				
				case 50:
					*uParam2 = 2433;
					break;
				
				case 51:
					*uParam2 = 2562;
					break;
				
				case 52:
					*uParam2 = 2563;
					break;
				
				case 53:
					*uParam2 = 2564;
					break;
				
				case 54:
					*uParam2 = 2565;
					break;
				
				case 55:
					*uParam2 = 2566;
					break;
				
				case 56:
					*uParam2 = 2567;
					break;
				
				case 57:
					*uParam2 = 2568;
					break;
				
				case 58:
					*uParam2 = 2569;
					break;
				
				case 59:
					*uParam2 = 2570;
					break;
				
				case 60:
					*uParam2 = 2571;
					break;
				
				case 61:
					*uParam2 = 2572;
					break;
				
				case 62:
					*uParam2 = 3168;
					break;
				
				case 63:
					*uParam2 = 3169;
					break;
				
				case 64:
					*uParam2 = 3170;
					break;
				
				case 65:
					*uParam2 = 3171;
					break;
				
				case 66:
					*uParam2 = 3172;
					break;
				
				case 67:
					*uParam2 = 3173;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1754;
					break;
				
				case 1:
					*uParam2 = 1755;
					break;
				
				case 2:
					*uParam2 = 1756;
					break;
				
				case 3:
					*uParam2 = 1757;
					break;
				
				case 4:
					*uParam2 = 1758;
					break;
				
				case 5:
					*uParam2 = 1759;
					break;
				
				case 6:
					*uParam2 = 1767;
					break;
				
				case 7:
					*uParam2 = 1768;
					break;
				
				case 8:
					*uParam2 = 1769;
					break;
				
				case 9:
					*uParam2 = 1770;
					break;
				
				case 10:
					*uParam2 = 1771;
					break;
				
				case 11:
					*uParam2 = 1772;
					break;
				
				case 12:
					*uParam2 = 1773;
					break;
				
				case 13:
					*uParam2 = 1776;
					break;
				
				case 14:
					*uParam2 = 1777;
					break;
				
				case 15:
					*uParam2 = 1878;
					break;
				
				case 16:
					*uParam2 = 1879;
					break;
				
				case 17:
					*uParam2 = 1909;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2032;
					break;
				
				case 24:
					*uParam2 = 2033;
					break;
				
				case 25:
					*uParam2 = 2067;
					break;
				
				case 26:
					*uParam2 = 2068;
					break;
				
				case 27:
					*uParam2 = 2069;
					break;
				
				case 28:
					*uParam2 = 2070;
					break;
				
				case 29:
					*uParam2 = 2071;
					break;
				
				case 30:
					*uParam2 = 2072;
					break;
				
				case 31:
					*uParam2 = 2073;
					break;
				
				case 32:
					*uParam2 = 2074;
					break;
				
				case 33:
					*uParam2 = 2075;
					break;
				
				case 34:
					*uParam2 = 2076;
					break;
				
				case 35:
					*uParam2 = 2315;
					break;
				
				case 36:
					*uParam2 = 2316;
					break;
				
				case 37:
					*uParam2 = 2366;
					break;
				
				case 38:
					*uParam2 = 2367;
					break;
				
				case 39:
					*uParam2 = 2368;
					break;
				
				case 40:
					*uParam2 = 2369;
					break;
				
				case 41:
					*uParam2 = 2434;
					break;
				
				case 42:
					*uParam2 = 2435;
					break;
				
				case 43:
					*uParam2 = 2436;
					break;
				
				case 44:
					*uParam2 = 2437;
					break;
				
				case 45:
					*uParam2 = 2438;
					break;
				
				case 46:
					*uParam2 = 2439;
					break;
				
				case 47:
					*uParam2 = 2440;
					break;
				
				case 48:
					*uParam2 = 2441;
					break;
				
				case 49:
					*uParam2 = 2442;
					break;
				
				case 50:
					*uParam2 = 2443;
					break;
				
				case 51:
					*uParam2 = 2573;
					break;
				
				case 52:
					*uParam2 = 2574;
					break;
				
				case 53:
					*uParam2 = 2575;
					break;
				
				case 54:
					*uParam2 = 2576;
					break;
				
				case 55:
					*uParam2 = 2577;
					break;
				
				case 56:
					*uParam2 = 2578;
					break;
				
				case 57:
					*uParam2 = 2579;
					break;
				
				case 58:
					*uParam2 = 2580;
					break;
				
				case 59:
					*uParam2 = 2581;
					break;
				
				case 60:
					*uParam2 = 2582;
					break;
				
				case 61:
					*uParam2 = 2583;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3790;
}

int func_191(int iParam0)
{
	if (!unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xDCC86F723E82125E(Global_69178[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	iVar1 = unk_0x3A59BCC40A12FD28(iParam0, 11);
	iVar2 = unk_0x268F3DC177BF5D38(iParam0, 11);
	iVar3 = unk_0x3A59BCC40A12FD28(iParam0, 1);
	iVar4 = unk_0x268F3DC177BF5D38(iParam0, 1);
	iVar5 = unk_0x3A59BCC40A12FD28(iParam0, 8);
	iVar6 = unk_0x268F3DC177BF5D38(iParam0, 8);
	iVar7 = unk_0x4D4C7C54C2E89DDF(iParam0, 11, iVar1, iVar2);
	iVar8 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, iVar3, iVar4);
	iVar9 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, iVar5, iVar6);
	if (unk_0xED5E7EEE0DB220EF(iVar7, joaat("HOODED_JACKET"), 0))
	{
		if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("HOOD_COMPAT"), 0))
		{
			if (!unk_0xED5E7EEE0DB220EF(iVar7, joaat("HOOD_UP"), 0))
			{
				iVar1 = (iVar1 - 1);
			}
		}
		else if (unk_0xED5E7EEE0DB220EF(iVar7, joaat("HOOD_UP"), 0))
		{
			iVar1++;
		}
		unk_0x8C245572EDB27776(iParam0, 11, iVar1, iVar2, unk_0x8005AF704B3AAC41(iParam0, 11));
	}
	bVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!unk_0xED5E7EEE0DB220EF(iVar7, joaat("HEIST_DRAW_14"), 0))
		{
			bVar10 = true;
		}
		switch (iVar8)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				bVar10 = true;
				break;
		}
	}
	else
	{
		if (!unk_0xED5E7EEE0DB220EF(iVar7, joaat("HEIST_DRAW_15"), 0))
		{
			bVar10 = true;
		}
		switch (iVar8)
		{
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_2_0"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case -840010097:
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				bVar10 = true;
				break;
			}
	}
	if (bVar10)
	{
		if (unk_0xED5E7EEE0DB220EF(iVar9, joaat("HOOD_UP"), 0) || unk_0xED5E7EEE0DB220EF(iVar9, joaat("HOOD_DOWN"), 0))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = 0;
			}
			else
			{
				iVar5 = 14;
				iVar6 = 0;
			}
		}
	}
	else if (unk_0xED5E7EEE0DB220EF(iVar8, joaat("HAZ_MASK"), 0))
	{
		if (unk_0xED5E7EEE0DB220EF(iVar9, joaat("HOOD_DOWN"), 0))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_194(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (unk_0xED5E7EEE0DB220EF(iVar9, joaat("HOOD_UP"), 0))
	{
		iVar5 = (iVar5 - 1);
	}
	else
	{
		iVar5 = func_194(iParam0, 0);
		iVar6 = iVar2;
	}
	unk_0x8C245572EDB27776(iParam0, 8, iVar5, iVar6, unk_0x8005AF704B3AAC41(iParam0, 8));
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4D4C7C54C2E89DDF(iParam0, 8, unk_0x3A59BCC40A12FD28(iParam0, 8), unk_0x268F3DC177BF5D38(iParam0, 8));
	if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("HAZ_HOOD"), 0) && unk_0xED5E7EEE0DB220EF(iVar0, joaat("HOOD_UP"), 0))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar17;
	
	bVar17 = unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar17)
	{
		if (bParam1)
		{
			unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var0);
		}
		else
		{
			unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var0);
		}
	}
	else if (bParam1)
	{
		unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var0);
	}
	else
	{
		unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var0);
	}
	return Var0.f_3;
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4D4C7C54C2E89DDF(iParam0, 1, unk_0x3A59BCC40A12FD28(iParam0, 1), unk_0x268F3DC177BF5D38(iParam0, 1));
	if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("HAZ_MASK"), 0))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4D4C7C54C2E89DDF(iParam0, iParam1, unk_0x3A59BCC40A12FD28(iParam0, iParam1), unk_0x268F3DC177BF5D38(iParam0, iParam1));
	if (unk_0xED5E7EEE0DB220EF(iVar0, joaat("PILOT_SUIT"), 0))
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	struct<37> Var0;
	int iVar50;
	int iVar51;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar50 = -1;
	if (iParam2 == -1)
	{
		iParam2 = unk_0x8ACC9D9AC6076DCB(iParam0);
	}
	iVar51 = 0;
	while (iVar51 < 12)
	{
		Var0[iVar51] = -1;
		Var0.f_13[iVar51] = -1;
		iVar51++;
	}
	iVar51 = 0;
	while (iVar51 < Var0.f_26)
	{
		Var0.f_26[iVar51] = -1;
		Var0.f_36[iVar51] = -1;
		iVar51++;
	}
	iVar51 = 0;
	while (iVar51 < Var0.f_46)
	{
		Var0.f_46[iVar51] = -1;
		iVar51++;
	}
	if (func_256(iParam0, &Var0, iParam1, &iVar50))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_198(iParam0);
			func_250(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar50 != -1)
			{
				if (func_253(iVar50) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (func_253(iVar50) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_f_freemode_01"))
				{
					if (func_251(unk_0x6D5BB810CC209E15(iParam0), 7, func_91(iParam0, 7, -1)))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			func_250(iParam0, &Var0, iParam2);
		}
		iVar51 = 0;
		while (iVar51 < 12)
		{
			if (Var0[iVar51] != -1)
			{
				unk_0x8C245572EDB27776(iParam0, iVar51, Var0[iVar51], Var0.f_13[iVar51], 0);
			}
			iVar51++;
		}
		iVar51 = 0;
		while (iVar51 < Var0.f_26)
		{
			if (Var0.f_26[iVar51] != -1 && Var0.f_26[iVar51] != 255)
			{
				unk_0x9982920999FF4733(iParam0, iVar51, Var0.f_26[iVar51], Var0.f_36[iVar51], true);
			}
			iVar51++;
		}
	}
}

void func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_205(iParam0, iVar0, -1))
		{
			if (iVar0 != 2 && iVar0 != 9)
			{
				func_199(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0x8ACC9D9AC6076DCB(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_69247[iVar1] = -1;
		Global_69247.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_69247.f_26)
	{
		Global_69247.f_26[iVar1] = -1;
		Global_69247.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_69247.f_46)
	{
		Global_69247.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_256(iParam0, &Global_69247, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_69247[iVar1] != -1)
			{
				if (unk_0x3A59BCC40A12FD28(iParam0, iVar1) == Global_69247[iVar1] && unk_0x268F3DC177BF5D38(iParam0, iVar1) == Global_69247.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					unk_0x8C245572EDB27776(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_69247.f_26)
		{
			if (Global_69247.f_26[iVar1] != -1 && Global_69247.f_26[iVar1] != 255)
			{
				if (unk_0xFEBA5661B4F1602A(iParam0, iVar1) == Global_69247.f_26[iVar1] && unk_0x92A7B7367F7CD521(iParam0, iVar1) == Global_69247.f_36[iVar1])
				{
					unk_0x37D5496B3B31995F(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_207())
			{
				if (func_126(161, -1))
				{
					func_127(iParam0, 2, func_54(2040, Global_69176, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					func_127(iParam0, 2, func_54(742, Global_69176, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != unk_0xA34E7C2A5118D638())
				{
					if (unk_0x60EDB526FD7C94F1(unk_0x20A20BF765914E37(iParam2)))
					{
						unk_0x4DD5BC22EEA7C0AC(iParam0, unk_0x20A20BF765914E37(iParam2));
					}
				}
				else
				{
					func_144(iParam0, -1);
				}
			}
			func_204(0);
			func_200(0, 0);
		}
	}
}

void func_200(bool bParam0, bool bParam1)
{
	unk_0xBBC316D940725F98(bParam0);
	if (bParam0 == 1)
	{
		if (bParam1)
		{
			unk_0xC4EE38A4CFF7544C(-1, "THERMAL_VISION_GOGGLES_ON_MASTER", 0, 1);
		}
		unk_0x59A0729D503ED758(&(Global_1702982[unk_0xA34E7C2A5118D638() /*199*/].f_198), 0);
	}
	else
	{
		if (bParam1)
		{
			unk_0xC4EE38A4CFF7544C(-1, "THERMAL_VISION_GOGGLES_OFF_MASTER", 0, 1);
		}
		unk_0x77621132305B133B(&(Global_1702982[unk_0xA34E7C2A5118D638() /*199*/].f_198), 0);
	}
	func_201(!bParam0);
}

void func_201(bool bParam0)
{
	func_202(213, bParam0, -1, 1);
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_203())
	{
		iVar0 = Global_2486871[iParam0 /*5*/][func_17(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x11C18C0E7876C1D0(iVar0, iParam1, iParam3);
		}
	}
}

int func_203()
{
	return 1;
	return 0;
}

void func_204(int iParam0)
{
	if (Global_2557425 != iParam0)
	{
		Global_2557425 = iParam0;
	}
}

int func_205(int iParam0, int iParam1, int iParam2)
{
	struct<37> Var0;
	int iVar50;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar50 = 0;
	while (iVar50 < 12)
	{
		Var0[iVar50] = -1;
		Var0.f_13[iVar50] = -1;
		iVar50++;
	}
	iVar50 = 0;
	while (iVar50 < Var0.f_26)
	{
		Var0.f_26[iVar50] = -1;
		Var0.f_36[iVar50] = -1;
		iVar50++;
	}
	if (iParam1 == 11 && iParam2 != -1)
	{
		if (func_206(uParam0, iParam2))
		{
			return 1;
		}
	}
	else if (func_256(uParam0, &Var0, iParam1, &iParam2))
	{
		iVar50 = 0;
		while (iVar50 < 12)
		{
			if (Var0[iVar50] != -1)
			{
				if (unk_0x3A59BCC40A12FD28(uParam0, iVar50) == Var0[iVar50] && unk_0x268F3DC177BF5D38(iParam0, iVar50) == Var0.f_13[iVar50])
				{
					return 1;
				}
			}
			iVar50++;
		}
		iVar50 = 0;
		while (iVar50 < Var0.f_26)
		{
			if (Var0.f_26[iVar50] != -1 && Var0.f_26[iVar50] != 255)
			{
				if (unk_0xFEBA5661B4F1602A(iParam0, iVar50) == Var0.f_26[iVar50] && unk_0x92A7B7367F7CD521(iParam0, iVar50) == Var0.f_36[iVar50])
				{
					return 1;
				}
			}
			iVar50++;
		}
	}
	return 0;
}

int func_206(int iParam0, int iParam1)
{
	struct<37> Var0;
	struct<30> Var50;
	int iVar80;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	Var50.f_1 = -1;
	Var50.f_2 = -1;
	Var50.f_3 = -1;
	Var50.f_4 = -1;
	Var50.f_8 = -1;
	Var50.f_9 = 20;
	Var50.f_0 = uParam0;
	Var50.f_2 = iParam1;
	if (func_258(&Var0, Var50, 1, 1))
	{
		iVar80 = 0;
		while (iVar80 < 12)
		{
			if (Var0[iVar80] == unk_0x3A59BCC40A12FD28(uParam0, iVar80) && Var0.f_13[iVar80] == unk_0x268F3DC177BF5D38(iParam0, iVar80))
			{
				return 1;
			}
			iVar80++;
		}
		iVar80 = 0;
		while (iVar80 < Var0.f_26)
		{
			if (Var0.f_26[iVar80] == unk_0xFEBA5661B4F1602A(iParam0, iVar80) && Var0.f_36[iVar80] == unk_0x92A7B7367F7CD521(iParam0, iVar80))
			{
				return 1;
			}
			iVar80++;
		}
	}
	return 0;
}

bool func_207()
{
	return Global_1315886;
}

struct<14> func_208(int iParam0, int iParam1, int iParam2)
{
	func_249();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_233(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_209(iParam1, iParam2);
	}
	return Global_69178[0 /*14*/];
}

void func_209(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_232(iParam1);
			break;
		
		case 11:
			func_231(iParam1);
			break;
		
		case 8:
			func_230(iParam1);
			break;
		
		case 9:
			func_229(iParam1);
			break;
		
		case 3:
			func_228(iParam1);
			break;
		
		case 4:
			func_227(iParam1);
			break;
		
		case 6:
			func_226(iParam1);
			break;
		
		case 1:
			func_225(iParam1);
			break;
		
		case 7:
			func_224(iParam1);
			break;
		
		case 10:
			func_223(iParam1);
			break;
		
		case 14:
			func_222(iParam1);
			break;
		
		case 12:
			func_221(iParam1);
			break;
		
		case 5:
			func_220(iParam1);
			break;
		
		case 0:
			func_218(iParam1);
			break;
		
		case 13:
			func_210(iParam1);
			break;
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_211(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_217(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x7CBED6EFED40E7EB(sParam3) != unk_0x7CBED6EFED40E7EB("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x59A0729D503ED758(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x59A0729D503ED758(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 5);
		}
		unk_0x59A0729D503ED758(&(uParam0->f_6), 1);
		unk_0x59A0729D503ED758(&(uParam0->f_6), 2);
		unk_0x59A0729D503ED758(&(uParam0->f_6), 6);
		if (func_216(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_215(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x77621132305B133B(&(uParam0->f_6), 2);
			}
			if (!func_215(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_215(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x77621132305B133B(&(uParam0->f_6), 2);
			}
			if (!func_215(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_215(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x77621132305B133B(&(uParam0->f_6), 2);
			}
			if (!func_215(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x59A0729D503ED758(&(uParam0->f_6), 0);
		unk_0x59A0729D503ED758(&(uParam0->f_6), 5);
		if (func_214(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 1);
		}
		if (func_214(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 2);
		}
		if (!func_214(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x59A0729D503ED758(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_216(14))
			{
				return;
			}
			uVar0 = func_54(func_213(iParam1, uParam0->f_2), Global_69176, 0);
			if (unk_0xDCC86F723E82125E(uVar0, uParam0->f_1))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 1);
			}
			iVar0 = func_54(func_212(iParam1, uParam0->f_2), Global_69176, 0);
			if (unk_0xDCC86F723E82125E(iVar0, uParam0->f_1))
			{
				unk_0x59A0729D503ED758(&(uParam0->f_6), 2);
			}
			if (func_188(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_54(iVar1, Global_69176, 0);
				if (!unk_0xDCC86F723E82125E(iVar0, uParam0->f_1))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x59A0729D503ED758(&(uParam0->f_6), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_6), 2);
		}
	}
}

int func_212(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 3:
					return 1404;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 9:
					return 1413;
					break;
				
				case 10:
					return 1415;
					break;
				
				case 1:
					return 949;
					break;
				
				case 7:
					return 1416;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
				
				case 12:
					return 968;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 918;
					break;
				
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 9:
					return 1414;
					break;
				
				case 7:
					return 1417;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 919;
					break;
				
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 7:
					return 1418;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 966;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 967;
					break;
			}
			break;
	}
	return 925;
}

int func_213(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 3:
					return 1389;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 9:
					return 1398;
					break;
				
				case 10:
					return 1400;
					break;
				
				case 1:
					return 897;
					break;
				
				case 7:
					return 1401;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
				
				case 12:
					return 916;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 866;
					break;
				
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 9:
					return 1399;
					break;
				
				case 7:
					return 1402;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 867;
					break;
				
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 7:
					return 1403;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 914;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 915;
					break;
			}
			break;
	}
	return 873;
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_100976.f_1770[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x77621132305B133B(&(Global_100976.f_1770[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xDCC86F723E82125E(Global_100976.f_1770[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_215(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69176;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_190(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_54(iVar2, iVar0, 0);
		return unk_0xDCC86F723E82125E(uVar3, iVar1);
	}
	return 0;
}

bool func_216(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69178[0 /*14*/].f_5 = 4;
	func_219(iVar0, iParam0, 0);
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_69178[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x58563FCB7515F022(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x72C6687B4C81285A(iVar17, &Var2);
			if (!unk_0x06C32703437E5BC3(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_211(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_211(&(Global_69178[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xEB1D5FC55488385F(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xC9E3A692557F7FB1(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x3157A53507A41BEF(iVar38, &Var20);
			if (!unk_0x06C32703437E5BC3(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_211(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0xED5E7EEE0DB220EF(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x9B9B863E6E606420(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xC9E3A692557F7FB1(iVar1, 6, -1, 0, -1, func_89(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x5D83343EA9D5A5C1(iVar58, &Var41);
			if (!unk_0x06C32703437E5BC3(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_211(&(Global_69178[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0xED5E7EEE0DB220EF(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 28);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMF_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMF_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMF_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMF_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMF_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMF_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMF_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMF_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMF_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMF_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMF_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMF_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMF_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMF_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMF_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMF_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMF_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMF_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMF_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMF_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMF_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMF_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMF_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMF_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMF_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMF_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMF_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2039[iVar12]) * Global_273875.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2160[iVar13]) * Global_273875.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2185[iVar14]) * Global_273875.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2314[iVar15]) * Global_273875.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 327);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("HAT"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_26));
			}
			else if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_56));
			}
			else if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("WATCH"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_28));
			}
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 6);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4132 != -1)
			{
				iVar1 = Global_262145.f_4132;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4133 != -1)
			{
				iVar1 = Global_262145.f_4133;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4134 != -1)
			{
				iVar1 = Global_262145.f_4134;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4135 != -1)
			{
				iVar1 = Global_262145.f_4135;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4136 != -1)
			{
				iVar1 = Global_262145.f_4136;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4137 != -1)
			{
				iVar1 = Global_262145.f_4137;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4138 != -1)
			{
				iVar1 = Global_262145.f_4138;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4139 != -1)
			{
				iVar1 = Global_262145.f_4139;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 55);
			if (Global_69178[0 /*14*/].f_7 > 0)
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_58));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_273875.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 26);
			if (Global_69178[0 /*14*/].f_7 > 0)
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2012[iVar11]) * Global_273875.f_29));
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1755[iVar11]) * Global_273875.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 256);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_25));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_227(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1241[iVar11]) * Global_273875.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 256);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_23));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_228(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 16);
		return;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 36);
		return;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 136);
			if (Global_69178[0 /*14*/].f_7 > 0)
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_121(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2973));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1498[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_121(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2972));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1498[7]));
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_121(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2971));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1498[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[iVar12]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_273875.f_24));
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_121(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2973) * Global_273875.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1498[4]) * Global_273875.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		if (func_121(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2972) * Global_273875.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1498[7]) * Global_273875.f_24));
		}
	}
	else if (iParam0 == 9)
	{
		if (func_121(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2971) * Global_273875.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1498[9]) * Global_273875.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1498[iVar11]) * Global_273875.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_69178[0 /*14*/].f_5 = 4;
		func_219(iVar10, iParam0, 256);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_24));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_232(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2449[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 4;
			func_219(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_248(iParam1);
			break;
		
		case 11:
			func_247(iParam1);
			break;
		
		case 8:
			func_246(iParam1);
			break;
		
		case 9:
			func_245(iParam1);
			break;
		
		case 3:
			func_244(iParam1);
			break;
		
		case 4:
			func_243(iParam1);
			break;
		
		case 6:
			func_242(iParam1);
			break;
		
		case 1:
			func_241(iParam1);
			break;
		
		case 7:
			func_240(iParam1);
			break;
		
		case 10:
			func_239(iParam1);
			break;
		
		case 14:
			func_238(iParam1);
			break;
		
		case 12:
			func_237(iParam1);
			break;
		
		case 5:
			func_236(iParam1);
			break;
		
		case 0:
			func_235(iParam1);
			break;
		
		case 13:
			func_234(iParam1);
			break;
	}
}

void func_234(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69178[0 /*14*/].f_5 = 3;
	func_219(iVar0, iParam0, 0);
}

void func_236(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_237(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 26);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMM_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMM_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMM_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMM_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMM_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMM_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMM_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMM_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMM_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMM_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMM_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMM_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_950[iVar12]) * Global_273875.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1071[iVar13]) * Global_273875.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1096[iVar14]) * Global_273875.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1225[iVar15]) * Global_273875.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_69178[0 /*14*/].f_5 = 3;
		func_219(iVar10, iParam0, 327);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("HAT"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_18));
			}
			else if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_20));
			}
			else if (unk_0xED5E7EEE0DB220EF(Global_2621444, joaat("WATCH"), 1))
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_21));
			}
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_239(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 7);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_240(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 92);
			if (Global_69178[0 /*14*/].f_7 > 0)
			{
				Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_57));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_273875.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_241(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 26);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_923[iVar11]) * Global_273875.f_22));
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_242(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_666[iVar11]) * Global_273875.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_69178[0 /*14*/].f_5 = 3;
		func_219(iVar10, iParam0, 256);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_17));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_243(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_171[iVar11]) * Global_273875.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_69178[0 /*14*/].f_5 = 3;
		func_219(iVar10, iParam0, 256);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_15));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_244(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 16);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_245(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 46);
			return;
			break;
	}
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_246(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_121(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2973));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_428[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_121(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2972));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(60) * Global_262145.f_428[17]));
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_121(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2971));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(55) * Global_262145.f_428[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[iVar14]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_273875.f_16));
	if (iParam0 >= 241)
	{
		Global_69178[0 /*14*/].f_5 = 3;
		func_219(iVar10, iParam0, 241);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_16));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_247(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_121(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2973) * Global_273875.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_428[23]) * Global_273875.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		if (func_121(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2972) * Global_273875.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(60) * Global_262145.f_428[17]) * Global_273875.f_16));
		}
	}
	else if (iParam0 == 28)
	{
		if (func_121(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2971) * Global_273875.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(55) * Global_262145.f_428[28]) * Global_273875.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_428[iVar11]) * Global_273875.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_69178[0 /*14*/].f_5 = 3;
		func_219(iVar10, iParam0, 237);
		if (Global_69178[0 /*14*/].f_7 > 0)
		{
			Global_69178[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_69178[0 /*14*/].f_7) * Global_273875.f_16));
		}
	}
	else
	{
		func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_248(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[65]));
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2526[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_69178[0 /*14*/].f_5 = 3;
			func_219(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_211(&(Global_69178[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_249()
{
	Global_69178[0 /*14*/].f_1 = -1;
	Global_69178[0 /*14*/].f_2 = -1;
	Global_69178[0 /*14*/].f_5 = -1;
	Global_69178[0 /*14*/].f_3 = -1;
	Global_69178[0 /*14*/].f_4 = -1;
	Global_69178[0 /*14*/].f_7 = 0;
	Global_69178[0 /*14*/].f_6 = 0;
	Global_69178[0 /*14*/].f_13 = -1;
	Global_69178[0 /*14*/].f_12 = 0;
	Global_69178[0 /*14*/] = 0;
	StringCopy(&(Global_69178[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_250(int iParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	int iVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0x8ACC9D9AC6076DCB(iParam0);
		if (iParam2 != -1)
		{
		}
	}
	if ((*uParam1)[1] > 0 && unk_0xED5E7EEE0DB220EF(unk_0x4D4C7C54C2E89DDF(iParam0, 1, (*uParam1)[1], uParam1->f_13[1]), joaat("SHRINK_HEAD"), 0))
	{
		unk_0x2467B476C8DE6631(iParam0, &Var0);
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_m_freemode_01"))
		{
			unk_0x6B585FC99F218EC3(iParam0, 0, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		else if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_f_freemode_01"))
		{
			unk_0x6B585FC99F218EC3(iParam0, 21, 0, 0, Var0.f_3, Var0.f_4, Var0.f_5, 0f, Var0.f_7, 0f, false);
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			unk_0xC7D2581625C50E99(iParam0, iVar10, 0f);
			iVar10++;
		}
	}
	else if (iParam2 != -1 && unk_0x20A20BF765914E37(iParam2) != unk_0xA34E7C2A5118D638())
	{
		if (unk_0x60EDB526FD7C94F1(unk_0x20A20BF765914E37(iParam2)) && unk_0xFE7BCFB02217DCDF(iParam0))
		{
			unk_0x4DD5BC22EEA7C0AC(iParam0, unk_0x20A20BF765914E37(iParam2));
		}
	}
	else
	{
		func_144(iParam0, -1);
	}
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 327)
					{
						if (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 3), joaat("EAR_PIECE"), 1) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 3), joaat("EARRING"), 1))
						{
							return 1;
						}
					}
					break;
				
				case 7:
					if (iParam2 >= 92)
					{
						if (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 7, 3), joaat("EARRING"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 7:
					if (iParam2 >= 1 && iParam2 <= 12)
					{
						return 1;
					}
					if (iParam2 >= 55 && unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 7, 4), joaat("EARRING"), 0))
					{
						return 1;
					}
					break;
				
				case 14:
					if (iParam2 >= 327)
					{
						if (unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 4), joaat("EAR_PIECE"), 1) || unk_0xED5E7EEE0DB220EF(func_87(iParam0, iParam2, 14, 4), joaat("EARRING"), 1))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_252(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = func_89(iParam3);
	iVar1 = unk_0xD3AD121874E29F9C(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xD4E105CA151D4481(uParam0, uVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			return 2;
		
		case 34:
		case 35:
		case 36:
		case 37:
			return 3;
		
		case 38:
		case 39:
		case 40:
		case 41:
			return 4;
		
		case 42:
		case 43:
		case 44:
		case 45:
			return 5;
		
		case 46:
		case 47:
		case 48:
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 8;
		
		case 60:
		case 61:
		case 62:
		case 63:
			return 9;
		
		case 64:
		case 65:
		case 66:
		case 67:
			return 10;
		
		case 68:
		case 69:
		case 70:
		case 71:
			return 11;
		
		case 72:
		case 73:
		case 74:
		case 75:
			return 12;
		
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
			return 13;
		
		case 80:
		case 81:
		case 82:
		case 83:
			return 14;
		
		case 84:
		case 85:
		case 86:
		case 87:
			return 15;
		
		case 88:
		case 89:
		case 90:
		case 91:
			return 16;
		
		case 92:
		case 93:
		case 94:
		case 95:
			return 17;
		
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 18;
		
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
			return 19;
		
		case 114:
		case 115:
		case 116:
		case 117:
			return 20;
		
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
			return 21;
		
		case 124:
		case 125:
		case 126:
		case 127:
			return 22;
		
		case 128:
		case 129:
		case 130:
		case 131:
			return 23;
		
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
			return 24;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 25;
		
		case 144:
		case 145:
		case 146:
		case 147:
			return 26;
		
		case 148:
		case 149:
		case 150:
		case 151:
			return 27;
		
		case 152:
		case 153:
		case 154:
		case 155:
			return 28;
		
		case 156:
		case 157:
		case 158:
		case 159:
			return 29;
		
		case 160:
		case 161:
		case 162:
		case 163:
			return 30;
		
		default:
	}
	return -1;
}

int func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3A59BCC40A12FD28(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x6D5BB810CC209E15(iParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x4D4C7C54C2E89DDF(iParam0, 5, iVar0, unk_0x268F3DC177BF5D38(iParam0, 5));
			if (unk_0xED5E7EEE0DB220EF(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x4D4C7C54C2E89DDF(iParam0, 5, iVar0, unk_0x268F3DC177BF5D38(iParam0, 5));
			if (unk_0xED5E7EEE0DB220EF(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_255(var uParam0, var uParam1)
{
	int iVar0;
	
	switch (uParam0->f_5)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if ((*uParam1)[iVar0] != -1)
				{
					unk_0x4C2450CA78C7FD06(*uParam0, iVar0, (*uParam1)[iVar0], uParam1->f_13[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam1->f_26)
			{
				if (uParam1->f_26[iVar0] != -1 && uParam1->f_26[iVar0] != 255)
				{
					unk_0x48991F86611D6500(*uParam0, iVar0, uParam1->f_26[iVar0], uParam1->f_36[iVar0]);
				}
				iVar0++;
			}
			uParam0->f_5 = 1;
			return 0;
			break;
		
		case 1:
			if (!unk_0x03CC3AECEDEF5EC4(*uParam0))
			{
				return 0;
			}
			if (!unk_0xB70D38929B7F86EF(*uParam0))
			{
				return 0;
			}
			uParam0->f_5 = 2;
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_256(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<5> Var17;
	bool bVar34;
	int iVar35;
	struct<30> Var36;
	
	bVar34 = false;
	if (unk_0x6D5BB810CC209E15(uParam0) == joaat("mp_m_freemode_01"))
	{
		bVar34 = true;
	}
	switch (iParam2)
	{
		case 0:
			(*uParam1)[1] = 4;
			uParam1->f_13[1] = 0;
			return 1;
			break;
		
		case 1:
			if (bVar34)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_2_0"), &Var0);
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_2_0"), &Var0);
			}
			(*uParam1)[1] = Var0.f_3;
			uParam1->f_13[1] = Var0.f_4;
			return 1;
			break;
		
		case 2:
			if (bVar34)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_HAND_5_0"), &Var0);
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_HAND_5_0"), &Var0);
			}
			(*uParam1)[5] = Var0.f_3;
			uParam1->f_13[5] = Var0.f_4;
			return 1;
			break;
		
		case 3:
			if (bVar34)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_1_0"), &Var0);
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_1_0"), &Var0);
			}
			(*uParam1)[1] = Var0.f_3;
			uParam1->f_13[1] = Var0.f_4;
			return 1;
			break;
		
		case 4:
			if (bVar34)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_0_0"), &Var0);
				(*uParam1)[1] = Var0.f_3;
				uParam1->f_13[1] = Var0.f_4;
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var0);
				(*uParam1)[2] = Var0.f_3;
				uParam1->f_13[2] = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_0_0"), &Var0);
				(*uParam1)[1] = Var0.f_3;
				uParam1->f_13[1] = Var0.f_4;
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var0);
				(*uParam1)[2] = Var0.f_3;
				uParam1->f_13[2] = Var0.f_4;
			}
			return 1;
			break;
		
		case 5:
			if (bVar34)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_EAR0_0"), &Var17);
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EAR0_0"), &Var17);
			}
			uParam1->f_26[2] = Var17.f_3;
			uParam1->f_36[2] = Var17.f_4;
			return 1;
			break;
		
		case 6:
			if (bVar34)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_EAR1_0"), &Var17);
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EAR1_0"), &Var17);
			}
			uParam1->f_26[2] = Var17.f_3;
			uParam1->f_36[2] = Var17.f_4;
			return 1;
			break;
		
		case 7:
			if (bVar34)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_EAR2_0"), &Var17);
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EAR2_0"), &Var17);
			}
			uParam1->f_26[2] = Var17.f_3;
			uParam1->f_36[2] = Var17.f_4;
			return 1;
			break;
		
		case 8:
			uParam1->f_26[0] = 19;
			uParam1->f_36[0] = 0;
			return 1;
			break;
		
		case 9:
			uParam1->f_26[5] = 6;
			uParam1->f_36[5] = 0;
			return 1;
			break;
		
		case 10:
			if (bVar34)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_3_0"), &Var0);
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_3_0"), &Var0);
			}
			(*uParam1)[1] = Var0.f_3;
			uParam1->f_13[1] = Var0.f_4;
			return 1;
			break;
		
		case 11:
			if (!func_207())
			{
				iVar35 = Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_85.f_28;
			}
			else
			{
				iVar35 = Global_1613622.f_37;
			}
			*iParam3 = func_257(iVar35);
			Var36.f_1 = -1;
			Var36.f_2 = -1;
			Var36.f_3 = -1;
			Var36.f_4 = -1;
			Var36.f_8 = -1;
			Var36.f_9 = 20;
			Var36.f_2 = *iParam3;
			Var36.f_0 = iParam0;
			if (func_258(uParam1, Var36, 1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= Global_2433864.f_5706)
	{
		return -1;
	}
	return Global_2433864.f_5706[iParam0];
}

int func_258(var uParam0, struct<9> Param1, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, bool bParam31, bool bParam32)
{
	struct<37> Var0;
	int iVar50;
	struct<5> Var51;
	struct<5> Var68;
	bool bVar85;
	int iVar86;
	struct<14> Var87;
	bool bVar137;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar50 = 0;
	while (iVar50 < 12)
	{
		Var0[iVar50] = -1;
		iVar50++;
	}
	iVar50 = 0;
	while (iVar50 < uParam0->f_26)
	{
		Var0.f_26[iVar50] = -1;
		iVar50++;
	}
	iVar50 = 0;
	while (iVar50 < uParam0->f_46)
	{
		Var0.f_46[iVar50] = -1;
		iVar50++;
	}
	if (bParam31)
	{
		iVar50 = 0;
		while (iVar50 < 12)
		{
			(*uParam0)[iVar50] = -1;
			iVar50++;
		}
		iVar50 = 0;
		while (iVar50 < uParam0->f_26)
		{
			uParam0->f_26[iVar50] = -1;
			iVar50++;
		}
		iVar50 = 0;
		while (iVar50 < uParam0->f_46)
		{
			uParam0->f_46[iVar50] = -1;
			iVar50++;
		}
	}
	bVar85 = false;
	if (unk_0x6D5BB810CC209E15(Param1.f_0) == joaat("mp_m_freemode_01"))
	{
		bVar85 = true;
	}
	switch (Param1.f_2)
	{
		case -1:
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case -2:
			if (Param1.f_8 != -1)
			{
				Var0[1] = Global_1604043[Param1.f_8 /*76*/].f_15;
				Var0.f_13[1] = Global_1604043[Param1.f_8 /*76*/].f_16;
			}
			else
			{
				iVar86 = func_261();
				if (iVar86 != -1)
				{
					Var87 = 12;
					Var87.f_13 = 12;
					Var87.f_26 = 9;
					Var87.f_36 = 9;
					Var87.f_46 = 3;
					func_259(&Var87, iVar86, 1, 0);
					Var0[1] = Var87[1];
					Var0.f_13[1] = Var87.f_13[1];
				}
				else
				{
					Var0[1] = func_152(400, -1, -1);
					Var0.f_13[1] = func_152(388, -1, -1);
				}
				if (bParam32)
				{
					if (Var0[1] == -1 || Var0[1] == 0)
					{
						if (bVar85)
						{
							unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_2_0"), &Var51);
							Var0[1] = Var51.f_3;
							Var0.f_13[1] = Var51.f_4;
						}
						else
						{
							unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_2_0"), &Var51);
							Var0[1] = Var51.f_3;
							Var0.f_13[1] = Var51.f_4;
						}
					}
				}
			}
			break;
		
		case 0:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 1:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_21_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_21_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 2:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 3:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 4:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_M_BERD_0_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_F_BERD_0_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 5:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_M_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_F_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 6:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_M_BERD_0_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_F_BERD_0_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 7:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_M_BERD_2_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HIPS_F_BERD_2_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 8:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 9:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 10:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 11:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 12:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 13:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 14:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 15:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 16:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 17:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 18:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 19:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_11"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_11"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 20:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_12"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_12"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 21:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_13"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_13"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 22:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_14"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_14"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 23:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_15"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_15"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 24:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_16"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_16"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 25:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_17"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_17"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 26:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_18"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_18"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 27:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_19"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_19"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 28:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_20"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_20"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 29:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_21"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_21"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 30:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_22"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_22"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 31:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_23"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_23"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 32:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_24"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_24"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 33:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_14_25"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_14_25"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 34:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD0_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD0_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 35:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD0_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD0_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 36:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD0_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD0_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 37:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD0_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD0_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 38:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_9_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_9_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 39:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_8_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_8_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 40:
			if (bVar85)
			{
				Var0[1] = 3;
				Var0.f_13[1] = 0;
			}
			else
			{
				Var0[1] = 3;
				Var0.f_13[1] = 0;
			}
			break;
		
		case 41:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_10_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_10_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 42:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_4_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_4_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 43:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_5_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_5_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 44:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_6_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_6_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 45:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_7_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_7_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 46:
			if (bVar85)
			{
				Var0[1] = 6;
				Var0.f_13[1] = 2;
			}
			else
			{
				Var0[1] = 6;
				Var0.f_13[1] = 2;
			}
			break;
		
		case 47:
			if (bVar85)
			{
				Var0[1] = 6;
				Var0.f_13[1] = 3;
			}
			else
			{
				Var0[1] = 6;
				Var0.f_13[1] = 3;
			}
			break;
		
		case 48:
			if (bVar85)
			{
				Var0[1] = 6;
				Var0.f_13[1] = 0;
			}
			else
			{
				Var0[1] = 6;
				Var0.f_13[1] = 0;
			}
			break;
		
		case 49:
			if (bVar85)
			{
				Var0[1] = 6;
				Var0.f_13[1] = 1;
			}
			else
			{
				Var0[1] = 6;
				Var0.f_13[1] = 1;
			}
			break;
		
		case 50:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_3_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_3_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 51:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_11_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_11_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 52:
			if (bVar85)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_4_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_4_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 53:
			if (bVar85)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_5_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_5_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 54:
			if (bVar85)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_6_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_6_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 55:
			if (bVar85)
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_7_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			else
			{
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_7_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 56:
			if (bVar85)
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 2;
			}
			else
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 2;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 57:
			if (bVar85)
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 4;
			}
			else
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 4;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 58:
			if (bVar85)
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 0;
			}
			else
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 0;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 59:
			if (bVar85)
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 5;
			}
			else
			{
				Var0.f_26[0] = 18;
				Var0.f_36[0] = 5;
			}
			Var0[1] = 0;
			Var0.f_13[1] = 0;
			break;
		
		case 60:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_M_BERD_2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_F_BERD_2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 61:
			if (bVar85)
			{
				Var0[1] = 4;
				Var0.f_13[1] = 0;
			}
			else
			{
				Var0[1] = 4;
				Var0.f_13[1] = 0;
			}
			break;
		
		case 62:
			if (bVar85)
			{
				Var0[1] = 4;
				Var0.f_13[1] = 2;
			}
			else
			{
				Var0[1] = 4;
				Var0.f_13[1] = 2;
			}
			break;
		
		case 63:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD1_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD1_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 64:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 65:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 66:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 67:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 68:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 69:
			if (bVar85)
			{
				Var0[1] = 2;
				Var0.f_13[1] = 0;
			}
			else
			{
				Var0[1] = 2;
				Var0.f_13[1] = 0;
			}
			break;
		
		case 70:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD2_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 71:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_M_BERD_1_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_F_BERD_1_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 72:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 73:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_M_BERD_0_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_F_BERD_0_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 74:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_M_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_LTS_F_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 75:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD2_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD2_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 76:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_12_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_12_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 77:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_12_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_12_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 78:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_12_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_12_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_12_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_12_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 80:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_VAL_M_BERD1_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_VAL_F_BERD1_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 81:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 82:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_15_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_15_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 83:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_VAL_M_BERD0_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_VAL_F_BERD0_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 84:
			if (bVar85)
			{
				Var0[1] = 1;
				Var0.f_13[1] = 0;
			}
			else
			{
				Var0[1] = 1;
				Var0.f_13[1] = 0;
			}
			break;
		
		case 85:
			if (bVar85)
			{
				Var0[1] = 1;
				Var0.f_13[1] = 1;
			}
			else
			{
				Var0[1] = 1;
				Var0.f_13[1] = 1;
			}
			break;
		
		case 86:
			if (bVar85)
			{
				Var0[1] = 1;
				Var0.f_13[1] = 2;
			}
			else
			{
				Var0[1] = 1;
				Var0.f_13[1] = 2;
			}
			break;
		
		case 87:
			if (bVar85)
			{
				Var0[1] = 1;
				Var0.f_13[1] = 3;
			}
			else
			{
				Var0[1] = 1;
				Var0.f_13[1] = 3;
			}
			break;
		
		case 88:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_13_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_13_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 89:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_13_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_13_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 90:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_13_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_13_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 91:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_13_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_13_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 92:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 93:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 94:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 95:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 96:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_18"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_18"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 97:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_19"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_19"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 98:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_20"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_20"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 99:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_17"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_17"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 100:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_8"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 101:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_21"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_21"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 102:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_23_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_23_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 103:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_23_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_23_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 104:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_23_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_23_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 105:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_23_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_23_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 106:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 107:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_23_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_23_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 108:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_17_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_17_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 109:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 110:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 111:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_21_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_21_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 112:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 113:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_21_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_21_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 114:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 115:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_21_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_21_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 116:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 117:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_M_BERD1_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_BUSI_F_BERD1_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 118:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 119:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_4"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 120:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 121:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 122:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 123:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_19_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_19_3"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 124:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_16_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				Var0.f_26[0] = 4;
				Var0.f_36[0] = 1;
				Var0.f_26[1] = 7;
				Var0.f_36[1] = 0;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_16_7"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EYES0_0"), &Var68);
				Var0.f_26[1] = Var68.f_3;
				Var0.f_36[1] = Var68.f_4;
				Var0.f_26[0] = 4;
				Var0.f_36[0] = 0;
			}
			break;
		
		case 125:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_16_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_8_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
				Var0.f_26[1] = 7;
				Var0.f_36[1] = 0;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_16_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EYES0_0"), &Var68);
				Var0.f_26[1] = Var68.f_3;
				Var0.f_36[1] = Var68.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_8_0"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			break;
		
		case 126:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_16_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				Var0.f_26[1] = 7;
				Var0.f_36[1] = 0;
				Var0.f_26[0] = 4;
				Var0.f_36[0] = 0;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_16_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EYES0_0"), &Var68);
				Var0.f_26[1] = Var68.f_3;
				Var0.f_36[1] = Var68.f_4;
				Var0.f_26[0] = 4;
				Var0.f_36[0] = 0;
			}
			break;
		
		case 127:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_16_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				Var0.f_26[1] = 7;
				Var0.f_36[1] = 0;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_M_PHEAD_8_1"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_16_6"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_EYES0_0"), &Var68);
				Var0.f_26[1] = Var68.f_3;
				Var0.f_36[1] = Var68.f_4;
				unk_0xF3567FEA3AC100CC(joaat("DLC_MP_HEIST_F_PHEAD_8_1"), &Var68);
				Var0.f_26[0] = Var68.f_3;
				Var0.f_36[0] = Var68.f_4;
			}
			break;
		
		case 128:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_18_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_18_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 129:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_18_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_18_5"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 130:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_18_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_18_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 131:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_18_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_18_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 132:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_15"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_15"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 133:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_9"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 134:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_14"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_14"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 135:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_10"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 136:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_12"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_12"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 137:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_13"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_13"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 138:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_8_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_8_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 139:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_12_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_12_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 140:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_8_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_8_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 141:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_12_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_12_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 142:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_8_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_8_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 143:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_12_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_12_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 144:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_9_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_9_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 145:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_2_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_2_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 146:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_9_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_9_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 147:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_1_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 148:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_0_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_0_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 149:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_6_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_6_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 150:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_0_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_0_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 151:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_6_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_6_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 152:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_3_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_3_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 153:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_4_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_4_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 154:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_3_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_3_2"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 155:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_4_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_4_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 156:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_5_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_5_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 157:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_7_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_7_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 158:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_5_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_5_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 159:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_7_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_7_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 160:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_10_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_10_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 161:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_11_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_11_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 162:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_10_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_10_1"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
		
		case 163:
			if (bVar85)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_M_BERD_11_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HAL_F_BERD_11_0"), &Var51);
				Var0[1] = Var51.f_3;
				Var0.f_13[1] = Var51.f_4;
			}
			break;
	}
	bVar137 = false;
	iVar50 = 0;
	while (iVar50 < 12)
	{
		if (Var0[iVar50] != -1)
		{
			(*uParam0)[iVar50] = Var0[iVar50];
			uParam0->f_13[iVar50] = Var0.f_13[iVar50];
			bVar137 = true;
		}
		iVar50++;
	}
	iVar50 = 0;
	while (iVar50 < Var0.f_26)
	{
		if (Var0.f_26[iVar50] != -1)
		{
			uParam0->f_26[iVar50] = Var0.f_26[iVar50];
			uParam0->f_36[iVar50] = Var0.f_36[iVar50];
			bVar137 = true;
		}
		iVar50++;
	}
	if (bVar137)
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_260();
	if (((iParam1 >= 0 && iParam1 < 11) && Global_2097152[iVar2 /*10270*/].f_7698.f_1238[iParam1]) && iParam3 == iParam1 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 1 || iParam2)
			{
				if (Global_2097152[iVar2 /*10270*/].f_7698.f_728[iParam1 /*13*/][iVar0] != -1)
				{
					(*uParam0)[iVar0] = Global_2097152[iVar2 /*10270*/].f_7698.f_728[iParam1 /*13*/][iVar0];
					uParam0->f_13[iVar0] = Global_2097152[iVar2 /*10270*/].f_7698.f_872[iParam1 /*13*/][iVar0];
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_2097152[iVar2 /*10270*/].f_7698.f_1016[iParam1 /*10*/][iVar1] != -1)
			{
				uParam0->f_26[iVar1] = Global_2097152[iVar2 /*10270*/].f_7698.f_1016[iParam1 /*10*/][iVar1];
				uParam0->f_36[iVar1] = Global_2097152[iVar2 /*10270*/].f_7698.f_1127[iParam1 /*10*/][iVar1];
			}
			iVar1++;
		}
		uParam0->f_46[0] = Global_2097152[iVar2 /*10270*/].f_7698.f_1387[iParam1];
		return 1;
	}
	return 0;
}

int func_260()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

var func_261()
{
	return Global_2433864.f_5711;
}

int func_262(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, bool bParam31)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	int iVar17;
	struct<2> Var18;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		uParam0->f_26[iVar0] = -1;
		uParam0->f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_46[iVar0] = -1;
		iVar0++;
	}
	if (Param1.f_1 == -1)
	{
		return 0;
	}
	else if (Param1.f_1 == 0)
	{
		iVar1 = func_261();
		if (iVar1 != -1 && func_259(uParam0, iVar1, bParam31, 0))
		{
			(*uParam0)[5] = 0;
			uParam0->f_13[5] = 0;
		}
		else
		{
			if (bParam31)
			{
				(*uParam0)[1] = func_152(400, -1, -1);
				uParam0->f_13[1] = func_152(388, -1, -1);
			}
			if (!func_207())
			{
				if (func_126(161, Global_69176))
				{
					iVar2 = func_54(2040, Global_69176, 0);
				}
				else
				{
					iVar2 = func_54(742, Global_69176, 0);
				}
				Var3 = { func_208(unk_0x6D5BB810CC209E15(Param1.f_0), 2, iVar2) };
				(*uParam0)[2] = Var3.f_3;
				uParam0->f_13[2] = Var3.f_4;
			}
			(*uParam0)[0] = func_152(399, -1, -1);
			uParam0->f_13[0] = func_152(387, -1, -1);
			(*uParam0)[3] = func_152(402, -1, -1);
			uParam0->f_13[3] = func_152(390, -1, -1);
			(*uParam0)[4] = func_152(403, -1, -1);
			uParam0->f_13[4] = func_152(391, -1, -1);
			(*uParam0)[6] = func_152(405, -1, -1);
			uParam0->f_13[6] = func_152(393, -1, -1);
			(*uParam0)[7] = func_152(406, -1, -1);
			uParam0->f_13[7] = func_152(394, -1, -1);
			(*uParam0)[8] = func_152(407, -1, -1);
			uParam0->f_13[8] = func_152(395, -1, -1);
			(*uParam0)[9] = func_152(408, -1, -1);
			uParam0->f_13[9] = func_152(396, -1, -1);
			(*uParam0)[10] = func_152(409, -1, -1);
			uParam0->f_13[10] = func_152(397, -1, -1);
			(*uParam0)[11] = func_152(410, -1, -1);
			uParam0->f_13[11] = func_152(398, -1, -1);
			(*uParam0)[5] = 0;
			uParam0->f_13[5] = 0;
			uParam0->f_26[0] = func_152(423, -1, -1);
			uParam0->f_36[0] = func_152(432, -1, -1);
			uParam0->f_26[1] = func_152(424, -1, -1);
			uParam0->f_36[1] = func_152(433, -1, -1);
			uParam0->f_26[2] = func_152(425, -1, -1);
			uParam0->f_36[2] = func_152(434, -1, -1);
			uParam0->f_26[3] = func_152(426, -1, -1);
			uParam0->f_36[3] = func_152(435, -1, -1);
			uParam0->f_26[4] = func_152(427, -1, -1);
			uParam0->f_36[4] = func_152(436, -1, -1);
			uParam0->f_26[5] = func_152(428, -1, -1);
			uParam0->f_36[5] = func_152(437, -1, -1);
			uParam0->f_26[6] = func_152(429, -1, -1);
			uParam0->f_36[6] = func_152(438, -1, -1);
			uParam0->f_26[7] = func_152(430, -1, -1);
			uParam0->f_36[7] = func_152(439, -1, -1);
			uParam0->f_26[8] = func_152(431, -1, -1);
			uParam0->f_36[8] = func_152(440, -1, -1);
			if (uParam0->f_26[3] == 0)
			{
				uParam0->f_26[3] = -1;
			}
			if (uParam0->f_26[4] == 0)
			{
				uParam0->f_26[4] = -1;
			}
			if (uParam0->f_26[5] == 0)
			{
				uParam0->f_26[5] = -1;
			}
			if (uParam0->f_26[7] == 0)
			{
				uParam0->f_26[7] = -1;
			}
			if (uParam0->f_26[8] == 0)
			{
				uParam0->f_26[8] = -1;
			}
			if (!func_207())
			{
				iVar17 = func_118(func_54(1746, -1, 0), func_124(Param1.f_0));
				if (iVar17 != -1 && func_79(iVar17, -1))
				{
					uParam0->f_46[0] = func_54(1746, -1, 0);
				}
			}
		}
		if (!bParam31)
		{
			(*uParam0)[1] = 0;
			uParam0->f_13[1] = 0;
		}
		return 1;
	}
	Var18.f_1 = -1;
	Var18.f_0 = unk_0x6D5BB810CC209E15(Param1.f_0) == joaat("mp_m_freemode_01");
	Var18.f_1 = Param1.f_1;
	if (unk_0x0D0B3E07B2E8117A(uParam0, &Var18))
	{
		if (!bParam31 && ((*uParam0)[1] == -1 || (*uParam0)[8] == func_194(Param1.f_0, 1)))
		{
			(*uParam0)[1] = 0;
			uParam0->f_13[1] = 0;
		}
		func_263(Param1.f_1, Var18.f_0, uParam0[1], &(uParam0->f_13[1]), &(uParam0->f_26[0]), &(uParam0->f_36[0]));
		return 1;
	}
	return 0;
}

void func_263(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1613622 == 0)
	{
		if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 20))
		{
			func_265(iParam0, bParam1, uParam2, uParam3, uParam4, uParam5);
		}
		if (Global_262145.f_10589)
		{
			func_264(iParam0, bParam1, uParam2, uParam3);
			return;
		}
	}
}

void func_264(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	
	switch (iParam0)
	{
		case 579:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(435613453, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(-1967871389, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 580:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1147915719, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(215232164, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 581:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1379297628, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(788886278, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 582:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1147915719, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(215232164, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 583:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(435613453, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(-1967871389, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 584:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1147915719, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(215232164, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 585:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1379297628, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(788886278, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 586:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1147915719, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(215232164, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 587:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1379297628, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(788886278, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 588:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(435613453, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(-1967871389, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 589:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1379297628, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(788886278, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
		
		case 590:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(-1147915719, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			else
			{
				unk_0xFB677739B7A22DEB(215232164, &Var0);
				*uParam2 = Var0.f_3;
				*uParam3 = Var0.f_4;
			}
			break;
	}
}

void func_265(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<5> Var0;
	struct<5> Var17;
	
	switch (iParam0)
	{
		case 591:
		case 592:
		case 593:
		case 594:
		case 595:
		case 596:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_8"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_M_PHEAD_0_1"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_8"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_F_PHEAD_0_1"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			break;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_21"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_M_PHEAD_0_0"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_21"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_F_PHEAD_0_0"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			break;
		
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_20"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_M_PHEAD_0_3"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_20"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_F_PHEAD_0_3"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			break;
		
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
			if (bParam1)
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_M_BERD_22_19"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_M_PHEAD_0_4"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			else
			{
				unk_0xFB677739B7A22DEB(joaat("DLC_MP_HEIST_F_BERD_22_19"), &Var17);
				*uParam2 = Var17.f_3;
				*uParam3 = Var17.f_4;
				if (func_266(Global_1613622.f_68788))
				{
					unk_0xF3567FEA3AC100CC(joaat("DLC_MP_LTS_F_PHEAD_0_4"), &Var0);
					*uParam4 = Var0.f_3;
					*uParam5 = Var0.f_4;
				}
			}
			break;
	}
}

int func_266(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_7456[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_267()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xDF73DA5E2287C499(unk_0x20A20BF765914E37(iVar0)))
		{
			iVar2 = unk_0x20A20BF765914E37(iVar0);
			if (iVar1 >= 3)
			{
				iVar0 = 32;
			}
			if (iVar1 < 3)
			{
				if ((func_307(unk_0xCF4C00513A86E840(iVar2), 1) && func_268(iVar2)) && iVar2 != unk_0xA34E7C2A5118D638())
				{
					iLocal_107[iVar1] = iVar2;
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iLocal_246 = iVar1;
	return 1;
}

int func_268(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1607722[iParam0 /*34*/].f_27, 8);
	}
	return 0;
}

void func_269(int iParam0)
{
	Local_116[unk_0x935FA14EDA695A82() /*4*/].f_2 = iParam0;
}

int func_270()
{
	if (!unk_0x95CCECA3948CFE7B(iLocal_102))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			iLocal_102 = unk_0x71DD988C1B903F5D(4, unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()), 713.261f, -966.2629f, 29.3953f, 62.1074f, 0, 0);
			unk_0xEE6504C7ECC425AB(iLocal_102, 1);
			unk_0xAAD662D7E0D59F4C(iLocal_102, 1);
			unk_0xF59D84513A98DE82(unk_0xC8B93D94F8954288(), iLocal_102);
			unk_0x872B541D7953A19B(iLocal_102, false, 0);
		}
	}
	if (!unk_0x95CCECA3948CFE7B(iLocal_102))
	{
		return 0;
	}
	if (!unk_0x2DC9BA2299B45EA6(iLocal_102))
	{
		if (!unk_0x8D5BFC55CE180425(iLocal_102))
		{
			return 0;
		}
	}
	return 1;
}

void func_271()
{
	if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) != joaat("mp_f_freemode_01"))
	{
		unk_0x4767D2EEF03042F6("LOW_INT", 27, 8);
	}
	else
	{
		unk_0x4767D2EEF03042F6("LOW_INT", 29, 8);
	}
}

void func_272(bool bParam0)
{
	if (unk_0x95CCECA3948CFE7B(iLocal_102))
	{
		unk_0x872B541D7953A19B(iLocal_102, true, 0);
	}
	func_42(0);
	unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), false, 0);
	if (bParam0)
	{
		unk_0x8FB4254399424391(unk_0xC8B93D94F8954288(), false, 0);
		unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), true);
	}
}

int func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 447;
				
				case 1:
					return 448;
				
				case 2:
					return 449;
				
				case 3:
					return 450;
				
				case 4:
					return 451;
				
				case 5:
					return 452;
				
				case 6:
					return 453;
				
				case 7:
					return 454;
				
				default:
			}
			return 445;
		
		default:
	}
	return 445;
}

bool func_274(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_275(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

bool func_276()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

int func_277(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xB45DF29A98EEAD5D())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (!unk_0xB66DD474AA9E764E())
	{
		return 0;
	}
	if (func_296())
	{
		return 0;
	}
	if (func_302())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_303(unk_0xA34E7C2A5118D638(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_281(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (func_280())
	{
		return 0;
	}
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (Global_1573680)
	{
		return 0;
	}
	if (func_279())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (func_290())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (Global_2465403)
	{
		return 0;
	}
	return 1;
}

bool func_278()
{
	return Global_2433098.f_567;
}

bool func_279()
{
	return Global_2433098.f_717;
}

bool func_280()
{
	return Global_2426867.f_2429.f_585;
}

int func_281(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_282()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_283()
{
	unk_0xE87387B70341B996(1);
	func_284(1, -1);
	unk_0x72C05C762FFF2583(1);
	if (func_126(133, -1))
	{
		func_202(133, 0, -1, 1);
	}
	Global_2433098.f_618 = 1;
}

void func_284(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x7F00E2F1340492CF(0, iParam1);
			break;
		
		default:
			uVar1 = func_285(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x77621132305B133B(&iVar0, iParam0);
				unk_0x7F00E2F1340492CF(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_202(120, 0, iParam1, 1);
			func_202(124, 0, iParam1, 1);
			func_202(115, 0, iParam1, 1);
			func_202(119, 0, iParam1, 1);
			break;
	}
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_286(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
	{
		unk_0x77621132305B133B(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
	}
}

void func_287()
{
	if (func_291() || func_289())
	{
		func_288();
	}
}

void func_288()
{
	Global_2433098.f_631 = 1;
}

var func_289()
{
	return Global_2433098.f_610;
}

bool func_290()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_291()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

bool func_292()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 5);
}

int func_293()
{
	if (func_294() == 0)
	{
		return 1;
	}
	return 0;
}

int func_294()
{
	return Global_1312466.f_18;
}

int func_295(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_296()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

void func_297(bool bParam0)
{
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		if (bParam0)
		{
			if (!unk_0xDCC86F723E82125E(Global_1607722[unk_0xA34E7C2A5118D638() /*34*/].f_27, 8))
			{
			}
			unk_0x59A0729D503ED758(&(Global_1607722[unk_0xA34E7C2A5118D638() /*34*/].f_27), 8);
		}
		else
		{
			if (unk_0xDCC86F723E82125E(Global_1607722[unk_0xA34E7C2A5118D638() /*34*/].f_27, 8))
			{
			}
			unk_0x77621132305B133B(&(Global_1607722[unk_0xA34E7C2A5118D638() /*34*/].f_27), 8);
		}
	}
}

void func_298()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iLocal_102))
	{
		unk_0x26B3B761603F5232(&iLocal_102);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(uLocal_103[iVar0]))
		{
			unk_0x26B3B761603F5232(&(uLocal_103[iVar0]));
		}
		iVar0++;
	}
}

var func_299()
{
	return Global_1722051;
}

bool func_300()
{
	return Global_1315911;
}

int func_301()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_178;
}

bool func_302()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_303(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_304(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_304(int iParam0)
{
	return func_305(iParam0);
}

bool func_305(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

int func_306()
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (!Global_1710052 && func_293())
		{
			if (!unk_0xDCC86F723E82125E(iLocal_98, 0))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_99) < 625f)
				{
					if (!Global_1710052)
					{
						if (unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
						{
							func_271();
							unk_0x59A0729D503ED758(&iLocal_98, 0);
							unk_0x77621132305B133B(&iLocal_98, 1);
						}
					}
				}
			}
			else
			{
				if (!unk_0xDCC86F723E82125E(iLocal_98, 1))
				{
					if (unk_0x35081E98CA82CBB4())
					{
						unk_0xE9984980CDEF3B6A("MP_1", 0, 1);
						unk_0xE9984980CDEF3B6A("MP_2", 0, 1);
						unk_0xE9984980CDEF3B6A("MP_3", 0, 1);
						unk_0xE9984980CDEF3B6A("MP_4", 0, 1);
						unk_0x59A0729D503ED758(&iLocal_98, 1);
					}
				}
				if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_99) > 1225f)
				{
					unk_0xCDBEE0F3B4A74754();
					unk_0x77621132305B133B(&iLocal_98, 0);
					unk_0x77621132305B133B(&iLocal_98, 1);
				}
			}
		}
		else if (unk_0xDCC86F723E82125E(iLocal_98, 0))
		{
			unk_0xCDBEE0F3B4A74754();
			unk_0x77621132305B133B(&iLocal_98, 0);
			unk_0x77621132305B133B(&iLocal_98, 1);
		}
	}
	iVar0 = 1;
	if (!unk_0xDCC86F723E82125E(iLocal_98, 0))
	{
		iVar0 = 0;
	}
	if (!unk_0xDCC86F723E82125E(iLocal_98, 1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_307(int iParam0, bool bParam1)
{
	if (unk_0x2DC9BA2299B45EA6(uParam0))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(iLocal_98, 4))
	{
		if (!unk_0xA0C23498D8E0BB93(iParam0, Local_99, 6f, 6f, 2f, 0, 1, 0))
		{
			unk_0x77621132305B133B(&iLocal_98, 4);
		}
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xA0C23498D8E0BB93(iParam0, Local_99, 15f, 15f, 2f, 0, 1, 0))
		{
			return 0;
		}
	}
	else if (!unk_0xA0C23498D8E0BB93(iParam0, Local_99, 6f, 6f, 2f, 1, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_308()
{
	return Local_112.f_0;
}

int func_309(int iParam0)
{
	return Local_116[iParam0 /*4*/];
}

void func_310(var uParam0)
{
	if (func_311(1))
	{
		if (unk_0x6B4865E08E90ACC5(*uParam0) && !unk_0x2F6A8DE3F80BFD16(*uParam0))
		{
			unk_0x577E650C288BBD2C(*uParam0, 1);
			unk_0x8C79C3B54AFFD0A2(*uParam0, 0);
			unk_0xEB19FBC5156AAE3A(*uParam0, 5);
		}
	}
	else if (unk_0x6B4865E08E90ACC5(*uParam0) && unk_0x2F6A8DE3F80BFD16(*uParam0))
	{
		unk_0x577E650C288BBD2C(*uParam0, 0);
		unk_0x8C79C3B54AFFD0A2(*uParam0, 1);
	}
}

bool func_311(bool bParam0)
{
	return func_312(unk_0xA34E7C2A5118D638(), bParam0);
}

bool func_312(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_314(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_313();
}

int func_313()
{
	return -1;
}

int func_314(int iParam0)
{
	if (iParam0 != func_313())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_313())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	if (func_318(iParam0))
	{
		return 1;
	}
	if (func_316(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_317(iParam0, 9);
	}
	return 0;
}

bool func_317(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_318(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

bool func_319(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_320(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_320(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

void func_321()
{
	func_6();
	if (unk_0x6B4865E08E90ACC5(Global_1710035))
	{
		unk_0x706ABF1139F36482(Global_1710035, 0);
		unk_0x5356E82C1E5E0C44(&Global_1710035);
	}
	func_286(31, 0);
	func_325();
	unk_0x9B5503F5CD2CEB12(unk_0xA34E7C2A5118D638(), 0);
	if (func_324())
	{
		func_323();
	}
	unk_0xCDBEE0F3B4A74754();
	func_298();
	func_297(0);
	func_21(0);
	func_322();
}

void func_322()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_323()
{
	Global_2426867.f_615.f_9 = 0;
}

bool func_324()
{
	return Global_2426867.f_615.f_9;
}

void func_325()
{
	if (!func_328(1, -1))
	{
		func_327(1, -1);
	}
	if (func_300() && func_84() == 0)
	{
	}
	else
	{
		unk_0xE87387B70341B996(0);
	}
	if (func_326(1))
	{
		unk_0x72C05C762FFF2583(1);
	}
	else
	{
		unk_0x72C05C762FFF2583(0);
	}
	Global_2433098.f_618 = 0;
	if (func_130())
	{
		if (!func_126(133, -1))
		{
			func_202(133, 1, -1, 1);
		}
	}
}

bool func_326(int iParam0)
{
	return Global_1710194.f_16[iParam0 /*44*/].f_3;
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	Global_1347492 = 0;
	if (unk_0xD205A6ACC9C010D3() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x7F00E2F1340492CF(0, iParam1);
			uVar1 = func_285(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			break;
		
		default:
			iVar1 = func_285(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(iVar1);
			if (!unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x59A0729D503ED758(&iVar0, iParam0);
				unk_0x7F00E2F1340492CF(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_202(120, 0, iParam1, 1);
			func_202(124, 0, iParam1, 1);
			func_202(115, 0, iParam1, 1);
			func_202(119, 0, iParam1, 1);
			func_202(121, 0, iParam1, 1);
			func_202(122, 0, iParam1, 1);
			func_202(125, 0, iParam1, 1);
			func_16(1293, 0, iParam1, 1);
			break;
	}
}

bool func_328(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	uVar0 = func_285(iParam1);
	uVar1 = unk_0x11BD984A2A4EF9A7(uVar0);
	return unk_0xDCC86F723E82125E(uVar1, iParam0);
}

int func_329()
{
	bool bVar0;
	
	func_335(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_334())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_333())
	{
		return 1;
	}
	if (func_332(157))
	{
		if (!func_331())
		{
			return 1;
		}
	}
	if (func_332(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_330() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_330()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_330()
{
	switch (func_84())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_331()
{
	return Global_2433098.f_574;
}

int func_332(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_333()
{
	return Global_2441381;
}

bool func_334()
{
	return Global_2433098.f_569;
}

void func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_336(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_336(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_338(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_337(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_337(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_338(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xDF73DA5E2287C499(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_339()
{
	unk_0x4EDE34FBADD967A6(0);
}

Vector3 func_340(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -210.4709f, -1306.318f, 30.336f;
				
				case 1:
					return -1598.327f, -1040.538f, 12.0183f;
				
				case 2:
					return -21.2711f, -1732.453f, 28.304f;
				
				case 3:
					return 1992.482f, 3058.078f, 46.0576f;
				
				case 4:
					return 960.3523f, -1745.844f, 30.2208f;
				
				case 5:
					return 775.7347f, -1367.343f, 25.5669f;
				
				case 6:
					return -321.3307f, -1495.598f, 29.6536f;
				
				case 7:
					return -210.4709f, -1306.318f, 30.336f;
				
				default:
			}
			return -210.4709f, -1306.318f, 30.336f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_341(struct<20> Param0)
{
	var uVar0;
	
	func_344(func_345(Param0.f_0), Param0);
	func_343(0, -1, 0);
	unk_0xFE7B095449D5F053(&Local_112, 4);
	unk_0x99592530153DB318(&Local_116, 129);
	unk_0x6ECAEE4901F465A1(0);
	if (!func_342())
	{
		func_321();
	}
	if (unk_0x6B4865E08E90ACC5(Global_1710035))
	{
		unk_0x706ABF1139F36482(Global_1710035, 0);
		unk_0x5356E82C1E5E0C44(&Global_1710035);
		Global_1710035 = uVar0;
	}
}

int func_342()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_334())
		{
			return 0;
		}
		if (func_332(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_343(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_322();
			}
			else
			{
				return 0;
			}
		}
		if (!func_207())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_322();
					}
					else
					{
						return 0;
					}
				}
				if (func_334())
				{
					if (!bParam2)
					{
						func_322();
					}
					else
					{
						return 0;
					}
				}
				if (func_332(155))
				{
					if (!bParam2)
					{
						func_322();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_322();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_322();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_322();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_344(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_322();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 65:
			return 32;
		
		case 66:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

