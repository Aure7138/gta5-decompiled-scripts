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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0x2170E7BC25114A22(2))
	{
		func_66();
	}
	if (unk_0x7887B64A08364778(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x7887B64A08364778(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0x40EF1667AF107C1B(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x097C50E86C2C5672(iScriptParam_0))
			{
				if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
				{
					func_60();
					if (unk_0xB38A470B669AC00B(iScriptParam_0) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = unk_0xDF7104E7EF72530D(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x9B9BD7A946C64254(uLocal_41))
									{
										unk_0xA90AB61A68B55D98(uLocal_41, 9);
									}
									unk_0x01DFCA3621B68C4A();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0xDDA6A9FC627AD295("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x1A81BB3643C9AA8E(0);
								Global_25245[iLocal_43 /*11*/].f_2 = 0;
								Global_25245[iLocal_43 /*11*/].f_6 = 1;
								Global_25245[iLocal_43 /*11*/] = unk_0x7BC26452241AC7C9(0, 2);
								Global_25245[iLocal_43 /*11*/].f_1 = 0;
								Global_25245[iLocal_43 /*11*/].f_4 = 0;
								Global_25245[iLocal_43 /*11*/].f_7 = 0;
								Global_25245[iLocal_43 /*11*/].f_8 = 0;
								Global_25245[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x89B5F441838D8C70(iLocal_37) && unk_0xC74DA2993A57FB70(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25245[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									unk_0x04890EB0282525A5(1);
								}
							}
							if (unk_0x7887B64A08364778(iLocal_37))
							{
								if (!unk_0xA3E7DE487D314279(iLocal_37))
								{
									unk_0xB5024B946329EB6A(iLocal_37, 1, 0);
								}
							}
							if (unk_0x7887B64A08364778(iLocal_39))
							{
								if (!unk_0xA3E7DE487D314279(iLocal_39))
								{
									unk_0xB5024B946329EB6A(iLocal_39, 1, 0);
								}
							}
							if (unk_0x7887B64A08364778(iLocal_38))
							{
								if (unk_0xA3E7DE487D314279(iLocal_38))
								{
									unk_0xB5024B946329EB6A(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xCC257DA11A122B5F(&cLocal_46, "NULL"))
							{
								unk_0x0716ED71643436F5(&cLocal_46, 0);
							}
							unk_0xD7E7A6044B966C82(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x7887B64A08364778(iLocal_40))
							{
								unk_0xAA8E015711D293A8(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25245[iLocal_43 /*11*/] == 3 || Global_25245[iLocal_43 /*11*/] == 2) || Global_25245[iLocal_43 /*11*/] == -1)
								{
									Global_25245[iLocal_43 /*11*/] = unk_0x7BC26452241AC7C9(0, 2);
								}
								unk_0xD5F0751CDC090860(Global_25245[iLocal_43 /*11*/]);
								unk_0xCD433942EF2D3718(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25245[iLocal_43 /*11*/];
								iLocal_45 = Global_25245[iLocal_43 /*11*/].f_1;
								unk_0xD1D60E081126F5F5(iLocal_44, func_39(iLocal_45), Global_25245[iLocal_43 /*11*/].f_9);
								unk_0xD5F0751CDC090860(iLocal_44);
								if (Global_25245[iLocal_43 /*11*/].f_7)
								{
									Global_25245[iLocal_43 /*11*/].f_5 = 0;
									Global_25245[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25245[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25245[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25245[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25245[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0x16237E3853576CCA() == -1)
								{
									unk_0xD5F0751CDC090860(Global_25245[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25245[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25245[iLocal_43 /*11*/].f_5 = 0;
							Global_25245[iLocal_43 /*11*/].f_4 = 0;
							Global_25245[iLocal_43 /*11*/].f_1 = 0;
							Global_25245[iLocal_43 /*11*/].f_2 = 0;
							Global_25245[iLocal_43 /*11*/].f_7 = 0;
							Global_25245[iLocal_43 /*11*/].f_8 = 0;
							Global_25245[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x01DFCA3621B68C4A();
		}
	}
	func_66();
	unk_0x01DFCA3621B68C4A();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25245[iLocal_43 /*11*/] = unk_0x16237E3853576CCA();
	}
	fLocal_30 = unk_0xD8A83087F1151587();
	unk_0xD5F0751CDC090860(-1);
	func_4();
	if (unk_0xAB964FCFAC3C767A(joaat("family5")) == 0)
	{
		if (!unk_0xCC257DA11A122B5F(&cLocal_46, "NULL"))
		{
			unk_0x0716ED71643436F5(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x04890EB0282525A5(1);
	}
	func_3();
	func_50();
	if (unk_0x7887B64A08364778(iLocal_38))
	{
		if (!unk_0xA3E7DE487D314279(iLocal_38))
		{
			unk_0xB5024B946329EB6A(iLocal_38, 1, 0);
		}
	}
	unk_0xA079A9276303AD75(0);
	func_2();
}

void func_2()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (iLocal_87 == 1)
		{
			unk_0x91A1796DC8BA95E4();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x285A02D21520F128(iLocal_35);
		if (unk_0x7887B64A08364778(iLocal_37))
		{
			if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xB5024B946329EB6A(iLocal_37, 0, 0);
				if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xED5C6BE1E2C9B186(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xED5C6BE1E2C9B186(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x7887B64A08364778(iLocal_39))
	{
		unk_0xB5024B946329EB6A(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		if (unk_0x9FB26939A9557171(uLocal_78))
		{
			unk_0x55EB2099508DD1C3(uLocal_78, 0);
		}
		unk_0xAF191D67F49B35C9(uLocal_78, 0);
		unk_0xB6AE7C18ADC0F901(0);
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			unk_0xBBAF4B768DDB7572(unk_0xD5A676B97920D126(), 0);
			unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
			unk_0x8AEEE13F802C81D6(unk_0xD5A676B97920D126(), Local_31, 1, 0, 2);
			if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
				}
			}
			unk_0xB5024B946329EB6A(unk_0xD5A676B97920D126(), 1, 0);
		}
		if (!unk_0xCC257DA11A122B5F(&cLocal_62, "NULL"))
		{
			if (unk_0x0FE8D1B72C1924FE(&cLocal_62))
			{
				unk_0xB3C38A4B84C152BF(&cLocal_62);
			}
		}
		if (unk_0x7887B64A08364778(iLocal_39))
		{
			unk_0xB5024B946329EB6A(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0xA079A9276303AD75(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_14(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_13())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_14(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_10(unk_0xFB6B3EEFAB2DD12C())) && !func_7(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_6())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_10(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_6()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312731;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xDC9C34EF6C270425(iLocal_37) == unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126())) && !func_28(8, -1)) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && unk_0x8553E1F299D3EE9C(unk_0xD5A676B97920D126(), Local_31, 90f)) && !unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) && !unk_0xB0D174BA6F10DF7B())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25245[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xEE62FA8CB36232B1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xA93E75A5493862BD(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x04890EB0282525A5(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x4214C5222DAB7698(2, 222);
		if (unk_0x3CEEA45E4779F6BD(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0x2A29D86854DC4BC0(2, 200, 1);
		if (unk_0xA3E7DE487D314279(unk_0xD5A676B97920D126()))
		{
			unk_0xB5024B946329EB6A(unk_0xD5A676B97920D126(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
			}
		}
		unk_0xC7E06EC513BE0881();
		unk_0x26685369C0D5C2D1(unk_0xD5A676B97920D126());
		func_21(1, 1);
		unk_0x4214C5222DAB7698(2, 222);
		func_17();
		if (unk_0x3CEEA45E4779F6BD(2, 222) || (unk_0xDC1EFAABB6EF8F7F(2) && unk_0xBCCED7DE90D60F92(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14604)
	{
		func_19(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_13())
	{
		Global_14443.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xEE62FA8CB36232B1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xA93E75A5493862BD(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x16237E3853576CCA() == 0)
				{
					unk_0xD5F0751CDC090860(1);
				}
				else
				{
					unk_0xD5F0751CDC090860(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x274DF76800D4BA54(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0xD8A83087F1151587();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xCD433942EF2D3718(fVar2);
				iLocal_24 = unk_0x84A97C70FFDEC0C8();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0xD8A83087F1151587();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xCD433942EF2D3718(fVar2);
				iLocal_24 = unk_0x84A97C70FFDEC0C8();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xEE62FA8CB36232B1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xA93E75A5493862BD(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x84A97C70FFDEC0C8() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x274DF76800D4BA54(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_23()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0xB43345EE5335C48B("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0xCA489DAF31018317(uLocal_78, 100f);
		unk_0x55EB2099508DD1C3(uLocal_78, 1);
		unk_0xD08D9B79AF63C59F(1, 0, 3000, 1, 0, 0);
		if (unk_0x7887B64A08364778(iLocal_39))
		{
			unk_0xB5024B946329EB6A(iLocal_39, 0, 0);
		}
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			unk_0xBBAF4B768DDB7572(unk_0xD5A676B97920D126(), 1);
			unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
			if (unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x8AEEE13F802C81D6(unk_0xD5A676B97920D126(), Local_31, -1, 0, 2);
			unk_0xB5024B946329EB6A(unk_0xD5A676B97920D126(), 0, 0);
		}
		if (!unk_0xCC257DA11A122B5F(&cLocal_62, "NULL"))
		{
			if (!unk_0x0FE8D1B72C1924FE(&cLocal_62))
			{
				unk_0xE3E53903AE9B5BD5(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0xA079A9276303AD75(1);
		iLocal_85 = 1;
	}
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x9BA2465846EC8271(unk_0xF3F8195C98263BF5()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x30A37E559346657F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/] == 1 && Global_36480[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36480[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36480[iVar0 /*32*/].f_5 = 1;
			Global_36480[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36480[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36480[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xAB964FCFAC3C767A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/] = 1;
			Global_36480[iVar0 /*32*/].f_1 = Global_36681;
			Global_36681++;
			Global_36480[iVar0 /*32*/].f_4 = 0;
			Global_36480[iVar0 /*32*/].f_29 = 0;
			Global_36480[iVar0 /*32*/].f_5 = 0;
			Global_36480[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36480[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36480[iVar0 /*32*/].f_6 = iParam3;
			Global_36480[iVar0 /*32*/].f_31 = unk_0x3ED6DDB11A7AD67F();
			Global_36480[iVar0 /*32*/].f_7 = 0;
			Global_36480[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xC55B9553B3EDADE9(sParam4))
			{
				Global_36480[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36480[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36480[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36480[iVar0 /*32*/].f_12 = 0;
				Global_36480[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36480[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (iLocal_87 == 0)
		{
			unk_0xD5569AFBE1807925("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

float func_29(var uParam0)
{
	if (func_32(uParam0))
	{
		if (func_31(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_30(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x1995B52453EF6537())
	{
		iVar2 = unk_0x7414B386C0020BEC();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x285A02D21520F128(iLocal_35);
	unk_0xCF1B9EC03D5AB61E(4);
	unk_0xC85D4B364F28DEC5(1);
	unk_0x6B30A07264060691(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x285A02D21520F128(unk_0x9150615BA491C298());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x194EA65BE0B4C26F(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25245[iLocal_43 /*11*/].f_7 = 0;
	Global_25245[iLocal_43 /*11*/] = unk_0x16237E3853576CCA();
	fLocal_30 = unk_0xD8A83087F1151587();
	if (unk_0x0FE8D1B72C1924FE(&cLocal_62))
	{
		unk_0xB3C38A4B84C152BF(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x04890EB0282525A5(1);
	}
	func_41(&iLocal_42);
	unk_0xD5F0751CDC090860(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0xFB6B3EEFAB2DD12C()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1995B52453EF6537())
	{
		return;
	}
	if (Global_51560[iParam0 /*7*/])
	{
		unk_0x5BC7B5709E38CBE0(Global_51560[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB924315F0872835A(Global_51560[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_40(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()
{
	if (func_29(&uLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if ((!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x8553E1F299D3EE9C(unk_0xD5A676B97920D126(), Local_31, 90f)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xDC9C34EF6C270425(iLocal_37) != unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88747)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25245[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25245[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xEE62FA8CB36232B1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xA93E75A5493862BD(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = iParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_44();
	}
}

void func_44()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_47() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

int func_47()
{
	return Global_25185;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xF1D6D0D1F3A18A37("tvscreen"))
	{
		unk_0x01BDD6D7073ED2B9("tvscreen");
		iLocal_35 = -1;
		unk_0x285A02D21520F128(unk_0x9150615BA491C298());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0xF1D6D0D1F3A18A37("tvscreen"))
	{
		unk_0x01BDD6D7073ED2B9("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x7887B64A08364778(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iLocal_37);
	unk_0x73E7D509782366DB("tvscreen", 0);
	unk_0x9EB69DB9D5A45673(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x9B78A4E56864C65D(iVar0))
		{
			if (!unk_0x7887B64A08364778(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x097C50E86C2C5672(iLocal_37))
			{
				func_66();
			}
			if (!unk_0xF1D6D0D1F3A18A37("tvscreen"))
			{
				unk_0x73E7D509782366DB("tvscreen", 0);
			}
			if (!unk_0x9B78A4E56864C65D(iVar0))
			{
				unk_0x9EB69DB9D5A45673(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xE9D2BE06AC165275("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x7887B64A08364778(iLocal_37))
	{
		if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xC01415E1B3F6C76F(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x99569FEC2425586D(iLocal_37, uLocal_34);
	unk_0xBBAF4B768DDB7572(iLocal_37, 1);
	unk_0xB5024B946329EB6A(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xC01415E1B3F6C76F(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x99569FEC2425586D(iLocal_39, uLocal_34);
	unk_0xBBAF4B768DDB7572(iLocal_39, 1);
	unk_0xB5024B946329EB6A(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xC086F8D75730FA3A(iLocal_37, 1) };
	uLocal_34 = unk_0x714F015B4D2DE1DC(iLocal_37);
	func_59();
	if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()
{
	iLocal_38 = unk_0xC01415E1B3F6C76F(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x99569FEC2425586D(iLocal_38, uLocal_34);
	unk_0xB5024B946329EB6A(iLocal_38, 1, 0);
	unk_0xBBAF4B768DDB7572(iLocal_38, 1);
}

void func_59()
{
	unk_0xD1D60E081126F5F5(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0xD1D60E081126F5F5(1, func_39(12), 0);
	}
	else
	{
		unk_0xD1D60E081126F5F5(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25245[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x7887B64A08364778(iLocal_40))
			{
				unk_0x0A924F4E6E826379(iLocal_40, 0);
			}
			if (unk_0x7887B64A08364778(iLocal_37))
			{
				unk_0x0A924F4E6E826379(iLocal_37, 0);
			}
			if (unk_0x7887B64A08364778(iLocal_39))
			{
				unk_0x0A924F4E6E826379(iLocal_39, 0);
			}
			if (unk_0x7887B64A08364778(iLocal_38))
			{
				unk_0x0A924F4E6E826379(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x7887B64A08364778(iLocal_40))
		{
			unk_0x0A924F4E6E826379(iLocal_40, 1);
		}
		if (unk_0x7887B64A08364778(iLocal_37))
		{
			unk_0x0A924F4E6E826379(iLocal_37, 1);
		}
		if (unk_0x7887B64A08364778(iLocal_39))
		{
			unk_0x0A924F4E6E826379(iLocal_39, 1);
		}
		if (unk_0x7887B64A08364778(iLocal_38))
		{
			unk_0x0A924F4E6E826379(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35777 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25245[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x6DAE83305DF67FC4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		unk_0x01DFCA3621B68C4A();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25245[iLocal_43 /*11*/].f_6 = 0;
		Global_25245[iLocal_43 /*11*/].f_7 = 0;
		Global_25245[iLocal_43 /*11*/].f_8 = 0;
		Global_25245[iLocal_43 /*11*/].f_4 = 0;
		Global_25245[iLocal_43 /*11*/].f_5 = 0;
		Global_25245[iLocal_43 /*11*/].f_2 = 0;
		Global_25245[iLocal_43 /*11*/] = -1;
		Global_25245[iLocal_43 /*11*/].f_1 = 0;
		Global_25245[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x04890EB0282525A5(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x0FE8D1B72C1924FE(&cLocal_62))
	{
		unk_0xB3C38A4B84C152BF(&cLocal_62);
	}
	unk_0x7CF8E81CF366896B();
	func_2();
	unk_0x01DFCA3621B68C4A();
}

void func_67()
{
	func_50();
	if (unk_0x7887B64A08364778(iLocal_37))
	{
		if (unk_0xA0A4DA31DEDFAC4F(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x77CEDAB7C44BFD4E(&iLocal_37);
			unk_0x8188DB74546FF484(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x7887B64A08364778(iLocal_39))
	{
		unk_0x77CEDAB7C44BFD4E(&iLocal_39);
		unk_0x8188DB74546FF484(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x7887B64A08364778(iLocal_38))
	{
		unk_0x77CEDAB7C44BFD4E(&iLocal_38);
		unk_0x8188DB74546FF484(joaat("prop_tt_screenstatic"));
	}
}

