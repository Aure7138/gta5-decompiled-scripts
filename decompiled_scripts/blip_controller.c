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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<3> Local_23 = { 0, 0, 0 } ;
	struct<3> Local_26 = { 0, 0, 0 } ;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_17 = "NULL";
	sLocal_20 = "CHECKPOINT_NORMAL";
	sLocal_21 = "CHECKPOINT_MISSED";
	sLocal_22 = "CHECKPOINT_PERFECT";
	Local_23 = { 1694.74f, 3276.502f, 41.2796f };
	Local_26 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_29 = 3;
	fLocal_30 = 0f;
	fLocal_34 = -0.0375f;
	fLocal_35 = 0.17f;
	fLocal_38 = 80f;
	fLocal_39 = 140f;
	fLocal_40 = 180f;
	bLocal_49 = true;
	iLocal_52 = -1;
	if (unk_0xC968670BFACE42D9(2))
	{
		func_50();
	}
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		iVar1 = func_49(iVar0);
		func_46(iVar1, func_47(iVar0));
		iVar0++;
	}
	func_45(90, 1);
	func_45(91, 1);
	Global_24742 = 1;
	while (Global_24744)
	{
		if ((unk_0x9CD27B0045628463() % 250) == 0)
		{
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_54[iVar2] = -1;
		iVar2++;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 262)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_70 = Global_30773;
	bVar3 = false;
	func_44();
	func_42();
	while (true)
	{
		if (!bVar3)
		{
			func_41();
		}
		bVar3 = func_34();
		if (bVar3)
		{
			Global_24742 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_24742)
		{
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 262)
			{
				bVar7 = unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_33(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_30773)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 13))
						{
							if (func_32())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_49)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_49)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 7))
						{
							if (!func_31(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 16))
						{
							if (!func_29(Global_24745[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 14))
						{
							if (func_31(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 8))
						{
							if (Global_24745[iVar2 /*23*/].f_16 != 4 && Global_24745[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_28(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_63)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_44)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_24745[iVar2 /*23*/].f_16 == 1)
						{
							func_22();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							unk_0xE80492A9AC099A93(&(Global_24745[iVar2 /*23*/].f_11), 0);
						}
						else if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 15))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 15))
					{
						unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar2 /*23*/].f_11), 0);
					}
					if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 0) && unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!unk_0xA6DB27D19ECBB7DA(Global_24745[iVar2 /*23*/].f_19))
						{
							while (!unk_0x9A3FF3DE163034E8() < 150)
							{
								unk_0x4EDE34FBADD967A6(2000);
							}
							if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_63)
								{
									case 1:
									case 0:
									case 2:
										if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 28))
										{
											Global_24745[iVar2 /*23*/].f_19 = unk_0x46818D79B1F7499A(Global_24745[iVar2 /*23*/][0 /*3*/], Global_24745[iVar2 /*23*/].f_10);
											unk_0x45FF974EEE1C8734(Global_24745[iVar2 /*23*/].f_19, 128);
											unk_0x75A16C3DA34F1245(Global_24745[iVar2 /*23*/].f_19, false);
										}
										else
										{
											Global_24745[iVar2 /*23*/].f_19 = unk_0x5A039BB0BCA604B6(Global_24745[iVar2 /*23*/][iLocal_63 /*3*/]);
											unk_0xDF735600A4696DAF(Global_24745[iVar2 /*23*/].f_19, Global_24745[iVar2 /*23*/].f_12[iLocal_63]);
										}
										break;
									
									default:
										Global_24745[iVar2 /*23*/].f_19 = unk_0x5A039BB0BCA604B6(1f, 2f, 3f);
										break;
								}
							}
							else if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 28))
							{
								Global_24745[iVar2 /*23*/].f_19 = unk_0x46818D79B1F7499A(Global_24745[iVar2 /*23*/][0 /*3*/], Global_24745[iVar2 /*23*/].f_10);
								unk_0x45FF974EEE1C8734(Global_24745[iVar2 /*23*/].f_19, 128);
								unk_0x75A16C3DA34F1245(Global_24745[iVar2 /*23*/].f_19, false);
							}
							else
							{
								Global_24745[iVar2 /*23*/].f_19 = unk_0x5A039BB0BCA604B6(Global_24745[iVar2 /*23*/][0 /*3*/]);
								unk_0xDF735600A4696DAF(Global_24745[iVar2 /*23*/].f_19, Global_24745[iVar2 /*23*/].f_12[0]);
							}
							if (Global_24745[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_63)
								{
									case 1:
									case 0:
									case 2:
										unk_0xAE2AF67E9D9AF65D(Global_24745[iVar2 /*23*/].f_19, Global_24745[iVar2 /*23*/][iLocal_63 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								unk_0xAE2AF67E9D9AF65D(Global_24745[iVar2 /*23*/].f_19, Global_24745[iVar2 /*23*/][0 /*3*/]);
							}
							if (unk_0xA921AA820C25702F(Global_24745[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_46)
								{
									unk_0xB14552383D39CE3E(Global_24745[iVar2 /*23*/].f_19, true);
									iLocal_46 = 0;
								}
								else
								{
									unk_0x2E8D9498C56DD0D1(Global_24745[iVar2 /*23*/].f_19, true);
									iLocal_46 = 1;
								}
								unk_0xD3CD6FD297AE87CC(Global_24745[iVar2 /*23*/].f_19, 10000);
								unk_0xE80492A9AC099A93(&(Global_24745[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								unk_0xB14552383D39CE3E(Global_24745[iVar2 /*23*/].f_19, false);
							}
						}
						func_19(Global_24745[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_18(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar2 /*23*/].f_19))
						{
							unk_0x86A652570E5F25DD(&(Global_24745[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_24745[iVar2 /*23*/].f_16 == 1)
							{
								func_17(iVar2);
							}
						}
						Global_24745[iVar2 /*23*/].f_19 = 0;
					}
				}
				unk_0xE80492A9AC099A93(&(Global_24745[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (unk_0xB16FCE9DDC7BA182())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					unk_0x4EDE34FBADD967A6(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2++;
			}
		}
		Global_24742 = Global_24743;
		Global_24743 = 0;
		if (iVar4 == 0)
		{
			func_10();
			func_6();
			unk_0x4EDE34FBADD967A6(500);
			iLocal_63 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_2()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_5(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_4(unk_0xD80958FC74E988A6());
			if (func_3(iVar0) && (!func_31(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_3(Global_97173.f_1729.f_539.f_3213))
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

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_6()
{
	if (func_1() == 1)
	{
		if (func_9(63))
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (func_9(126))
				{
					if (func_8(137))
					{
						func_7(137, 0, 0);
					}
					if (!func_8(138))
					{
						if (unk_0x2C83A9DA6BFFC4F9(joaat("chop")) == 0)
						{
							if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
							{
								func_7(138, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_8(138))
					{
						func_7(138, 0, 0);
					}
					if (!func_8(137))
					{
						if (unk_0x2C83A9DA6BFFC4F9(joaat("chop")) == 0)
						{
							if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
							{
								func_7(137, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 262)
	{
		return;
	}
	iVar0 = iParam0;
	if (!bParam2)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
		if (Global_24742 == 1)
		{
			Global_24743 = 1;
		}
		Global_24742 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_24745[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

int func_8(int iParam0)
{
	if (iParam0 != 262)
	{
		return unk_0xA6DB27D19ECBB7DA(Global_24745[iParam0 /*23*/].f_19);
	}
	return 0;
}

int func_9(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_10()
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	
	if (unk_0x424D4687FA1E5652(unk_0xA5EDC40EF369B48D()))
	{
		return;
	}
	Var0 = { func_16(unk_0xA5EDC40EF369B48D()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_54[iVar5] != -1)
		{
			if (unk_0xA6DB27D19ECBB7DA(Global_24745[iLocal_54[iVar5] /*23*/].f_19))
			{
				fVar6 = unk_0xF1B760881820C952(Var0, unk_0x586AFE3FF72D996E(Global_24745[iLocal_54[iVar5] /*23*/].f_19), true);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_52 == iVar3)
	{
		return;
	}
	iLocal_52 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_54[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (unk_0xA6DB27D19ECBB7DA(Global_24745[iLocal_54[iVar5] /*23*/].f_19))
				{
					func_15(iLocal_54[iVar5]);
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(Global_24745[iLocal_54[iVar5] /*23*/].f_19))
			{
				func_11(iLocal_54[iVar5]);
			}
		}
		iVar5++;
	}
}

void func_11(int iParam0)
{
	func_14(iParam0, 0, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

void func_12(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 4);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 5);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 11);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_15(var uParam0)
{
	func_14(uParam0, 1, 0);
	func_13(uParam0, 1);
	func_12(uParam0, 1);
}

Vector3 func_16(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_17(int iParam0)
{
	int iVar0;
	
	if (iLocal_53 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_54[iVar0] == iParam0)
		{
			iLocal_53 = (iLocal_53 - 1);
			iLocal_54[iVar0] = -1;
			if (iParam0 == iLocal_52)
			{
				iLocal_52 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_53 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_53)
	{
		if (iLocal_54[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_54[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_54[iVar1] = iParam0;
	iLocal_53++;
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = func_1();
	unk_0xC4278F70131BAA6D(iParam0, true);
	unk_0xAE9FC9EF6A9FAC79(iParam0, 2);
	unk_0x03D7FB09E75D6B7E(iParam0, func_21(iParam1));
	if (Global_24745[iParam1 /*23*/].f_16 == 4 || Global_24745[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				unk_0x03D7FB09E75D6B7E(iParam0, 42);
				break;
			
			case 1:
				unk_0x03D7FB09E75D6B7E(iParam0, 43);
				break;
			
			case 2:
				unk_0x03D7FB09E75D6B7E(iParam0, 44);
				break;
			}
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 28))
	{
		unk_0xD38744167B2FA257(iParam0, 1f);
	}
	if (!unk_0xCA042B6957743895(&(Global_24745[iParam1 /*23*/].f_20)))
	{
		if (unk_0xAC09CA973C564252(&(Global_24745[iParam1 /*23*/].f_20)))
		{
			unk_0xEAA0FFE120D92784(iParam0, &(Global_24745[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 4);
	bVar2 = unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 5);
	bVar3 = unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (func_20(0))
	{
		bVar4 = unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 11);
	}
	if (bVar3 && !bVar4)
	{
		unk_0xBE8BE4FE60E27B72(iParam0, false);
	}
	else
	{
		unk_0xBE8BE4FE60E27B72(iParam0, true);
	}
	if (bVar2 && bVar1)
	{
		unk_0x9029B2F3DA924928(iParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			unk_0x9029B2F3DA924928(iParam0, 5);
		}
		if (bVar1)
		{
			unk_0x9029B2F3DA924928(iParam0, 3);
		}
	}
	switch (Global_24745[iParam1 /*23*/].f_16)
	{
		case 7:
			unk_0xAE9FC9EF6A9FAC79(iParam0, 2);
			unk_0xE2590BC29220CEBB(iParam0, false);
			break;
		
		case 6:
		case 5:
			unk_0xAE9FC9EF6A9FAC79(iParam0, 2);
			unk_0xE2590BC29220CEBB(iParam0, false);
			break;
		
		case 1:
			unk_0xAE9FC9EF6A9FAC79(iParam0, 3);
			unk_0xE2590BC29220CEBB(iParam0, true);
			break;
		
		case 9:
			unk_0xAE9FC9EF6A9FAC79(iParam0, 1);
			unk_0x234CDD44D996FD9A(iParam0, 10);
			unk_0xE2590BC29220CEBB(iParam0, false);
			break;
		
		case 4:
		case 8:
			unk_0xE2590BC29220CEBB(iParam0, true);
			if (Global_24745[iParam1 /*23*/].f_16 == 4)
			{
				unk_0xAE9FC9EF6A9FAC79(iParam0, 7);
			}
			else
			{
				unk_0xAE9FC9EF6A9FAC79(iParam0, 5);
			}
			if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 8))
			{
				if (!func_28(iParam1))
				{
					if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 28))
					{
						unk_0x45FF974EEE1C8734(iParam0, 0);
					}
					else
					{
						if (Global_24745[iParam1 /*23*/].f_17 == 0)
						{
							unk_0x03D7FB09E75D6B7E(iParam0, 42);
						}
						if (Global_24745[iParam1 /*23*/].f_17 == 1)
						{
							unk_0x03D7FB09E75D6B7E(iParam0, 43);
						}
						if (Global_24745[iParam1 /*23*/].f_17 == 2)
						{
							unk_0x03D7FB09E75D6B7E(iParam0, 44);
						}
						if (Global_24745[iParam1 /*23*/].f_16 == 8)
						{
							unk_0xBE8BE4FE60E27B72(iParam0, unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 5));
							unk_0xAE9FC9EF6A9FAC79(iParam0, 3);
							unk_0xBE8BE4FE60E27B72(iParam0, true);
							unk_0x54318C915D27E4CE(iParam0, true);
							unk_0xD38744167B2FA257(iParam0, 0.77f);
						}
						else
						{
							unk_0xD38744167B2FA257(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 28))
					{
						unk_0x45FF974EEE1C8734(iParam0, 128);
					}
					if (Global_24745[iParam1 /*23*/].f_16 == 8)
					{
						unk_0x54318C915D27E4CE(iParam0, false);
					}
				}
			}
			break;
		
		default:
			unk_0xAE9FC9EF6A9FAC79(iParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			unk_0xE2590BC29220CEBB(iParam0, true);
			break;
	}
	if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				unk_0xAE2AF67E9D9AF65D(Global_24745[iParam1 /*23*/].f_19, Global_24745[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 17))
	{
		unk_0x24AC0137444F9FD5(iParam0, true);
	}
	else
	{
		unk_0x24AC0137444F9FD5(iParam0, false);
	}
	if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 20))
	{
		unk_0x74513EA3E505181E(iParam0, true);
	}
	else
	{
		unk_0x74513EA3E505181E(iParam0, false);
	}
	if (unk_0xA921AA820C25702F(Global_24745[iParam1 /*23*/].f_11, 29))
	{
		unk_0x03D7FB09E75D6B7E(iParam0, 39);
	}
}

int func_20(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x53158863FCC0893A(Global_24745[iParam0 /*23*/].f_11, 21, 26);
	return iVar0;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_23(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_85227[iParam0 /*10*/].f_7 == 262)
	{
		return;
	}
	bVar0 = false;
	if (unk_0xA921AA820C25702F(Global_97173.f_5486[iParam0], 0))
	{
		if (Global_85227[iParam0 /*10*/].f_9 != func_27())
		{
			bVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_24(6))
		{
			bVar0 = false;
		}
	}
	if (func_20(14))
	{
		bVar0 = false;
	}
	func_7(Global_85227[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_24(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_97173.f_5486[iParam0], 0);
}

int func_25(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_89836.f_288 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_26(iParam0, &sVar1);
		iVar9 = unk_0x05B7A89BD78797FC(Global_85227[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_89836.f_288 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x88A741E44A2B3495("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x88A741E44A2B3495("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x88A741E44A2B3495("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x0C515FAB3FF9EA92(sParam1, "");
}

int func_27()
{
	func_2();
	return Global_97173.f_1729.f_539.f_3213;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_24745[iVar0 /*23*/].f_17 == func_1())
	{
		return 1;
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_24745[iVar0 /*23*/].f_18 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)
{
	return func_30(iParam0, Global_34909);
}

int func_30(int iParam0, int iParam1)
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

bool func_31(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_32()
{
	if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iLocal_67 && unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 13))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_68 && ((unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 7) || unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 11)) || unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 16)))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_69 && unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 14))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_64 && ((unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 10) || unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 8)) || unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 19)))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_65)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_71 && unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 27))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_72 && (unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 1) || unk_0xA921AA820C25702F(Global_24745[iParam0 /*23*/].f_11, 2))) || Global_24745[iParam0 /*23*/].f_16 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_34()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_40())
	{
		if (!iLocal_66)
		{
			iLocal_66 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_67)
		{
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		if (!iLocal_69)
		{
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	bLocal_65 = false;
	if (Global_30773 != iLocal_70)
	{
		iLocal_70 = Global_30773;
		if (!bLocal_65)
		{
			bLocal_65 = true;
			iVar0 = 1;
		}
	}
	if (func_35())
	{
		if (!iLocal_72)
		{
			iLocal_72 = 1;
			iVar0 = 1;
		}
	}
	iLocal_63 = func_1();
	if (iLocal_63 != iLocal_62)
	{
		iLocal_62 = iLocal_63;
		iLocal_64 = 1;
		iVar0 = 1;
	}
	iLocal_45 = bLocal_44;
	if (func_9(130))
	{
		bLocal_44 = true;
	}
	if (func_9(131))
	{
		bLocal_44 = false;
	}
	if (bLocal_44 != iLocal_45)
	{
		if (!iLocal_71)
		{
			iVar0 = 1;
		}
		iLocal_71 = 1;
	}
	return iVar0;
}

int func_35()
{
	int iVar0;
	
	if (unk_0x5F9532F3B5CC2551(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D())))
	{
		return 0;
	}
	iVar0 = unk_0x2107BA504071A6BB(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()));
	if (iLocal_50 != iVar0)
	{
		iLocal_50 = iVar0;
		if (iVar0 == 0 || func_36(iVar0))
		{
			bLocal_49 = true;
		}
		else
		{
			bLocal_49 = false;
		}
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_29[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37()
{
	if (iLocal_51 != func_20(0))
	{
		iLocal_51 = func_20(0);
		return 1;
	}
	return 0;
}

bool func_38()
{
	bool bVar0;
	
	bVar0 = Global_30774;
	Global_30774 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_39()
{
	if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) != iLocal_48)
	{
		iLocal_48 = unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D());
		return 1;
	}
	return 0;
}

int func_40()
{
	if (Global_34909 != 15)
	{
		return 0;
	}
	if (unk_0x25223CA6B4D20B7F() != iLocal_47)
	{
		iLocal_47 = unk_0x25223CA6B4D20B7F();
		return 1;
	}
	return 0;
}

void func_41()
{
	iLocal_64 = 0;
	bLocal_65 = false;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
}

void func_42()
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(111, 1, 0);
		func_7(112, 1, 0);
		func_7(113, 1, 0);
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_44()
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(155, 1, 0);
		func_7(156, 1, 0);
		func_7(160, 1, 0);
		func_7(159, 1, 0);
		func_7(157, 1, 0);
		func_11(157);
		func_7(158, 1, 0);
		func_11(158);
	}
}

void func_45(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (bParam1 == unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 2);
	}
	if (Global_24742 == 1)
	{
		Global_24743 = 1;
	}
	Global_24742 = 1;
	unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
}

void func_46(int iParam0, char* sParam1)
{
	if (iParam0 != 262)
	{
		StringCopy(&(Global_24745[iParam0 /*23*/].f_20), sParam1, 8);
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iParam0 /*23*/].f_19))
		{
			unk_0xEAA0FFE120D92784(Global_24745[iParam0 /*23*/].f_19, sParam1);
		}
	}
}

char* func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_48(iParam0);
			break;
		
		case 8:
			return func_48(iParam0);
			break;
		
		case 9:
			return func_48(iParam0);
			break;
		
		case 10:
			return func_48(iParam0);
			break;
		
		case 11:
			return func_48(iParam0);
			break;
		
		case 12:
			return func_48(iParam0);
			break;
		
		case 13:
			return func_48(iParam0);
			break;
		
		case 14:
			return func_48(iParam0);
			break;
		
		case 15:
			return func_48(iParam0);
			break;
		
		case 16:
			return func_48(iParam0);
			break;
		
		case 17:
			return func_48(iParam0);
			break;
		
		case 18:
			return func_48(iParam0);
			break;
		
		case 19:
			return func_48(iParam0);
			break;
		
		case 20:
			return func_48(iParam0);
			break;
		
		case 21:
			return func_48(iParam0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_48(iParam0);
			break;
		
		case 40:
			return func_48(iParam0);
			break;
		
		case 41:
			return func_48(iParam0);
			break;
		
		case 42:
			return func_48(iParam0);
			break;
		
		case 43:
			return func_48(iParam0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 262;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		default:
			break;
	}
	return 262;
}

void func_50()
{
	unk_0x1090044AD1DA76FA();
}

