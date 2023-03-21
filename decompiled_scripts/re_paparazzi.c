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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	struct<3> Local_575 = { 0, 0, 0 } ;
	struct<3> Local_578 = { 0, 0, 0 } ;
	struct<3> Local_581 = { 0, 0, 0 } ;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	struct<3> Local_596[4];
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	struct<3> Local_632 = { 0, 0, 0 } ;
	struct<3> Local_635 = { 0, 0, 0 } ;
	float fLocal_638 = 0f;
	struct<3> Local_639 = { 0, 0, 0 } ;
	struct<3> Local_642 = { 0, 0, 0 } ;
	float fLocal_645 = 0f;
	struct<3> Local_646 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_652 = 0f;
	struct<3> Local_653 = { 0, 0, 0 } ;
	struct<3> Local_656 = { 0, 0, 0 } ;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_53 = { 226.6825f, 681.0297f, 188.4987f };
	Local_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	Local_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	Local_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	Local_575 = { 272.6356f, 155.5618f, 103.3306f };
	Local_578 = { 247.5795f, 88.7094f, 92.9859f };
	Local_581 = { 259.0348f, 114.0369f, 98.9984f };
	Local_584 = { 255.4971f, 116.8744f, 99.8162f };
	Local_587 = { 266.8217f, 139.7698f, 103.2269f };
	Local_590 = { 270.0174f, 139.1181f, 103.2195f };
	Local_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	Local_632 = { 261.9341f, 126.2429f, 95.15405f };
	Local_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	Local_639 = { 261.9341f, 126.2429f, 107.6541f };
	Local_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	Local_646 = { 256.6779f, 126.573f, 99.54784f };
	Local_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	Local_653 = { 260.242f, 127.423f, 101.65f };
	Local_656 = { 0f, 0f, -20f };
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD4BE58A7E3E102AC(11))
	{
		func_281();
	}
	func_280(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_238(Local_50, -1, 0, 0, 0))
		{
			func_235(-1);
		}
		else
		{
			unk_0x9C9E32388A7886A2();
		}
	}
	uLocal_365 = unk_0x740FE9B7B3FE1CE5(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x740FE9B7B3FE1CE5(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x740FE9B7B3FE1CE5(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0xB82DC93528F8603C(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x80BCF42B42433CEB(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_232(&uLocal_97);
		if (!func_231())
		{
			if (func_230())
			{
				func_281();
			}
		}
		unk_0x643E26919A174002("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0xD4B321D9096B01FC(Local_131[iVar0 /*18*/]) && !unk_0xF4B969E0807E76C7(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0xACE5E491FC1B0D37(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0xF4B969E0807E76C7(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0xACE5E491FC1B0D37(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			Local_60 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
		}
		if (!unk_0x2BF5E63466422C38(iLocal_86))
		{
			Local_63 = { unk_0xACE5E491FC1B0D37(iLocal_86, 1) };
		}
		if (unk_0xD4B321D9096B01FC(iLocal_91) && !unk_0xF4B969E0807E76C7(iLocal_91, 0))
		{
			Local_66 = { unk_0xACE5E491FC1B0D37(iLocal_91, 1) };
		}
		if (!func_231())
		{
			if (unk_0xBE1BAAD38691E6DD())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_221())
						{
							func_214();
							iLocal_369++;
						}
						else if (func_202())
						{
							func_281();
						}
						break;
					
					case 1:
						if ((func_201() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || !unk_0xD960230552BC4165(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_200();
								func_281();
							}
						}
						else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_191(1);
							uLocal_360 = func_190(iLocal_86, 0, 145);
							func_189("MAG_2_ESCAPE_PAP_GET_CAR");
							func_188(0);
						}
						break;
				}
			}
			else
			{
				func_281();
			}
		}
		else
		{
			unk_0x3EF8C80DD57B551F(unk_0x7C7787D2D7139A85());
			switch (iLocal_47)
			{
				case 0:
					func_185();
					break;
				
				case 1:
					func_182();
					break;
				
				case 2:
					func_160();
					break;
				
				case 3:
					func_148();
					break;
				
				case 4:
					func_111();
					break;
				
				case 10:
					func_281();
					break;
				
				case 5:
					func_110();
					break;
				
				case 6:
					func_107(sLocal_371);
					break;
				
				case 7:
					func_106();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_105())
					{
						if (unk_0xD4B321D9096B01FC(iLocal_86))
						{
							unk_0x4F058F27442031CC(&iLocal_86);
						}
						func_81();
					}
					break;
				
				case 11:
					func_77();
					break;
			}
			if (!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_63, 210f, 210f, 210f, 0, 1, 0))
			{
				func_200();
				func_281();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_74(iLocal_86, 1, 1) || func_73())
					{
						if (iLocal_47 > 0)
						{
							func_188(5);
						}
						else
						{
							func_200();
							func_188(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_69())
						{
							func_188(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (iLocal_74 || func_24() != 0))
			{
				if ((!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x9B35D07DCD0F0B43() - iLocal_564) > 5000) && !unk_0x2BF5E63466422C38(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
					{
						if (func_231())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_23(&Local_395, 4);
								func_22(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = unk_0x9B35D07DCD0F0B43();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0xBAC643F143880136(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0x9B35D07DCD0F0B43();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		iVar0 = unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203());
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			iVar1 = unk_0x300C62F79A4441EB(iVar0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iVar1))
			{
				if (iVar1 != unk_0x0FA8183DAD2B3203())
				{
					if (unk_0x00123AB82C5FAC28(iVar1))
					{
						if (!unk_0x8752F912B1823E3A(iVar1, unk_0x0FA8183DAD2B3203()))
						{
							unk_0x6E2920E14F5F962C(iVar1, unk_0x0FA8183DAD2B3203(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x35D31BEBAFD53DE6(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0x3656B691E303FDE0(Local_204[iVar0 /*18*/], unk_0x0FA8183DAD2B3203(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0x35D31BEBAFD53DE6(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0x35D31BEBAFD53DE6(Local_204[iVar0 /*18*/])));
					unk_0x7FF38BFB318C1A86(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0x35D31BEBAFD53DE6(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x8ED81066343F07B4(uParam0, cParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_18();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_16();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_20();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_8()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_13()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_14()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()
{
	if (func_17(14))
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
		Global_19486 = func_24();
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

bool func_17(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_20()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_22(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()
{
	func_25();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_28(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_27(unk_0x0FA8183DAD2B3203());
			if (func_26(iVar0) && (!func_17(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111560.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/])) && !unk_0x2BF5E63466422C38(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			unk_0x6BB2B1818CAE531E(joaat("a_m_y_genstreet_02"));
			unk_0x6BB2B1818CAE531E(joaat("prop_pap_camera_01"));
			unk_0x6BB2B1818CAE531E(joaat("cavalcade2"));
			unk_0x6BB2B1818CAE531E(joaat("vader"));
			unk_0x36B659209EBDD366(sLocal_373);
			unk_0x36B659209EBDD366("random@paparazzi@pap_anims");
			if (((((unk_0x6DF9C43E3CC645BC(joaat("a_m_y_genstreet_02")) && unk_0x6DF9C43E3CC645BC(joaat("prop_pap_camera_01"))) && unk_0x6DF9C43E3CC645BC(joaat("cavalcade2"))) && unk_0x6DF9C43E3CC645BC(joaat("vader"))) && unk_0xB25A0D192C6A0A5B(sLocal_373)) && unk_0xB25A0D192C6A0A5B("random@paparazzi@pap_anims"))
			{
				Local_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					func_68(iVar0);
					func_66(func_67(iVar0));
					func_66(func_65(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_64(func_67(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_64(func_65(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_64(func_65(2), Local_596[1 /*3*/], fLocal_609[1]);
				func_64(func_65(3), Local_596[1 /*3*/], fLocal_609[1]);
				func_63(0, Local_596[0 /*3*/], fLocal_609[0], 1);
				func_63(1, Local_596[1 /*3*/], fLocal_609[1], 0);
				unk_0xCB3446C6A91D1A78(func_62(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(func_62(0, 1), 217.1033f);
				unk_0xCB3446C6A91D1A78(func_62(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(func_62(2, 1), 38.6283f);
				unk_0xCB3446C6A91D1A78(func_62(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(func_62(3, 1), 272.9875f);
				unk_0x5D672CB011E20B28(func_62(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(func_62(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(func_62(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(func_62(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(func_62(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_60(func_65(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_60(func_67(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_60(func_65(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_60(func_65(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_60(func_65(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0xD4B321D9096B01FC(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0x0975E9E48EA2CC7B(Local_204[2 /*18*/].f_2))
				{
					unk_0x2BBEC4B37B923F4B(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x2BF5E63466422C38(func_62(1, 0)))
					{
						unk_0xC6612209077465DD(func_62(1, 0));
					}
					if (!unk_0x2BF5E63466422C38(func_62(1, 1)))
					{
						unk_0xC6612209077465DD(func_62(1, 1));
					}
					if (!unk_0xD4B321D9096B01FC(Local_131[2 /*18*/]))
					{
						func_63(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0xD960230552BC4165(Local_131[2 /*18*/], 0))
						{
							func_64(func_67(2), unk_0xACE5E491FC1B0D37(Local_131[2 /*18*/], 1), 0f);
							unk_0xB425E338F85508A5(func_62(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0xD4B321D9096B01FC(Local_131[3 /*18*/]))
					{
						func_63(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x2BF5E63466422C38(func_62(2, 1)))
					{
						unk_0xD06C31EF9A42C2B4(func_62(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x2BF5E63466422C38(func_62(3, 1)))
					{
						unk_0xD06C31EF9A42C2B4(func_62(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0xD4B321D9096B01FC(func_62(3, 0)))
					{
						func_64(func_67(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x2BF5E63466422C38(func_62(1, 0)))
						{
							unk_0xD06C31EF9A42C2B4(func_62(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x2BF5E63466422C38(func_62(1, 1)))
						{
							unk_0xD06C31EF9A42C2B4(func_62(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x2BF5E63466422C38(func_62(0, 1)))
						{
							unk_0xD06C31EF9A42C2B4(func_62(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0xD4B321D9096B01FC(Local_204[iVar1 /*18*/]))
						{
							unk_0x1BB4C3187097FCD7(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0xD4B321D9096B01FC(Local_131[iVar1 /*18*/]))
						{
							unk_0x1BB4C3187097FCD7(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_55();
					if ((unk_0xD960230552BC4165(Local_131[0 /*18*/], 0) && !unk_0x2BF5E63466422C38(func_62(0, 0))) && !unk_0x2BF5E63466422C38(func_62(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0xD67C82BBC9A488A6(func_62(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xD960230552BC4165(Local_131[2 /*18*/], 0) && !unk_0x2BF5E63466422C38(func_62(2, 0))) && !unk_0x2BF5E63466422C38(func_62(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0xD67C82BBC9A488A6(func_62(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0xD4B321D9096B01FC(iLocal_86) && !unk_0x2BF5E63466422C38(iLocal_86))
					{
						func_52(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x2BF5E63466422C38(func_62(1, 0)))
							{
								if (unk_0xC49563EAE7AACA6C(func_62(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_67(1));
								}
							}
							if (!unk_0x2BF5E63466422C38(func_62(1, 1)))
							{
								if (unk_0xC49563EAE7AACA6C(func_62(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_65(1));
								}
							}
							if (!unk_0x2BF5E63466422C38(func_62(0, 1)))
							{
								if (unk_0xC49563EAE7AACA6C(func_62(0, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_51(iLocal_86, func_65(0));
								}
							}
						}
						else
						{
							func_52(iLocal_86, func_67(1));
							func_52(iLocal_86, func_65(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_52(iLocal_86, func_67(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0xC49563EAE7AACA6C(func_62(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_65(2));
						}
						if (unk_0xC49563EAE7AACA6C(func_62(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_65(3));
						}
						if (unk_0xC49563EAE7AACA6C(func_62(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_51(iLocal_86, func_65(0));
						}
					}
					else
					{
						if (!unk_0xA2BC31158C8CEFD2(iLocal_619, 3))
						{
							unk_0xC6612209077465DD(Local_204[func_65(3) /*18*/]);
							unk_0xA1E7A40E1F56E511(&iLocal_619, 3);
						}
						if (!unk_0xA2BC31158C8CEFD2(iLocal_619, 2))
						{
							unk_0xC6612209077465DD(Local_204[func_65(2) /*18*/]);
							unk_0xA1E7A40E1F56E511(&iLocal_619, 2);
						}
						if (!unk_0xA2BC31158C8CEFD2(iLocal_619, 0))
						{
							unk_0xC6612209077465DD(Local_204[func_65(0) /*18*/]);
							unk_0xA1E7A40E1F56E511(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_51(iLocal_86, func_65(3));
						}
						else
						{
							func_52(iLocal_86, func_65(3));
						}
						func_52(iLocal_86, func_65(2));
						func_52(iLocal_86, func_65(0));
					}
					break;
			}
			func_50();
			break;
		
		case 3:
			func_55();
			if (unk_0xD960230552BC4165(iLocal_91, 0))
			{
				if (unk_0xB8D4A2BAA78AB950(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0x9927BD5F023FA79D());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0xD4B321D9096B01FC(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0xD4B321D9096B01FC(Local_131[0 /*18*/])) || !unk_0xD4B321D9096B01FC(Local_131[1 /*18*/]))) && (unk_0x9B35D07DCD0F0B43() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0x9B35D07DCD0F0B43() - iLocal_370) < 30000)
							{
								func_46(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0x9B35D07DCD0F0B43();
							}
						}
					}
					iVar2 = func_67(iVar0);
					if (!unk_0x2BF5E63466422C38(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_65(iVar0);
					}
					else
					{
						iVar3 = func_67(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x2BF5E63466422C38(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0x95ED3BD0F52D542A(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0x411C065ADB822CD9(Local_204[iVar2 /*18*/], -1794415470) != 1 && unk_0xBAA38708D7439CA7(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0x31A7662B885C7549(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x2BF5E63466422C38(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0x95ED3BD0F52D542A(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0x411C065ADB822CD9(Local_204[iVar3 /*18*/], -1794415470) != 1 && unk_0xBAA38708D7439CA7(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0x31A7662B885C7549(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x2BF5E63466422C38(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x2BF5E63466422C38(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0x95ED3BD0F52D542A(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x95ED3BD0F52D542A(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xD960230552BC4165(iLocal_91, 0))
											{
												if (unk_0x411C065ADB822CD9(Local_204[iVar2 /*18*/], -1273030092) != 1 && unk_0x411C065ADB822CD9(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0xDEB0AA30ABFDCF48(Local_204[iVar2 /*18*/], 3, 0);
													unk_0xDEB0AA30ABFDCF48(Local_204[iVar2 /*18*/], 1, 1);
													unk_0xDEB0AA30ABFDCF48(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0xF7D74EF517BDB7D0(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0xF7D74EF517BDB7D0(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0xF7D74EF517BDB7D0(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0xF7D74EF517BDB7D0(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x22C7063B80BCBEF1(Local_204[iVar2 /*18*/], func_45((3f * unk_0xD34AF93E9BCF12F0(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x2BF5E63466422C38(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0x5C0FAAC7D36B617B(Local_204[iVar2 /*18*/]))
									{
										unk_0x3A6FD57A8EC62253(Local_204[iVar2 /*18*/], 2, 0);
										unk_0xF0E9590A910B74BE(Local_204[iVar2 /*18*/], unk_0x0FA8183DAD2B3203(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x2BF5E63466422C38(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0x5C0FAAC7D36B617B(Local_204[iVar3 /*18*/]))
										{
											unk_0x3A6FD57A8EC62253(Local_204[iVar3 /*18*/], 2, 0);
											unk_0xF0E9590A910B74BE(Local_204[iVar3 /*18*/], unk_0x0FA8183DAD2B3203(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x5294582CE404D3F4(Local_204[iVar2 /*18*/], 0))
							{
								unk_0x2DCF88AC859255F3(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_52(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x2BF5E63466422C38(Local_204[iVar3 /*18*/]))
								{
									if (unk_0x5294582CE404D3F4(Local_204[iVar3 /*18*/], 0))
									{
										unk_0x2DCF88AC859255F3(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_52(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x2BF5E63466422C38(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x2BF5E63466422C38(Local_204[iVar3 /*18*/]))) && unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x7FB035B5755E076D(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x7FB035B5755E076D(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x7FB035B5755E076D(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x95ED3BD0F52D542A(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0xB425E338F85508A5(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x95ED3BD0F52D542A(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0xB425E338F85508A5(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 4:
			func_55();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					iVar5 = func_67(iVar0);
					if (!unk_0x2BF5E63466422C38(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_65(iVar0);
					}
					else
					{
						iVar6 = func_67(iVar0);
					}
					if (unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x2BF5E63466422C38(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x95ED3BD0F52D542A(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x411C065ADB822CD9(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x31A7662B885C7549(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x2BF5E63466422C38(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x95ED3BD0F52D542A(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0x411C065ADB822CD9(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x31A7662B885C7549(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x2BF5E63466422C38(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x2BF5E63466422C38(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0x95ED3BD0F52D542A(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x95ED3BD0F52D542A(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xD960230552BC4165(iLocal_91, 0))
								{
									fVar7 = func_45((70f - (unk_0xBBDA792448DB5A89((unk_0x9B35D07DCD0F0B43() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x9B35D07DCD0F0B43() - iLocal_85) > 4000)
									{
										unk_0xC247F145D09AA35C(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0xD960230552BC4165(Local_131[iVar8 /*18*/], 0) && !unk_0x2BF5E63466422C38(func_62(iVar8, 0))) && unk_0x95ED3BD0F52D542A(func_62(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0xC6612209077465DD(func_62(iVar8, 0));
												unk_0xF7D74EF517BDB7D0(func_62(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0x411C065ADB822CD9(Local_204[iVar5 /*18*/], -1273030092) != 1 && unk_0x411C065ADB822CD9(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0xDEB0AA30ABFDCF48(Local_204[iVar5 /*18*/], 3, 0);
										unk_0xDEB0AA30ABFDCF48(Local_204[iVar5 /*18*/], 1, 1);
										unk_0xDEB0AA30ABFDCF48(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0xF7D74EF517BDB7D0(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0xF7D74EF517BDB7D0(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0xF7D74EF517BDB7D0(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0xF7D74EF517BDB7D0(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x2BF5E63466422C38(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x5C0FAAC7D36B617B(Local_204[iVar5 /*18*/]))
							{
								unk_0x3A6FD57A8EC62253(Local_204[iVar5 /*18*/], 2, 0);
								unk_0xF0E9590A910B74BE(Local_204[iVar5 /*18*/], unk_0x0FA8183DAD2B3203(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x2BF5E63466422C38(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x5C0FAAC7D36B617B(Local_204[iVar6 /*18*/]))
								{
									unk_0x3A6FD57A8EC62253(Local_204[iVar6 /*18*/], 2, 0);
									unk_0xF0E9590A910B74BE(Local_204[iVar6 /*18*/], unk_0x0FA8183DAD2B3203(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_617, 10f))
				{
					func_43(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_50();
			func_35();
			break;
		
		case 6:
			if (func_44(iLocal_617, 1125515264))
			{
				func_43(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0x9591DE0F00127F2A(sLocal_373))
				{
					func_34(iVar0);
					if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/].f_2) && unk_0xCA7317DE7E0F89E9(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0x5294582CE404D3F4(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0x0975E9E48EA2CC7B(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0x3DEC1EF42CC05213(Local_204[iVar0 /*18*/]))
								{
									unk_0x2BBEC4B37B923F4B(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0x3DEC1EF42CC05213(Local_204[iVar0 /*18*/]))
							{
								unk_0x2BBEC4B37B923F4B(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0x7FB035B5755E076D(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0xF6FD8019402CF03B(Local_204[iVar0 /*18*/], sLocal_373, func_33(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0xF6FD8019402CF03B(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0x5D672CB011E20B28(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0x5D672CB011E20B28(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xF6DFA802A541589A(sLocal_373);
								if (unk_0x477937527657D0EE(sLocal_373))
								{
									unk_0xFE32E7362E20992B(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0x5D672CB011E20B28(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xB7F42BA261BF985E(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0xA2DB82364F08360E(Local_204[iVar0 /*18*/]) && func_32(Local_204[iVar0 /*18*/], unk_0x4D57D3E5ECE15A41(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x0975E9E48EA2CC7B(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0x2BBEC4B37B923F4B(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0x0975E9E48EA2CC7B(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x2BBEC4B37B923F4B(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0x5D672CB011E20B28(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0xB7F42BA261BF985E(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0xCFE0D93B7A6809C1(Local_204[iVar0 /*18*/]) && unk_0x57C8B4C1F3339B6E(unk_0x0FA8183DAD2B3203()))
				{
					func_188(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0xD4B321D9096B01FC(Local_131[iVar0 /*18*/]))
			{
				if (unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_131[iVar0 /*18*/], 0))
					{
						func_188(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(int iParam0, int iParam1)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0) && !unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		if (unk_0x7E6F0519746C2295(iParam0, iParam1))
		{
			if (unk_0x300C62F79A4441EB(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x300C62F79A4441EB(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x300C62F79A4441EB(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x300C62F79A4441EB(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA2BC31158C8CEFD2(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 3))
				{
					if (unk_0x79825B919DB9FB1C(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0)) > 0.9f)
					{
						unk_0x3B76114EC84D5812(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (unk_0x79825B919DB9FB1C(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x3B76114EC84D5812(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0x3B76114EC84D5812(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		iVar0 = func_65(iLocal_568);
		if (((unk_0xD4B321D9096B01FC(Local_131[iLocal_568 /*18*/]) && unk_0xD960230552BC4165(Local_131[iLocal_568 /*18*/], 0)) && unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/])) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x759DEE4D113EC07E(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x300C62F79A4441EB(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (unk_0x9B35D07DCD0F0B43() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0xF6FD8019402CF03B(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0x5D672CB011E20B28(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x300C62F79A4441EB(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0x0BD7E0FF5D98BD1C(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0x9B35D07DCD0F0B43();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0x9B35D07DCD0F0B43() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131.f_0)
		{
			iLocal_568 = 0;
		}
	}
}

void func_36(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x2BF5E63466422C38(Local_204[iParam0 /*18*/]) && !unk_0x2BF5E63466422C38(iLocal_86))
	{
		iVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0xDF29CF810DF94B60(Local_204[iParam0 /*18*/]) };
		fVar7 = func_40(Var4, Var1);
		if (unk_0x01CBD71E072E9F33(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_37(iParam0, iVar0);
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_39(iParam1))
			{
				unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_38(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xA1E7A40E1F56E511(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_38(int iParam0)
{
	return (iParam0 - 5);
}

bool func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_40(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_41(Param0) };
	Param3 = { func_41(Param3) };
	fVar0 = (unk_0x68862EAA0B66897C(Param3.f_1, Param3.f_0) - unk_0x68862EAA0B66897C(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_42(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x9591DE0F00127F2A(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xA2BC31158C8CEFD2(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(Local_131[iParam0 /*18*/]) && unk_0x7FB035B5755E076D(Local_131[iParam0 /*18*/]))
	{
		unk_0xBD22862A2C5FD6DF(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0x39A01A052D9B5FF0(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0xAA2276003B2ADF1B(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_65(iParam0);
		}
		else
		{
			iVar1 = func_67(iParam0);
		}
		if (unk_0xD4B321D9096B01FC(Local_204[iVar1 /*18*/]) && unk_0x7FB035B5755E076D(Local_204[iVar1 /*18*/]))
		{
			if (unk_0xD4B321D9096B01FC(Local_204[iVar1 /*18*/]))
			{
				unk_0x377C9F2989832369(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0x39A01A052D9B5FF0(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0xAA2276003B2ADF1B(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0x4F058F27442031CC(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xD4B321D9096B01FC(Local_131[iParam0 /*18*/]))
	{
		if (unk_0xD960230552BC4165(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x7FB035B5755E076D(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(func_62(iParam0, 0)))
	{
		if (!unk_0x2BF5E63466422C38(func_62(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_67(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x7FB035B5755E076D(func_62(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(func_62(iParam0, 1)))
	{
		if (!unk_0x2BF5E63466422C38(func_62(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_65(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x7FB035B5755E076D(func_62(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		if (((((unk_0xD4B321D9096B01FC(iParam1) && iParam0 != iParam1) && !unk_0x5EA23EAAAD4E34BF(unk_0x7F375072508F738F(iParam1))) && !unk_0x31337ABC07783F10(unk_0x7F375072508F738F(iParam1))) && !unk_0xDC118E11A4081E9A(unk_0x7F375072508F738F(iParam1))) && !unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam1)))
		{
			if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_49(iParam0, iParam1, iLocal_358, unk_0xACE5E491FC1B0D37(iParam1, 1), unk_0x762900E9B9F74FD4(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x16DECC52D9360F1E(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
					*uParam5 = unk_0xD2809C7F7FD79247(iParam1);
				}
			}
			if (!unk_0x7FB035B5755E076D(iParam0))
			{
				*uParam6 = unk_0x9B35D07DCD0F0B43();
			}
			else if ((unk_0x9B35D07DCD0F0B43() - *uParam6) > iParam10)
			{
				if ((func_48(iParam0, iParam1, 1) > fParam11 && unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!unk_0x93086679C0E859D8(*uParam2, 6f))
						{
							unk_0xBB65AAC660EECEA8(*uParam2, 6f, 0);
							unk_0x7FB505C34A14BAAA(*uParam2, 6f, 0, 0, 0, 0, 0, 0);
							unk_0xCB3446C6A91D1A78(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x5A2B7C446C0CF087(iParam0, *uParam3);
							unk_0x1ECAE5FB4DE78CF8(iParam0, 1084227584);
							unk_0xD32341B4ADEC0821(iParam0, func_45((unk_0xB8D4A2BAA78AB950(iParam1) + 10f), 10f, 60f));
							unk_0xB90231068DCFFBA1(iParam0, 1, 1, 0);
							*uParam6 = unk_0x9B35D07DCD0F0B43();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x9B35D07DCD0F0B43();
		}
	}
}

int func_47(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_48(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

int func_49(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	var uVar35;
	
	if (unk_0xD4B321D9096B01FC(iParam2))
	{
		unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &Var7, &Var10);
		unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x01CBD71E072E9F33((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x01CBD71E072E9F33((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x01CBD71E072E9F33((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x01CBD71E072E9F33(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x01CBD71E072E9F33(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xCB3446C6A91D1A78(iParam2, Param3, 1, 0, 0, 1);
		unk_0xF3D48447FACBBE72(iParam2, Param6, 2, 1);
		Var1 = { unk_0xC12F91346EA13947(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0xC12F91346EA13947(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0x370A50EE38672923(Var4, Var1, fVar22, 19, unk_0x0FA8183DAD2B3203(), 4);
		if (unk_0x19D3834206AE7960(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	bool bVar0;
	
	if ((unk_0x9B35D07DCD0F0B43() - iLocal_567) > 100)
	{
		if ((unk_0x9B35D07DCD0F0B43() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0xD4B321D9096B01FC(Local_204[iLocal_566 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0x5294582CE404D3F4(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0xF6FD8019402CF03B(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566), 3) && unk_0x79825B919DB9FB1C(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) > 0.5f) && unk_0x79825B919DB9FB1C(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0xE959A3F2DBA9EC7D("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0x0A41046A9C717367(-1, "SHUTTER_FLASH", unk_0xACE5E491FC1B0D37(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0x0A41046A9C717367(-1, "SHUTTER", unk_0xACE5E491FC1B0D37(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x0A41046A9C717367(-1, "FLASH", unk_0xACE5E491FC1B0D37(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0x9B35D07DCD0F0B43();
					}
					iLocal_567 = unk_0x9B35D07DCD0F0B43();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204.f_0)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_51(int iParam0, int iParam1)
{
	if (!unk_0x2BF5E63466422C38(Local_204[iParam1 /*18*/]) && !unk_0x2BF5E63466422C38(iParam0))
	{
		if (!unk_0x9B1F9CEC0CB28F35(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0x411C065ADB822CD9(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x845704CC8ADF1918(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x9B35D07DCD0F0B43() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0xF6FD8019402CF03B(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 3))
			{
				unk_0x5D672CB011E20B28(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
}

void func_52(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x2BF5E63466422C38(Local_204[iParam1 /*18*/]) && !unk_0x2BF5E63466422C38(iParam0))
	{
		Var0 = { unk_0xC12F91346EA13947(iParam0, func_54(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_53(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x411C065ADB822CD9(Local_204[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(Var0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(Var0, iParam1, iParam0);
				}
				if (unk_0x411C065ADB822CD9(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_53(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_41(unk_0xACE5E491FC1B0D37(iParam4, 1) - Param0) };
	iVar3 = unk_0x3BA2E0B9E14A8025(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0xC6612209077465DD(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0xD06C31EF9A42C2B4(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0xD06C31EF9A42C2B4(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x39A01A052D9B5FF0(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
			{
				unk_0xAA2276003B2ADF1B(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0x5294582CE404D3F4(Local_204[iVar0 /*18*/], 0))
			{
				unk_0xAA2276003B2ADF1B(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]) && !unk_0x5294582CE404D3F4(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_190(Local_204[iVar0 /*18*/], 1, 145);
			unk_0x058B6969CEED705F(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0xD960230552BC4165(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0x39A01A052D9B5FF0(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0xE3063EF8E0D6C8AD(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x58531110F2DD153B(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					unk_0xAA2276003B2ADF1B(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_131[iVar0 /*18*/].f_1 = func_56(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0x088577CF98F96D05(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0x058B6969CEED705F(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x6089156CDC87FE4B(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0x39A01A052D9B5FF0(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0xAA2276003B2ADF1B(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_56(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_57(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x78B310CB286001B8(uParam0) + 1;
	if (iParam4 || !unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_59(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xD4B321D9096B01FC(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x0FA8183DAD2B3203())
				{
				}
				else if (iParam2 && unk_0x7FA2061748BA645E(iVar2))
				{
					if (!unk_0x2BF5E63466422C38(iVar2) || iParam8)
					{
						if (unk_0xEBE4F888D9965006(unk_0x74D4E16E179B8F53(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x2BF5E63466422C38(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_59(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xBAA38708D7439CA7(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x300C62F79A4441EB(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xD4B321D9096B01FC(iVar0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			iVar0 = unk_0x30766BC434AF2797(iParam0, iParam1);
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x411C065ADB822CD9(iVar0, 451360105) == 1 || unk_0x411C065ADB822CD9(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(iParam0, 0), unk_0xACE5E491FC1B0D37(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_60(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x2BF5E63466422C38(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0x411C065ADB822CD9(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0xD06C31EF9A42C2B4(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x01CBD71E072E9F33((func_61(unk_0xD2809C7F7FD79247(Local_204[iParam0 /*18*/])) - func_61(fParam4))) > 10f)
		{
			if (unk_0x411C065ADB822CD9(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0xF671F163E3851D8B(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x9591DE0F00127F2A(sParam7))
					{
						if (!unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x79825B919DB9FB1C(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0xF6FD8019402CF03B(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x79825B919DB9FB1C(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x5D672CB011E20B28(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_61(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_62(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_67(iParam0) /*18*/];
	}
	return Local_204[func_65(iParam0) /*18*/];
}

void func_63(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = unk_0x847817A65E16621A(joaat("vader"), Param1, fParam4, 1, 1, 0);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0x847817A65E16621A(joaat("cavalcade2"), Param1, fParam4, 1, 1, 0);
		unk_0xA429E610637A53F5(Local_131[iParam0 /*18*/], 0);
	}
	unk_0x1ECAE5FB4DE78CF8(Local_131[iParam0 /*18*/], 1084227584);
	unk_0x704613B55607A27B(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0xD4B321D9096B01FC(func_62(iParam0, 0)))
		{
			func_64(func_67(iParam0), Param1, fParam4);
		}
		if (!unk_0xD4B321D9096B01FC(func_62(iParam0, 1)))
		{
			func_64(func_65(iParam0), Param1, fParam4);
		}
		if (!unk_0x2BF5E63466422C38(func_62(iParam0, 0)) && unk_0xD960230552BC4165(Local_131[iParam0 /*18*/], 0))
		{
			unk_0xB425E338F85508A5(func_62(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x2BF5E63466422C38(func_62(iParam0, 1)) && unk_0xD960230552BC4165(Local_131[iParam0 /*18*/], 0))
		{
			unk_0xB425E338F85508A5(func_62(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0xB90231068DCFFBA1(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_64(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0xDEB0AA30ABFDCF48(Local_204[iParam0 /*18*/], 1, 0);
	unk_0xCC94EE23853F38E4(Local_204[iParam0 /*18*/], 1);
	unk_0xDEB0AA30ABFDCF48(Local_204[iParam0 /*18*/], 0, 1);
	unk_0x53F3ED9BDCD06444(Local_204[iParam0 /*18*/], 3);
	unk_0xB0675208A25FD4B5(Local_204[iParam0 /*18*/], 1);
	unk_0xDEB0AA30ABFDCF48(Local_204[iParam0 /*18*/], 17, 1);
	unk_0x3A6FD57A8EC62253(Local_204[iParam0 /*18*/], 2, 0);
	unk_0x9D3FE4786B8925D2(Local_204[iParam0 /*18*/], 0);
	unk_0x7D81B41B134BD6F2(Local_204[iParam0 /*18*/], 1);
	unk_0x7FD049FE087DEDB4(Local_204[iParam0 /*18*/], 100);
	unk_0xBBBC3652FD8CF64D(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x1DB66BD2267055C0(Local_204[iParam0 /*18*/], 101, 1);
	unk_0x1DB66BD2267055C0(Local_204[iParam0 /*18*/], 185, 0);
	unk_0x0BBBAC4546BFE280(Local_204[iParam0 /*18*/], 300, 0);
	unk_0x0453EBC0FB8D8A80(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0x04F5A8AA60EC662B(Local_204[iParam0 /*18*/], 1);
		unk_0x0BBBAC4546BFE280(Local_204[iParam0 /*18*/], 500, 0);
	}
	unk_0xB9B72194C00AE3EB(Local_204[iParam0 /*18*/], 1);
	unk_0xDEB0AA30ABFDCF48(Local_204[iParam0 /*18*/], 2, 1);
	unk_0x4465F4659EE7FAE4(Local_204[iParam0 /*18*/], 2f);
	unk_0x9D3FE4786B8925D2(Local_204[iParam0 /*18*/], 0);
	unk_0xE62BE0EB9BC772E3(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0x7187764DB5121FC9(joaat("prop_pap_camera_01"), unk_0x0E516C24C87F5D0C(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x01DF2D3988024DB4(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xDD454299E9E58208(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0xD4B321D9096B01FC(Local_204[0 /*18*/].f_2))
	{
		unk_0x2BBEC4B37B923F4B(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0x35D31BEBAFD53DE6(Local_204[iParam0 /*18*/]);
}

int func_65(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_66(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_67(int iParam0)
{
	return iParam0 * 2;
}

void func_68(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_69()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		bVar0 = false;
		if (func_72())
		{
			if (unk_0xD4B321D9096B01FC(func_71()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(func_71(), 1), Local_63) < 5f && unk_0xB8D4A2BAA78AB950(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xD960230552BC4165(iLocal_91, 0))
		{
			if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0) && unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0x9927BD5F023FA79D());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0x9927BD5F023FA79D());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!unk_0x7E6F0519746C2295(iLocal_86, iLocal_91))
			{
				if (unk_0x3DAA08BFD9A801FD(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0x7E6F0519746C2295(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xD960230552BC4165(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xD960230552BC4165(iLocal_91, 0) && func_70(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xD960230552BC4165(iLocal_91, 0) && unk_0xE294A1321110B3E9(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0xBAC643F143880136(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (((unk_0x812D517F863583BE(iParam0, 0, 7000) || unk_0x812D517F863583BE(iParam0, 3, 30000)) || unk_0x812D517F863583BE(iParam0, 2, 30000)) || unk_0x812D517F863583BE(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/])) && !unk_0x2BF5E63466422C38(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_72()
{
	if (unk_0xD960230552BC4165(iLocal_91, 0))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_86))
		{
			if (unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0) && unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (func_74(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]) || unk_0xF4B969E0807E76C7(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
		if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 7))
		{
			unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x6C979EE77983FC04(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6) && !unk_0x64F825FCEFC07239(unk_0x0FA8183DAD2B3203())) && unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iParam0) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iParam0)) && (func_75(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0xACE5E491FC1B0D37(iParam0, 1)) < 100f)) && unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0x8ECD8ABC24795DA1(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0xD4B321D9096B01FC(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_75(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0xACE5E491FC1B0D37(iParam3, 1) };
	Var3 = { unk_0xC12F91346EA13947(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_76(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_76(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_77()
{
	if (iLocal_47 != 11)
	{
		if (unk_0x39A01A052D9B5FF0(uLocal_362))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_362);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_363))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_363);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_360))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
	{
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 3)
		{
			if (!func_80())
			{
				func_78("REPAP_COP1");
			}
		}
		else
		{
			func_188(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_78(char* sParam0)
{
	if ((unk_0x9B35D07DCD0F0B43() - iLocal_667) > 5000)
	{
		if (!func_79())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
}

int func_79()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0x9B35D07DCD0F0B43() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0x9B35D07DCD0F0B43() - iLocal_356) > 4000)
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6) && unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_188(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0x9B35D07DCD0F0B43() - iLocal_354) > 15000)
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6) && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = unk_0x9B35D07DCD0F0B43();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0x9B35D07DCD0F0B43();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0x9B35D07DCD0F0B43();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0x9B35D07DCD0F0B43();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_81()
{
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		unk_0x7D81B41B134BD6F2(iLocal_86, 1);
		unk_0x9B54A3CCAAB4F5FB(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0x1DB66BD2267055C0(iLocal_86, 317, 1);
			unk_0xCC94EE23853F38E4(iLocal_86, 0);
		}
	}
	func_85(-1, 0);
	func_82();
	unk_0x3887A21BEA2A4646(62);
	func_281();
}

void func_82()
{
	func_83();
}

int func_83()
{
	if (func_84(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_84(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_85(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_102(iParam0))
	{
		func_101(iParam0, iParam1);
		if (!func_100(51))
		{
			func_96("RE_REWARD", 1, 0, 4000, 10000, func_99(), 0, 138, 0);
			func_95(51);
		}
		if (func_94(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_93(iParam0, iParam1) != 322)
		{
			func_87(func_93(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_86(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_86(7);
			}
			else
			{
				func_86(1);
			}
		}
	}
}

void func_86(int iParam0)
{
	Global_111546 = iParam0;
}

void func_87(int iParam0, var uParam1, var uParam2)
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
		func_91((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_88();
	}
}

void func_88()
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
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_111283, 0);
					unk_0xA1E7A40E1F56E511(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_111296, 1);
	unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_111279, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_111297, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_111280, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_111298, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_111281, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_111299, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_111282, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_111286, 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_111303, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_111304, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853))
	{
		func_90(13, unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853));
	}
	if (!unk_0x8FA5860B1A123955())
	{
		if (!Global_76577)
		{
			if (func_89() == 2 == 0 && !unk_0x393E9918BC37548A())
			{
				if (unk_0x56BDC2B0945F6D74())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_83();
				}
			}
		}
	}
}

int func_89()
{
	return Global_30736;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_92()
{
	return Global_1312745;
}

int func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_97(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_97(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2553916E420E8EF0(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0x2553916E420E8EF0(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_98();
	}
}

void func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_99()
{
	func_25();
	switch (Global_111560.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_103()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0037AFCBDC61F351(), 64);
	uVar16 = func_104(Var0);
	return uVar16;
}

int func_104(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xA8C462EF7D9DC564(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_105()
{
	if (Global_30972)
	{
		func_86(4);
		return 1;
	}
	return 0;
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (unk_0x39A01A052D9B5FF0(uLocal_360))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x2BF5E63466422C38(iLocal_86))
			{
				unk_0xF0E9590A910B74BE(iLocal_86, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
				{
					if (unk_0x7FB035B5755E076D(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_204[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 900f)
					{
						if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x377C9F2989832369(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x4F058F27442031CC(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0x39A01A052D9B5FF0(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0xAA2276003B2ADF1B(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0xD4B321D9096B01FC(Local_131[iVar0 /*18*/]))
				{
					if (unk_0x7FB035B5755E076D(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_131[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 900f)
					{
						unk_0xBD22862A2C5FD6DF(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0x39A01A052D9B5FF0(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0xAA2276003B2ADF1B(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if ((unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/])) && !unk_0xF4B969E0807E76C7(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_52(unk_0x0FA8183DAD2B3203(), iVar0);
					if (unk_0x7FB035B5755E076D(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_204[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 2500f)
					{
						if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x377C9F2989832369(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x4F058F27442031CC(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(func_71(), 1)) < 100f)
				{
					iVar2 = unk_0xBAC643F143880136(0, 3);
					if (func_24() == 1)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 7);
						func_23(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[6 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 7, func_71(), "PAP2ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[7 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 8, func_71(), "PAP3ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[8 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = unk_0xBAC643F143880136(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = unk_0xBAC643F143880136(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (unk_0xD4B321D9096B01FC(Local_395[iVar2 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_73())
			{
				func_200();
				func_281();
			}
			if (iVar1 == 0)
			{
				func_281();
			}
			break;
	}
}

void func_107(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
			{
				unk_0xC6612209077465DD(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x39A01A052D9B5FF0(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0xAA2276003B2ADF1B(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x2BF5E63466422C38(iLocal_86))
				{
					if (unk_0x5294582CE404D3F4(Local_204[iVar0 /*18*/], 0))
					{
						unk_0x2DCF88AC859255F3(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_52(iLocal_86, iVar0);
					}
				}
				else if (unk_0x411C065ADB822CD9(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xDE8E5CE8855FA963(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x7FB035B5755E076D(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_204[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_204[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 400f)
			{
				unk_0x4F058F27442031CC(&(Local_204[iVar0 /*18*/]));
				if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0x377C9F2989832369(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0x7FB035B5755E076D(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(Local_131[iVar0 /*18*/], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 2500f) && func_58(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				unk_0xF25956700ADFD77F(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0x39A01A052D9B5FF0(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0xAA2276003B2ADF1B(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0xD4B321D9096B01FC(iLocal_86))
	{
		if (unk_0x7FB035B5755E076D(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_63) > 2500f)
		{
			unk_0x0FFB05DA97E810B5(&iLocal_86);
			func_281();
		}
	}
	if (func_73() || func_74(iLocal_86, 1, 1))
	{
		func_188(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0x39A01A052D9B5FF0(uLocal_360))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_360);
			}
			if (unk_0x39A01A052D9B5FF0(uLocal_361))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_361);
			}
			if (!unk_0x2BF5E63466422C38(iLocal_86))
			{
				unk_0xC6612209077465DD(iLocal_86);
				unk_0x4465F4659EE7FAE4(iLocal_86, 3f);
			}
			func_108();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
							{
								unk_0xC6612209077465DD(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204.f_0)
				{
					if (unk_0xD4B321D9096B01FC(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
						{
							unk_0xC6612209077465DD(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0xD960230552BC4165(iLocal_91, 0) && unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0xBAA38708D7439CA7(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xA12E1659DEF57244(&uVar2);
					unk_0xF4A509710AB34EEF(0, iLocal_91, 0);
					unk_0xD67C82BBC9A488A6(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x1C9790213C8C7FC4(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0x522D78AE25E882BB(0, iLocal_91, unk_0xACE5E491FC1B0D37(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x3D1E9B6872B0AE00(0, iLocal_91, 0);
					unk_0xD06C31EF9A42C2B4(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x15A7B753872B3CE3(uVar2);
					unk_0xC544A8E1032AC1CF(iLocal_86, uVar2);
					unk_0x78829A259A6975CD(&uVar2);
				}
				else
				{
					unk_0xA12E1659DEF57244(&uVar3);
					unk_0xF4A509710AB34EEF(0, iLocal_91, 0);
					unk_0x24BD9CEBA5D40F00(0, iLocal_91, 15f, 786468);
					unk_0x15A7B753872B3CE3(uVar3);
					unk_0xC544A8E1032AC1CF(iLocal_86, uVar3);
					unk_0x78829A259A6975CD(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x5294582CE404D3F4(iLocal_86, 0))
				{
					unk_0x2DCF88AC859255F3(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xF0E9590A910B74BE(iLocal_86, unk_0x0FA8183DAD2B3203(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xA12E1659DEF57244(&uVar4);
					unk_0xD06C31EF9A42C2B4(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x15A7B753872B3CE3(uVar4);
					unk_0xC544A8E1032AC1CF(iLocal_86, uVar4);
					unk_0x78829A259A6975CD(&uVar4);
				}
				else
				{
					unk_0xDE8E5CE8855FA963(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_281();
			}
			break;
	}
}

void func_108()
{
	Global_19671 = 0;
	func_109();
}

void func_109()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

void func_110()
{
	func_108();
	if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0xC6612209077465DD(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_200();
			func_188(10);
		}
		unk_0xDB889DCC8B0139E6(iLocal_86, -2065892691);
	}
	else
	{
		func_200();
		func_188(10);
	}
}

void func_111()
{
	var uVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_147();
			if (!unk_0x2BF5E63466422C38(iLocal_86))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_360))
				{
					uLocal_360 = func_190(iLocal_86, 0, 145);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_363))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_363);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_362))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_362);
				}
				unk_0xC6612209077465DD(iLocal_86);
				unk_0xA12E1659DEF57244(&uVar0);
				unk_0x3D1E9B6872B0AE00(0, iLocal_91, 0);
				unk_0xD06C31EF9A42C2B4(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x15A7B753872B3CE3(uVar0);
				unk_0xC544A8E1032AC1CF(iLocal_86, uVar0);
				unk_0x78829A259A6975CD(&uVar0);
				if (unk_0xFF8C14957DF16F4D(iLocal_86))
				{
					unk_0x91F590A9823EB649(iLocal_86);
				}
				func_108();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_79() && !unk_0x2BF5E63466422C38(iLocal_86))
			{
				if (unk_0xC49563EAE7AACA6C(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2BF5E63466422C38(iLocal_86))
			{
				func_146(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_113(func_24(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_79() && !unk_0x2BF5E63466422C38(iLocal_86))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_112())
				{
					func_81();
				}
			}
			break;
	}
}

int func_112()
{
	return 1;
}

void func_113(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) == 3)
	{
		return;
	}
	if (func_145(iParam0) == 4)
	{
		return;
	}
	func_114(func_145(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x367DA79FE620711B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x41410A69AD49AFCD(iVar1, iVar0, 1);
	}
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_144();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_143(99, 1);
					func_142(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_142(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_142(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_128(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_123(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_123(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB4D15BCA2CC28DF9())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_123(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_122(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_143(95, iParam3);
					break;
				
				case 1:
					func_143(97, iParam3);
					break;
				
				case 2:
					func_143(96, iParam3);
					break;
			}
			func_143(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_117(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_117(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_142(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_142(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_142(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_116(iParam0);
	if (Global_41396 == 15)
	{
		func_115(0);
	}
	return 1;
}

void func_115(bool bParam0)
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
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_117(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_91(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_91(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_91(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_91(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_120(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_120(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_120(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_120(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_120(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_120(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0) || unk_0xA2BC31158C8CEFD2(Global_2097152[func_119() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		unk_0x3B76114EC84D5812(&(Global_2097152[func_119() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x6C607B5286DEE8D9("COUP_RED");
		unk_0x0AC9F8E1AFCEC860(func_118(iParam0));
		unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_119()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_121(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_92();
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

void func_122(int iParam0)
{
	func_143(93, iParam0);
	func_143(29, iParam0);
	func_143(30, iParam0);
}

bool func_123(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_125(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_125(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_125(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_125(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x71EC776E812C6A0A();
		iVar1 = func_124(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x71EC776E812C6A0A();
		iVar3 = func_124(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x71EC776E812C6A0A();
		iVar5 = func_124(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x71EC776E812C6A0A();
		iVar7 = func_124(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x71EC776E812C6A0A();
		iVar9 = func_124(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x71EC776E812C6A0A();
		iVar11 = func_124(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0);
	}
	return unk_0xA2BC31158C8CEFD2(Global_2097152[func_119() /*10828*/].f_6168.f_10, iParam0);
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_121(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar1 = func_127(iParam0, iParam1);
	uVar2 = func_126(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_128(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x17A6988567C0F4A8(27))
	{
		return 0;
	}
	if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
		func_90(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_129(27, 1);
	return 1;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_130(iParam0, iParam1);
}

int func_130(int iParam0, int iParam1)
{
	if (func_17(14) && !func_141(iParam0))
	{
		return 0;
	}
	if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_140(&Global_4269915))
	{
		if (func_138(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_131(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xA123C027757634FD(iParam0))
		{
			return 0;
		}
		if (unk_0x17A6988567C0F4A8(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	func_134(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_132(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_132(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_133(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_135(uParam0, iVar0);
		iVar0++;
	}
	func_136(uParam0, (Global_4269914 - 0.5f));
}

void func_135(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_136(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_137(var uParam0)
{
	return uParam0->f_80;
}

bool func_138(var uParam0, int iParam1)
{
	return func_139(uParam0, iParam1) != -1;
}

int func_139(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_144()
{
	int iVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_145(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_146(bool bParam0)
{
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0x9B1F9CEC0CB28F35(iLocal_86, unk_0x0FA8183DAD2B3203(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0xC6612209077465DD(iLocal_86);
				unk_0x6E2920E14F5F962C(iLocal_86, unk_0x0FA8183DAD2B3203(), -1, 16, 2);
				unk_0xA12E1659DEF57244(&uLocal_620);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 16, 2);
				unk_0x15A7B753872B3CE3(uLocal_620);
				unk_0xC544A8E1032AC1CF(iLocal_86, uLocal_620);
				unk_0x78829A259A6975CD(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0x411C065ADB822CD9(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!unk_0xF6FD8019402CF03B(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x79825B919DB9FB1C(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0xF6FD8019402CF03B(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x79825B919DB9FB1C(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0xF6FD8019402CF03B(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x79825B919DB9FB1C(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_147()
{
	if (unk_0x39A01A052D9B5FF0(uLocal_364))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_364);
	}
}

void func_148()
{
	var uVar0;
	
	if (unk_0xD960230552BC4165(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xD960230552BC4165(iLocal_91, 0))
				{
					func_147();
					func_152(1, 1, 0, 0, 0, 0);
					if (unk_0x39A01A052D9B5FF0(uLocal_362))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_362);
					}
					if (unk_0x39A01A052D9B5FF0(uLocal_360))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_360);
					}
					if (unk_0x39A01A052D9B5FF0(uLocal_361))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_361);
					}
					if (unk_0xFF8C14957DF16F4D(iLocal_86))
					{
						unk_0x91F590A9823EB649(iLocal_86);
					}
					func_150();
					if (!unk_0x2BF5E63466422C38(iLocal_86))
					{
						unk_0x33BF981A2389AF13(iLocal_86, unk_0xC12F91346EA13947(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x33BF981A2389AF13(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_149(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_113(func_24(), 1, 750, 0, 1);
					if (!unk_0x2BF5E63466422C38(iLocal_86))
					{
						unk_0x33BF981A2389AF13(iLocal_86, unk_0xC12F91346EA13947(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0xCFEC09B98C6C5993(iLocal_86, 0, 0);
					}
					unk_0x33BF981A2389AF13(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_79() && !unk_0x2BF5E63466422C38(iLocal_86))
				{
					unk_0xA12E1659DEF57244(&uVar0);
					unk_0x3D1E9B6872B0AE00(0, iLocal_91, 0);
					unk_0xD06C31EF9A42C2B4(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x15A7B753872B3CE3(uVar0);
					unk_0xC544A8E1032AC1CF(iLocal_86, uVar0);
					unk_0x78829A259A6975CD(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (!unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
							func_152(0, 1, 0, 0, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xD960230552BC4165(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x3D1E9B6872B0AE00(unk_0x0FA8183DAD2B3203(), iLocal_91, 0);
					unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0xD960230552BC4165(iLocal_91, 0) && !unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
				{
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
					func_152(0, 1, 0, 0, 0, 0);
					unk_0x54B5C3A13D3588F0(iLocal_91, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_112())
					{
						if (!bLocal_368)
						{
							if (!func_100(19))
							{
								func_96("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_95(19);
							}
						}
						func_81();
					}
				}
				break;
			}
	}
}

bool func_149(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_150()
{
	Global_19671 = 0;
	func_151();
}

void func_151()
{
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0xE4F88BFF8FB3D84C();
		Global_21816 = 0;
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_152(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_159(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_14())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_158(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_159(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_158(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_156(unk_0x7C7787D2D7139A85())) && !func_154(unk_0x7C7787D2D7139A85(), 0)) && !func_153()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_156(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_153()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_154(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_155(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_155(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_92();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_156(int iParam0)
{
	if (func_154(iParam0, 0))
	{
		return 1;
	}
	if (func_157())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_158(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_159(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

void func_160()
{
	if (Global_3 || bLocal_70)
	{
		unk_0xAC5263AEA7D6AA8A(0.7f);
	}
	if (bLocal_368 && !unk_0x2BF5E63466422C38(iLocal_86))
	{
		if (!func_181(iLocal_86))
		{
			if (!unk_0x39A01A052D9B5FF0(uLocal_360))
			{
				uLocal_360 = func_190(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_72())
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_362))
				{
					uLocal_362 = func_56(Local_53, 1);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_363))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_363))
				{
					uLocal_363 = func_56(Local_56, 1);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_362))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_362);
				}
			}
			if (unk_0x39A01A052D9B5FF0(uLocal_360))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_360);
			}
		}
		if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
		{
			if ((unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0)) && func_180(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				unk_0xE5C667CF3B4642D2(iLocal_91, 1, 1);
				unk_0x54B5C3A13D3588F0(iLocal_91, 1);
				unk_0x0051275ADD67B49D(iLocal_91, 0, 0);
			}
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_363) && !unk_0x5294582CE404D3F4(iLocal_86, 0))
		{
			if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_188(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_72() && func_179(1, 1, 1))
			{
				if (unk_0x42A24CB7B8A08E11(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
			{
				if (unk_0x411C065ADB822CD9(iLocal_86, -1794415470) != 1)
				{
					unk_0x31A7662B885C7549(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_72() && func_179(1, 1, 1))
			{
				if (unk_0x42A24CB7B8A08E11(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
		}
		func_175(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_72())
			{
				if (unk_0xF6FD8019402CF03B(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xF6FD8019402CF03B(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xC6612209077465DD(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xB7F4DA52DE3AAF24(0.5f);
					iLocal_369++;
				}
				if (!func_174())
				{
					func_169();
				}
			}
			break;
		
		case 1:
			if (!func_80())
			{
				if (func_72())
				{
					if (!func_79())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_80())
			{
				if (func_72())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_165("REPAP_HOME1", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_24() == 0)
			{
				if (func_165("REPAP_HOME1M", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_165("REPAP_HOME1F", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			else if (func_165("REPAP_HOME1T", (func_168() && !func_80())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_165("REPAP_HOME1L", (func_168() && !func_80())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_80())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_168())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_165("REPAP_HOME2L", (func_168() && !func_80())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_165("REPAP_HOME3", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_165("REPAP_HOME4", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_165("REPAP_NOBAN", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_80();
			break;
		
		case 100:
			if (func_162(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_189("");
				func_188(3);
			}
			break;
	}
	if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
	{
		func_77();
	}
	if (func_24() == 2)
	{
		if ((func_161() && !func_174()) && iLocal_47 != 8)
		{
			if (!unk_0x2BF5E63466422C38(iLocal_86))
			{
				if (unk_0xC49563EAE7AACA6C(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x266F39A2B4FE04D0(iLocal_86, unk_0x85E4D364E5F296FC(unk_0x7C7787D2D7139A85())))
					{
						unk_0x3B1D4A59B3B6B42C(iLocal_86, unk_0x85E4D364E5F296FC(unk_0x7C7787D2D7139A85()));
					}
					func_108();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_161()
{
	return Global_30971;
}

int func_162(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x572062A62138FBA2(0, 71, 1);
	unk_0x572062A62138FBA2(0, 72, 1);
	unk_0x572062A62138FBA2(0, 76, 1);
	unk_0x572062A62138FBA2(0, 73, 1);
	unk_0x572062A62138FBA2(0, 59, 1);
	unk_0x572062A62138FBA2(0, 60, 1);
	if (bParam5)
	{
		unk_0x572062A62138FBA2(0, 75, 1);
	}
	unk_0x572062A62138FBA2(0, 80, 1);
	if (!bParam6)
	{
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
	}
	unk_0x572062A62138FBA2(0, 74, 1);
	unk_0x572062A62138FBA2(0, 86, 1);
	unk_0x572062A62138FBA2(0, 81, 1);
	unk_0x572062A62138FBA2(0, 82, 1);
	unk_0x572062A62138FBA2(0, 138, 1);
	unk_0x572062A62138FBA2(0, 136, 1);
	unk_0x572062A62138FBA2(0, 114, 1);
	unk_0x572062A62138FBA2(0, 107, 1);
	unk_0x572062A62138FBA2(0, 110, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 87, 1);
	unk_0x572062A62138FBA2(0, 88, 1);
	unk_0x572062A62138FBA2(0, 113, 1);
	unk_0x572062A62138FBA2(0, 115, 1);
	unk_0x572062A62138FBA2(0, 116, 1);
	unk_0x572062A62138FBA2(0, 117, 1);
	unk_0x572062A62138FBA2(0, 118, 1);
	unk_0x572062A62138FBA2(0, 119, 1);
	unk_0x572062A62138FBA2(0, 131, 1);
	unk_0x572062A62138FBA2(0, 132, 1);
	unk_0x572062A62138FBA2(0, 123, 1);
	unk_0x572062A62138FBA2(0, 126, 1);
	unk_0x572062A62138FBA2(0, 129, 1);
	unk_0x572062A62138FBA2(0, 130, 1);
	unk_0x572062A62138FBA2(0, 133, 1);
	unk_0x572062A62138FBA2(0, 134, 1);
	unk_0xCD00E3BA36117D4B();
	func_163(iParam0);
	if ((unk_0x9B35D07DCD0F0B43() - Global_29) > 500)
	{
		unk_0x784753B14715F27F(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9B35D07DCD0F0B43();
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x01CBD71E072E9F33(unk_0xB8D4A2BAA78AB950(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_163(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		if (unk_0x270391FCE2D64F64(iParam0))
		{
			if (unk_0x9131E47288B6D66E(iParam0))
			{
				unk_0xDF5180225AFEE790(iParam0, 0);
			}
		}
	}
}

int func_164(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_165(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_167(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_79())
				{
					iLocal_81 = unk_0x9B35D07DCD0F0B43();
				}
			}
			else if ((unk_0x9B35D07DCD0F0B43() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_166() };
		func_150();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_166()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x8CD683A755F4B25E();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x005AF94672136563(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x005AF94672136563(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_167(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_168()
{
	if (bLocal_368)
	{
		if (unk_0xD960230552BC4165(iLocal_91, 0))
		{
			if (func_72())
			{
				return 1;
			}
		}
		if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0x5294582CE404D3F4(iLocal_86, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_72();
	}
	return 0;
}

void func_169()
{
	if (func_24() == 2)
	{
		if (!unk_0x39A01A052D9B5FF0(uLocal_364))
		{
			func_172();
			uLocal_364 = func_171(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xD1773DD05FE2AB54(uLocal_364, 269);
			func_170();
		}
	}
}

void func_170()
{
	if (!func_174())
	{
		if (func_24() == 2)
		{
			Global_30971 = 1;
		}
	}
}

var func_171(struct<3> Param0, int iParam3)
{
	return func_56(Param0, iParam3);
}

void func_172()
{
	if (func_24() == 2)
	{
		if (!Global_30973)
		{
			func_173("CULT_BLIP_HELP", -1);
			Global_30973 = 1;
		}
	}
}

void func_173(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_174()
{
	if (Global_111560.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_175(bool bParam0)
{
	if (unk_0xD960230552BC4165(iLocal_91, 0) && !unk_0x2BF5E63466422C38(iLocal_86))
	{
		if (func_72())
		{
			if (bParam0)
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_362))
				{
					uLocal_362 = func_56(Local_53, 1);
				}
			}
			if (unk_0x39A01A052D9B5FF0(uLocal_360))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_360);
			}
			if (unk_0x39A01A052D9B5FF0(uLocal_361))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_361);
			}
		}
		else
		{
			if (unk_0x39A01A052D9B5FF0(uLocal_362))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_362);
			}
			if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_361))
				{
					uLocal_361 = func_176(iLocal_91, 0, 0);
				}
			}
			if (!unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_360))
				{
					uLocal_360 = func_190(iLocal_86, 0, 145);
				}
			}
			else if (unk_0x39A01A052D9B5FF0(uLocal_360))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_360);
			}
		}
	}
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	return func_177(iParam0, !bParam1, bParam2);
}

int func_177(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_57(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_57(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_57(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x78B310CB286001B8(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0xBAA38708D7439CA7(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDE53EA8358302CB4())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (bParam0)
		{
			if (unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) != unk_0x0FA8183DAD2B3203())
				{
					return 0;
				}
			}
		}
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x7BB084963FF20373(iVar0) < 0.95f || unk_0x7BB084963FF20373(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!unk_0xC22C143313E77BB2(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		if (unk_0xBAA38708D7439CA7(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0xBAA38708D7439CA7(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0xBAA38708D7439CA7(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xBAA38708D7439CA7(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (unk_0x266F39A2B4FE04D0(iParam0, unk_0x85E4D364E5F296FC(unk_0x7C7787D2D7139A85())))
	{
		if (!unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x91F590A9823EB649(iParam0);
		}
		return 1;
	}
	else if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0x3B1D4A59B3B6B42C(iParam0, unk_0x85E4D364E5F296FC(unk_0x7C7787D2D7139A85()));
	}
	return 0;
}

void func_182()
{
	if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xD960230552BC4165(iLocal_91, 0))
	{
		if (!unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 1))
		{
			if (unk_0x411C065ADB822CD9(iLocal_86, -1794415470) != 1)
			{
				unk_0x31A7662B885C7549(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0xD4B321D9096B01FC(func_71()) && unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iLocal_86, 1), unk_0xACE5E491FC1B0D37(func_71(), 1)) < 100f) && (unk_0xB8D4A2BAA78AB950(iLocal_91) < 5f || !unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0xF6FD8019402CF03B(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x7E6F0519746C2295(iLocal_86, iLocal_91))
				{
					unk_0x5D672CB011E20B28(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0xF6FD8019402CF03B(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x7E6F0519746C2295(iLocal_86, iLocal_91))
			{
				unk_0x5D672CB011E20B28(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0xF6FD8019402CF03B(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xF6FD8019402CF03B(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x7E6F0519746C2295(iLocal_86, iLocal_91))
		{
			unk_0xC6612209077465DD(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0xD4B321D9096B01FC(func_71()) && !unk_0x2BF5E63466422C38(func_71()))
					{
						func_23(&Local_395, 4);
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_108();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xB7F4DA52DE3AAF24(0.2f);
						unk_0xCC94EE23853F38E4(iLocal_86, 1);
						unk_0x9B54A3CCAAB4F5FB(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0x7187764DB5121FC9(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0x8C85E8C71AD74415(iLocal_358, 0, 0);
						unk_0x2BBEC4B37B923F4B(iLocal_358, 0, 0);
						unk_0x860A5CC30A0EF207(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_184();
				if (!unk_0x42A24CB7B8A08E11(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0x9B35D07DCD0F0B43();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0xD4B321D9096B01FC(func_71()) && unk_0x9B69E0F5342BA1A8(func_71(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_79())
					{
						bLocal_669 = true;
					}
					if (unk_0xD4B321D9096B01FC(func_71()))
					{
						if (!unk_0x9B69E0F5342BA1A8(func_71(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_80())
					{
						if (!func_183())
						{
							func_184();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_164("REPAP_RES1"))
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT3M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT3F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT3T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
								}
							}
							break;
						
						case 5:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT4M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT4F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT4T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
								}
							}
							break;
						
						case 6:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT5M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT5F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT5T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
								}
							}
							break;
						
						case 7:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x9B35D07DCD0F0B43();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x9B35D07DCD0F0B43() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!unk_0xD4B321D9096B01FC(func_71()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
					func_150();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_72())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0x9B35D07DCD0F0B43();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_72())
				{
					func_189("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_188(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_175(0);
	}
}

int func_183()
{
	int iVar0;
	
	iVar0 = func_30();
	if ((unk_0x9B35D07DCD0F0B43() - iLocal_666) > 5000)
	{
		if (unk_0xD4B321D9096B01FC(iLocal_91) && unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0x9B35D07DCD0F0B43() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0x9B35D07DCD0F0B43();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x9B35D07DCD0F0B43();
				return 1;
			}
		}
	}
	return 0;
}

void func_184()
{
	int iVar0;
	
	if ((unk_0x9B35D07DCD0F0B43() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x2BF5E63466422C38(iLocal_86) && unk_0xD4B321D9096B01FC(func_71())) && !unk_0x2BF5E63466422C38(func_71()))
		{
			if (unk_0xD34AF93E9BCF12F0(Local_63, unk_0xACE5E491FC1B0D37(func_71(), 1), 1) < 8f)
			{
				iVar0 = unk_0xBAC643F143880136(0, 5);
				func_23(&Local_395, 4);
				func_23(&Local_395, 5);
				func_23(&Local_395, 6);
				func_23(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
						if (unk_0xD4B321D9096B01FC(Local_395[4 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
								iLocal_565 = unk_0xBAC643F143880136(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
						if (unk_0xD4B321D9096B01FC(Local_395[4 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
								iLocal_565 = unk_0xBAC643F143880136(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_22(&Local_395, 5, func_71(), "PAP2", 0, 1);
						if (unk_0xD4B321D9096B01FC(Local_395[5 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
								iLocal_565 = unk_0xBAC643F143880136(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_22(&Local_395, 6, func_71(), "PAP3", 0, 1);
						if (unk_0xD4B321D9096B01FC(Local_395[6 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
								iLocal_565 = unk_0xBAC643F143880136(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_22(&Local_395, 7, func_71(), "PAP4", 0, 1);
						if (unk_0xD4B321D9096B01FC(Local_395[7 /*10*/]) && !unk_0x2BF5E63466422C38(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x9B35D07DCD0F0B43();
								iLocal_565 = unk_0xBAC643F143880136(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_185()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		if (unk_0x39A01A052D9B5FF0(uLocal_360))
		{
			unk_0x73DF1B751952DA65(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0x36B659209EBDD366("random@paparazzi@peek");
				unk_0x36B659209EBDD366("random@paparazzi@trans");
				unk_0x36B659209EBDD366("random@paparazzi@wait");
				if ((unk_0xB25A0D192C6A0A5B("random@paparazzi@peek") && unk_0xB25A0D192C6A0A5B("random@paparazzi@trans")) && unk_0xB25A0D192C6A0A5B("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0xF2A54C51C03CADAA(Local_653, Local_656, 2);
					unk_0x8582CCEB95B1F1BE(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x6E2920E14F5F962C(iLocal_86, unk_0x0FA8183DAD2B3203(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0xB7F4DA52DE3AAF24(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					iLocal_664 = 0;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (unk_0xA2BC31158C8CEFD2(iLocal_660, 0))
				{
					if (!unk_0xA2BC31158C8CEFD2(iLocal_660, 1))
					{
						unk_0xA1E7A40E1F56E511(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0x2553916E420E8EF0(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xB50E39CA0A3E6020(uLocal_625) && unk_0x91F0628278985DB8(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0xC6612209077465DD(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0xF2A54C51C03CADAA(Local_653, Local_656, 2);
						unk_0x8582CCEB95B1F1BE(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xA1E7A40E1F56E511(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0x9927BD5F023FA79D());
					}
					if ((unk_0x9B35D07DCD0F0B43() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xC6612209077465DD(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0xF2A54C51C03CADAA(Local_653, Local_656, 2);
									unk_0x8582CCEB95B1F1BE(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xA1E7A40E1F56E511(&iLocal_660, 0);
								}
								iLocal_624 = unk_0x9B35D07DCD0F0B43();
							}
						}
					}
				}
				if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_359))
					{
						unk_0xAA2276003B2ADF1B(&uLocal_359);
						if (!unk_0x39A01A052D9B5FF0(uLocal_360))
						{
							uLocal_360 = func_190(iLocal_86, 0, 145);
						}
					}
					unk_0xC6612209077465DD(iLocal_86);
					uLocal_625 = unk_0xF2A54C51C03CADAA(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0x8582CCEB95B1F1BE(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x8582CCEB95B1F1BE(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xA1E7A40E1F56E511(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0xB50E39CA0A3E6020(uLocal_625) && unk_0x91F0628278985DB8(uLocal_625) > 0.9f)
				{
					if (unk_0x411C065ADB822CD9(iLocal_86, 242628503) != 1)
					{
						unk_0xC6612209077465DD(iLocal_86);
						unk_0x5D672CB011E20B28(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (func_187())
					{
						unk_0xF25956700ADFD77F(&iLocal_91);
						iLocal_91 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						unk_0xE5C667CF3B4642D2(iLocal_91, 1, 1);
						unk_0x0051275ADD67B49D(iLocal_91, 0, 0);
						unk_0x54B5C3A13D3588F0(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0x54B5C3A13D3588F0(iLocal_91, 1);
					if (func_149(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_664 = 1;
						iLocal_369 = 100;
					}
				}
				else if (func_149(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_664 = 1;
					iLocal_369++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_186(Local_87, 1);
				}
				break;
			
			case 4:
				func_55();
				if (unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (unk_0x9B69E0F5342BA1A8(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0x411C065ADB822CD9(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							unk_0xA12E1659DEF57244(&uVar16);
							unk_0xD06C31EF9A42C2B4(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
							unk_0x15A7B753872B3CE3(uVar16);
							unk_0xC544A8E1032AC1CF(iLocal_86, uVar16);
							unk_0xCFEC09B98C6C5993(iLocal_86, 0, 0);
							unk_0x78829A259A6975CD(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0x4465F4659EE7FAE4(iLocal_86, 1f);
							func_186(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_186(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
						{
							if (unk_0x39A01A052D9B5FF0(uLocal_361))
							{
								unk_0xAA2276003B2ADF1B(&uLocal_361);
							}
							if (!unk_0x39A01A052D9B5FF0(uLocal_360))
							{
								uLocal_360 = func_190(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0x9B69E0F5342BA1A8(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_180(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_108();
							if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							unk_0xC6612209077465DD(iLocal_86);
							unk_0x31A7662B885C7549(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_186(Local_87, 1);
				}
				else
				{
					func_186(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (func_162(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (!unk_0x2BF5E63466422C38(iLocal_86) && unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
					{
						if (unk_0x39A01A052D9B5FF0(uLocal_360))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_360);
						}
						unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
						func_188(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0) && !unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 1)) && !unk_0x42A24CB7B8A08E11(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0x3A6FD57A8EC62253(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_188(6);
								}
								else
								{
									unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 1, 0);
									unk_0x3A6FD57A8EC62253(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_188(6);
								}
							}
						}
						if (!unk_0x95ED3BD0F52D542A(iLocal_86, iLocal_91, 0))
						{
							if (unk_0x411C065ADB822CD9(iLocal_86, -1794415470) != 1)
							{
								unk_0xC6612209077465DD(iLocal_86);
								unk_0x31A7662B885C7549(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0xC12F91346EA13947(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0x4465F4659EE7FAE4(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (!func_79())
					{
						func_108();
						if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 0)
						{
							func_108();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_186(Local_87, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (unk_0xB8D4A2BAA78AB950(unk_0x0FA8183DAD2B3203()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0x9927BD5F023FA79D());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0x9927BD5F023FA79D() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0xD960230552BC4165(iLocal_91, 0))
				{
					if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0) && func_187())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						unk_0xE5C667CF3B4642D2(iLocal_91, 1, 1);
					}
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_91, 0))
					{
						if (unk_0x39A01A052D9B5FF0(uLocal_361))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_361);
						}
						if (!unk_0x39A01A052D9B5FF0(uLocal_360))
						{
							uLocal_360 = func_190(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0x39A01A052D9B5FF0(uLocal_360))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_360);
						}
						if (!unk_0x39A01A052D9B5FF0(uLocal_361))
						{
							uLocal_361 = func_176(iLocal_91, 0, 0);
						}
					}
					if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iLocal_91))
					{
						if (unk_0x39A01A052D9B5FF0(uLocal_361))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_361);
						}
						if (!unk_0x39A01A052D9B5FF0(uLocal_360))
						{
							uLocal_360 = func_190(iLocal_86, 0, 145);
						}
						func_189("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_66) < 9f && func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_186(Local_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (unk_0xD960230552BC4165(iLocal_91, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_60, Local_87) > 75f)
				{
					func_188(6);
				}
				if (func_201())
				{
					func_188(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!unk_0xD960230552BC4165(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_188(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (unk_0x35D31BEBAFD53DE6(iLocal_91) < iLocal_83)
						{
							if (unk_0x3656B691E303FDE0(iLocal_91, unk_0x0FA8183DAD2B3203(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0x35D31BEBAFD53DE6(iLocal_91)));
							}
							unk_0x7FF38BFB318C1A86(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0xC0F705AED9ACE71B(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_188(5);
							}
						}
					}
				}
				iLocal_83 = unk_0x35D31BEBAFD53DE6(iLocal_91);
			}
		}
		if (!unk_0x2BF5E63466422C38(iLocal_86))
		{
			if (unk_0x5C0FAAC7D36B617B(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_188(5);
				}
			}
		}
	}
}

void func_186(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_63, Param0) > 2.5f)
	{
		if (unk_0x411C065ADB822CD9(iLocal_86, 713668775) != 1)
		{
			unk_0xD06C31EF9A42C2B4(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0x411C065ADB822CD9(iLocal_86, 713668775) != 1)
	{
		func_146(bParam3);
		unk_0x6E2920E14F5F962C(iLocal_86, unk_0x0FA8183DAD2B3203(), -1, 16, 2);
	}
}

bool func_187()
{
	return (((((unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0)) && (unk_0x2741F9670A602A19(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0))) || unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0))))) && unk_0x78B310CB286001B8(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) > 0) && func_180(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0))) && !Global_110607);
}

void func_188(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_189(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!unk_0x2553916E420E8EF0(iLocal_560[iVar0], sParam0))
		{
			if (unk_0x6FE3A7E505FEC20C(iLocal_560[iVar0]))
			{
				unk_0x8E3496DF5BF7F24D(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0x2553916E420E8EF0(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0x6FE3A7E505FEC20C(iLocal_560[iVar0]))
			{
				unk_0x7D17F1A2E0EEDBB9(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_190(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_177(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_191(int iParam0)
{
	if (func_194())
	{
		Global_111550 = 1;
		Global_111547 = unk_0x9B35D07DCD0F0B43();
		if (func_94(Global_111549))
		{
			func_192(0);
		}
		unk_0x3415792782E2E29A(1, "RE_TITLE");
		if (iParam0 && func_94(Global_111549))
		{
			unk_0x10C716954B3795A8();
		}
		return 1;
	}
	return 0;
}

void func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_2++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 1))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_3++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 2))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_4++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 2);
				}
			}
			break;
	}
}

char* func_193(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_194()
{
	switch (func_195(&Global_30795, 0, 5, 0, unk_0x429EE9FF15BB9033()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_195(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_199(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x74DBD46763D0F643(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_197(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_196(uParam0, iParam4);
		}
	}
	return 2;
}

void func_196(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_197(int iParam0)
{
	return func_198(iParam0, Global_41396);
}

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_197(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_200()
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iLocal_86))
	{
		unk_0x3A6FD57A8EC62253(iLocal_86, 2, 0);
		unk_0xF0E9590A910B74BE(iLocal_86, unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x2BF5E63466422C38(Local_204[iVar0 /*18*/]))
		{
			unk_0xF0E9590A910B74BE(Local_204[iVar0 /*18*/], unk_0x0FA8183DAD2B3203(), 300f, -1, 0, 0);
			unk_0xDB889DCC8B0139E6(Local_204[iVar0 /*18*/], -2065892691);
			unk_0xCC94EE23853F38E4(Local_204[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_201()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_204[iVar1 /*18*/]) && !unk_0x2BF5E63466422C38(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x0975E9E48EA2CC7B(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0x6C979EE77983FC04(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0x54D242CA888C9BF1(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0x5C0FAAC7D36B617B(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131.f_0)
	{
		if (unk_0xD4B321D9096B01FC(Local_131[iVar1 /*18*/]))
		{
			if (unk_0xD960230552BC4165(Local_131[iVar1 /*18*/], 0) && unk_0x0975E9E48EA2CC7B(Local_131[iVar1 /*18*/]))
			{
				if (unk_0xCFBE5B663F1567A7(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_202()
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_209())
	{
		return 1;
	}
	if (func_203(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_203(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (func_26(func_24()))
		{
			iVar36 = func_99();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 2) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_204(iVar32, &Var0);
					fVar35 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_204(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_205(uParam1, "Abigail1", func_207(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 1:
			func_205(uParam1, "Abigail2", func_207(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 2:
			func_205(uParam1, "Barry1", func_207(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 3:
			func_205(uParam1, "Barry2", func_207(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 4:
			func_205(uParam1, "Barry3", func_207(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 5:
			func_205(uParam1, "Barry3A", func_207(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 6:
			func_205(uParam1, "Barry3C", func_207(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 7:
			func_205(uParam1, "Barry4", func_207(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_206(iParam0), 0, 0);
			break;
		
		case 8:
			func_205(uParam1, "Dreyfuss1", func_207(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 9:
			func_205(uParam1, "Epsilon1", func_207(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 10:
			func_205(uParam1, "Epsilon2", func_207(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 11:
			func_205(uParam1, "Epsilon3", func_207(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 12:
			func_205(uParam1, "Epsilon4", func_207(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 13:
			func_205(uParam1, "Epsilon5", func_207(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 14:
			func_205(uParam1, "Epsilon6", func_207(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 15:
			func_205(uParam1, "Epsilon7", func_207(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 16:
			func_205(uParam1, "Epsilon8", func_207(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 17:
			func_205(uParam1, "Extreme1", func_207(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 18:
			func_205(uParam1, "Extreme2", func_207(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 19:
			func_205(uParam1, "Extreme3", func_207(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 20:
			func_205(uParam1, "Extreme4", func_207(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 21:
			func_205(uParam1, "Fanatic1", func_207(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_206(iParam0), 1, 0);
			break;
		
		case 22:
			func_205(uParam1, "Fanatic2", func_207(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_206(iParam0), 1, 0);
			break;
		
		case 23:
			func_205(uParam1, "Fanatic3", func_207(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_206(iParam0), 0, 1);
			break;
		
		case 24:
			func_205(uParam1, "Hao1", func_207(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_206(iParam0), 0, 1);
			break;
		
		case 25:
			func_205(uParam1, "Hunting1", func_207(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 26:
			func_205(uParam1, "Hunting2", func_207(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 27:
			func_205(uParam1, "Josh1", func_207(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 28:
			func_205(uParam1, "Josh2", func_207(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 29:
			func_205(uParam1, "Josh3", func_207(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 30:
			func_205(uParam1, "Josh4", func_207(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 31:
			func_205(uParam1, "Maude1", func_207(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 32:
			func_205(uParam1, "Minute1", func_207(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 33:
			func_205(uParam1, "Minute2", func_207(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 34:
			func_205(uParam1, "Minute3", func_207(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 35:
			func_205(uParam1, "MrsPhilips1", func_207(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 36:
			func_205(uParam1, "MrsPhilips2", func_207(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 37:
			func_205(uParam1, "Nigel1", func_207(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 38:
			func_205(uParam1, "Nigel1A", func_207(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 39:
			func_205(uParam1, "Nigel1B", func_207(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 40:
			func_205(uParam1, "Nigel1C", func_207(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 41:
			func_205(uParam1, "Nigel1D", func_207(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 42:
			func_205(uParam1, "Nigel2", func_207(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 43:
			func_205(uParam1, "Nigel3", func_207(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 44:
			func_205(uParam1, "Omega1", func_207(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 45:
			func_205(uParam1, "Omega2", func_207(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 46:
			func_205(uParam1, "Paparazzo1", func_207(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 47:
			func_205(uParam1, "Paparazzo2", func_207(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 48:
			func_205(uParam1, "Paparazzo3", func_207(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 49:
			func_205(uParam1, "Paparazzo3A", func_207(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 50:
			func_205(uParam1, "Paparazzo3B", func_207(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 51:
			func_205(uParam1, "Paparazzo4", func_207(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 52:
			func_205(uParam1, "Rampage1", func_207(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 54:
			func_205(uParam1, "Rampage3", func_207(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 55:
			func_205(uParam1, "Rampage4", func_207(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 56:
			func_205(uParam1, "Rampage5", func_207(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 53:
			func_205(uParam1, "Rampage2", func_207(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 57:
			func_205(uParam1, "TheLastOne", func_207(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 58:
			func_205(uParam1, "Tonya1", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 59:
			func_205(uParam1, "Tonya2", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 60:
			func_205(uParam1, "Tonya3", func_207(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 61:
			func_205(uParam1, "Tonya4", func_207(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 62:
			func_205(uParam1, "Tonya5", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_205(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_207(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_208(iParam0) };
	if (unk_0x9591DE0F00127F2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_208(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_209()
{
	if (func_212() && !func_213())
	{
		return 1;
	}
	if (func_211() && func_210())
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return Global_111278 > 0;
}

int func_211()
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_213()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x98EF8A03317B1185() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_214()
{
	func_216(39, 1);
	func_216(40, 1);
	func_216(41, 1);
	func_216(42, 1);
	func_216(43, 1);
	func_216(44, 1);
	uLocal_359 = func_215(Local_87);
	iLocal_86 = unk_0xB983F26E7AFB47BF(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0xDEB0AA30ABFDCF48(iLocal_86, 1, 1);
	unk_0xDEB0AA30ABFDCF48(iLocal_86, 17, 1);
	unk_0x3A6FD57A8EC62253(iLocal_86, 128, 1);
	unk_0x7D81B41B134BD6F2(iLocal_86, 1);
	unk_0x66882C4C10EA83B3(iLocal_86, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 0, 0, 1, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 2, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 3, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 4, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 7, 1, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_86, 8, 0, 0, 0);
	unk_0xA93EDD197C02BF25(iLocal_86, 1);
	unk_0xCC94EE23853F38E4(iLocal_86, 1);
	unk_0x6E712A176E3EEFA8(iLocal_86, 0);
	unk_0x5A36DB8F38E65BE2(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0x04F5A8AA60EC662B(iLocal_86, 1);
	}
	if (unk_0x8CBD7ED64E4A522F("CELEBRITY", &uLocal_69))
	{
		unk_0xDB889DCC8B0139E6(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0x847817A65E16621A(joaat("surano"), Local_92, fLocal_95, 1, 1, 0);
	unk_0xC67026146B0E835A(iLocal_91, Local_92, 0, 0, 1);
	unk_0x28DC4562BD7099B3(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x0051275ADD67B49D(iLocal_91, 0, 0);
	unk_0xA429E610637A53F5(iLocal_91, 10);
	unk_0x1ECAE5FB4DE78CF8(iLocal_91, 1084227584);
	unk_0x54B5C3A13D3588F0(iLocal_91, 3);
	unk_0xA07556D283A83CA1(iLocal_91, 1);
	unk_0x4B49D40DB6CF2B2B(iLocal_91, 1);
	unk_0x7BA4C90E26839793(iLocal_91, unk_0x3F8B5B092A20BEB5(1));
	if (func_24() == 1)
	{
		func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_395, 1, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
	}
	func_22(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x0A43D5D11052D038(joaat("vader"), 1);
	unk_0x0A43D5D11052D038(joaat("surano"), 1);
	unk_0x0A43D5D11052D038(joaat("cavalcade2"), 1);
}

var func_215(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0x9C47809EE2CC69F5(uVar0, 0);
	unk_0xB2FBFC8F00374981(uVar0, 0);
	return uVar0;
}

void func_216(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_220(iParam0, 2, 1))
		{
			func_219(iParam0, 2, 1);
		}
	}
	else if (func_220(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3B76114EC84D5812(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_89() == 0)
		{
			uVar0 = func_124(func_218(iParam0), -1, 0);
			unk_0x3B76114EC84D5812(&uVar0, iParam1);
			func_120(func_218(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

void func_219(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_89() == 0)
		{
			uVar0 = func_124(func_218(iParam0), -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, iParam1);
			func_120(func_218(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_220(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_89() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_124(func_218(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_221()
{
	if (!iLocal_96)
	{
		func_229(&uLocal_97, joaat("surano"));
		func_229(&uLocal_97, joaat("prop_ld_test_01"));
		func_229(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_229(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_229(&uLocal_97, joaat("vader"));
		func_229(&uLocal_97, joaat("cavalcade2"));
		func_229(&uLocal_97, joaat("prop_pap_camera_01"));
		func_226(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_222(&uLocal_97))
	{
		return 0;
	}
	unk_0x36B659209EBDD366("random@escape_paparazzi@standing@");
	unk_0x36B659209EBDD366("random@paparazzi@pap_anims");
	unk_0x36B659209EBDD366("random@paparazzi@peek");
	unk_0x36B659209EBDD366("random@paparazzi@trans");
	unk_0x36B659209EBDD366("random@paparazzi@wait");
	unk_0x36B659209EBDD366("veh@std@ps@idle_panic");
	unk_0x36B659209EBDD366("veh@low@front_ps@idle_panic");
	unk_0x36B659209EBDD366(sLocal_374);
	unk_0x9F815D4FA0C47F97("ESCPAP", 0);
	if (((((((((unk_0xB25A0D192C6A0A5B("random@escape_paparazzi@standing@") && unk_0xB25A0D192C6A0A5B("random@paparazzi@pap_anims")) && unk_0xB25A0D192C6A0A5B("random@paparazzi@peek")) && unk_0xB25A0D192C6A0A5B("random@paparazzi@trans")) && unk_0xB25A0D192C6A0A5B("random@paparazzi@wait")) && unk_0xB25A0D192C6A0A5B("veh@std@ps@idle_panic")) && unk_0xB25A0D192C6A0A5B("veh@low@front_ps@idle_panic")) && unk_0xB25A0D192C6A0A5B(sLocal_374)) && unk_0xA3D567B14856EDE1(0)) && unk_0x059780A8877D0C70("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_223(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_223(var uParam0)
{
	return func_224(*uParam0, "NULL", uParam0->f_1);
}

int func_224(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA2BC31158C8CEFD2(iParam0, 30))
	{
		if (unk_0xA2BC31158C8CEFD2(iParam0, 29))
		{
			switch (func_225(iParam0))
			{
				case 0:
					return unk_0x6DF9C43E3CC645BC(uParam2);
					break;
				
				case 1:
					return unk_0xB25A0D192C6A0A5B(sParam1);
					break;
				
				case 2:
					return unk_0xD922B64C0E3926F2(sParam1);
					break;
				
				case 3:
					return unk_0xF409FD92D37CDEEE(sParam1);
					break;
				
				case 4:
					return unk_0xDA28050D0A4CAB3A(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xDFE2DFB40A988E19(sParam1);
					break;
				
				case 6:
					return unk_0x059780A8877D0C70(sParam1, unk_0xA2BC31158C8CEFD2(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xA8B25C8AF7D75EB3(iParam2);
					break;
				
				case 8:
					return unk_0xA3D567B14856EDE1(iParam2);
					break;
				
				case 9:
					return unk_0x5B9201742B00334D();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA2BC31158C8CEFD2(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(var uParam0)
{
	func_227(uParam0, 9, -1, 0);
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_228(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xA1E7A40E1F56E511(uParam0[iVar0 /*2*/], iParam1);
			unk_0xA1E7A40E1F56E511(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_229(var uParam0, int iParam1)
{
	func_227(uParam0, 0, iParam1, 0);
}

int func_230()
{
	if (!func_197(5))
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_203(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_231()
{
	if ((Global_111549 == func_103() && unk_0x86652FD1CD2DBA07()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

void func_232(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xB3EE417AD9F0CAA2() >= (uParam0->f_32 + uParam0->f_33) || unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 2)) || unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 29))
					{
						func_233(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xB3EE417AD9F0CAA2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_233(var uParam0)
{
	func_234(uParam0, "NULL", uParam0->f_1);
}

void func_234(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xA2BC31158C8CEFD2(*uParam0, 30))
	{
		switch (func_225(*uParam0))
		{
			case 0:
				unk_0x6BB2B1818CAE531E(uParam2);
				break;
			
			case 1:
				unk_0x36B659209EBDD366(sParam1);
				break;
			
			case 2:
				unk_0x46CFD6B05735CD7E(sParam1);
				break;
			
			case 3:
				unk_0x4F7B74CE562E3EC6(sParam1, unk_0xA2BC31158C8CEFD2(*uParam0, 28));
				break;
			
			case 4:
				unk_0x798362387B375EB6(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x3D070739F9AFB22D(sParam1);
				break;
			
			case 6:
				unk_0x059780A8877D0C70(sParam1, unk_0xA2BC31158C8CEFD2(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x6396E7A476BDCE7C(iParam2);
				break;
			
			case 8:
				unk_0x9F815D4FA0C47F97(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x8CD04D2D122523B6();
				break;
			
			default:
				break;
		}
		unk_0xA1E7A40E1F56E511(uParam0, 29);
	}
}

void func_235(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_237(iParam0);
	unk_0xCFC4E8BEE304113D(0);
	unk_0x2D786727F990DBA9(1);
	Global_111546 = 0;
	func_236();
}

void func_236()
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0x0A43D5D11052D038(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)), 1);
		}
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
	}
}

void func_237(int iParam0)
{
	Global_111549 = iParam0;
}

int func_238(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150139)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_103();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_279())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_213())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_84(0))
		{
			return 0;
		}
		if (func_209())
		{
			return 0;
		}
		if (func_278())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_203(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_277(iParam3))
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_276(func_24()) == 4 || func_276(func_24()) == 5)
			{
				return 0;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_275(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_274(Global_111560.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9B35D07DCD0F0B43() - Global_111551) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_273())
		{
			return 0;
		}
		if (unk_0xFF392459DD4CD797())
		{
			return 0;
		}
		if (unk_0x86652FD1CD2DBA07())
		{
			return 0;
		}
		if (!func_264(4))
		{
			return 0;
		}
		if (!func_197(5))
		{
			return 0;
		}
		if (func_263(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x61837007ACF2F2C2(unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203())))
		{
			if ((unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(377.153f, -717.567f, 10.0536f) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(320.9934f, 265.2515f, 82.1221f)) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_263(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_277(30) && !func_263(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_262(iVar8))
				{
					if (func_240(iVar4))
					{
						if (!func_239(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var5) < (210f * 210f))
							{
								if (func_24() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_239(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_241(iVar0);
}

int func_241(int iParam0)
{
	return func_242(iParam0, 1);
}

int func_242(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_262(iParam0))
	{
		return 0;
	}
	func_243(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_244(func_255(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_244(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_254(iParam0, iParam1))
	{
		iVar0 = func_253(iParam1);
		iVar1 = func_251(iParam0);
		iVar2 = (func_251(iParam0) - func_251(iParam1));
		iVar3 = (func_253(iParam0) - func_253(iParam1));
		iVar4 = (func_250(iParam0) - func_250(iParam1));
		iVar5 = (func_249(iParam0) - func_249(iParam1));
		iVar6 = (func_248(iParam0) - func_248(iParam1));
		iVar7 = (func_247(iParam0) - func_247(iParam1));
	}
	else
	{
		iVar0 = func_253(iParam0);
		iVar1 = func_251(iParam1);
		iVar2 = (func_251(iParam1) - func_251(iParam0));
		iVar3 = (func_253(iParam1) - func_253(iParam0));
		iVar4 = (func_250(iParam1) - func_250(iParam0));
		iVar5 = (func_249(iParam1) - func_249(iParam0));
		iVar6 = (func_248(iParam1) - func_248(iParam0));
		iVar7 = (func_247(iParam1) - func_247(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_246(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_245(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_245(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_246(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_247(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_248(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_249(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_250(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_251(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_252(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_252(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(int iParam0)
{
	return iParam0 & 15;
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_262(iParam1) || !func_262(iParam0))
	{
		return 1;
	}
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_253(iParam0);
	iVar1 = func_253(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	var uVar0;
	
	func_261(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_260(&uVar0, unk_0x8F7802EF0E800F47());
	func_259(&uVar0, unk_0xA63165E74E9A042B());
	func_258(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_257(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_256(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_258(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_253(*uParam0);
	iVar1 = func_251(*uParam0);
	if (iParam1 < 1 || iParam1 > func_246(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_259(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_260(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_261(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_248(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_249(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_251(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_253(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_250(iParam0);
	if (iVar5 < 1 || iVar5 > func_246(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_263(int iParam0, int iParam1)
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_270()) || func_269()) || func_268()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1) || func_272()) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_272() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || func_19(8, -1)) || func_267()) || func_266()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_270()) || func_269()) || func_266()) || func_265())
						{
							return 0;
						}
						if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							if ((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_272()) || Global_30738) || func_271()) || func_19(8, -1)) || func_269()) || func_268()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || func_272()) || func_269()) || Global_110607) || Global_30738) || func_271()) || Global_42561) || func_19(8, -1)) || func_268()) || func_266()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_266()) || func_270()) || func_269()) || func_267())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_265()
{
	return Global_98708.f_1;
}

int func_266()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_267()
{
	if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_268()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_269()
{
	return Global_98721.f_346 > 0;
}

bool func_270()
{
	return Global_98721.f_345 > 0;
}

var func_271()
{
	return Global_1312873;
}

int func_272()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_273()
{
	func_16();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_274(int iParam0)
{
	return func_254(func_255(), iParam0);
}

int func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_24();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_276(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_277(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_279())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_278()
{
	var uVar0;
	
	if (Global_30886)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(uVar0, 0))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x300C62F79A4441EB(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_279()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					iVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&iVar0, 0);
					unk_0x553DEB79071ABB59(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_281()
{
	func_299(0);
	unk_0x8E4F6615F45C8C6B(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_294(&uLocal_97, 0);
	unk_0x7D74D6A091150B86("random@escape_paparazzi@standing@");
	unk_0x7D74D6A091150B86("random@paparazzi@pap_anims");
	unk_0x7D74D6A091150B86("random@paparazzi@peek");
	unk_0x7D74D6A091150B86("random@paparazzi@trans");
	unk_0x7D74D6A091150B86("random@paparazzi@wait");
	unk_0x7D74D6A091150B86("veh@std@ps@idle_panic");
	unk_0x7D74D6A091150B86("veh@low@front_ps@idle_panic");
	unk_0x7D74D6A091150B86(sLocal_374);
	unk_0x22177E6DE081D074();
	if (func_231())
	{
		unk_0xB7F4DA52DE3AAF24(1f);
	}
	if (unk_0xD4B321D9096B01FC(iLocal_86) && !unk_0x2BF5E63466422C38(iLocal_86))
	{
		if (unk_0xFF8C14957DF16F4D(iLocal_86))
		{
			unk_0x91F590A9823EB649(iLocal_86);
		}
		if (unk_0x5294582CE404D3F4(iLocal_86, 1))
		{
			if (!unk_0x5C0FAAC7D36B617B(iLocal_86))
			{
				unk_0x2DCF88AC859255F3(iLocal_86, 0, 0);
			}
		}
	}
	func_283(-1);
	unk_0x5B3499F998371238();
	unk_0x990EDEB49BA0458D(0);
	unk_0x0A43D5D11052D038(joaat("vader"), 0);
	unk_0x0A43D5D11052D038(joaat("surano"), 0);
	unk_0x0A43D5D11052D038(joaat("cavalcade2"), 0);
	unk_0x9E64FD43AF331B00(uLocal_365, 0);
	unk_0x9E64FD43AF331B00(uLocal_366, 0);
	unk_0x9E64FD43AF331B00(uLocal_367, 0);
	unk_0x80BCF42B42433CEB(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_30975)
	{
		unk_0x81995F6F93D8C987("AC_STOP");
	}
	func_282();
	unk_0x9C9E32388A7886A2();
}

void func_282()
{
	Global_30971 = 0;
	Global_30972 = 0;
	Global_30974 = 0;
	Global_30975 = 0;
	Global_30976 = 0;
}

void func_283(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_231())
	{
		func_287(iParam0);
		unk_0x3415792782E2E29A(0, 0);
		Global_111551 = unk_0x9B35D07DCD0F0B43();
		func_286(30000);
		StringCopy(&cVar0, func_285(Global_111549, 1), 64);
		if (func_102(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		unk_0xB9C42DF94EB4ABBE(&cVar0, Global_111546, (unk_0x9B35D07DCD0F0B43() - Global_111547), 0);
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		unk_0x3B76114EC84D5812(&Global_111556, 0);
	}
	func_284(&Global_30795);
	Global_111550 = 0;
	func_237(-1);
}

void func_284(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

char* func_285(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_286(int iParam0)
{
	Global_41947 = (unk_0x9B35D07DCD0F0B43() + iParam0);
}

void func_287(int iParam0)
{
	func_288(iParam0, 0, func_293(iParam0));
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_255();
	func_291(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_290(iParam0, &uVar0);
	Var1 = { func_289(&uVar0) };
}

struct<16> func_289(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_249(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_248(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_247(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_250(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_253(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_251(*uParam0), 64);
	return Var0;
}

void func_290(int iParam0, var uParam1)
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_291(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_251(*uParam0);
	iVar1 = func_253(*uParam0);
	iVar2 = func_250(*uParam0);
	iVar3 = func_249(*uParam0);
	iVar4 = func_248(*uParam0);
	iVar5 = func_247(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_246(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_246(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_292(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, iParam1);
	func_260(uParam0, iParam2);
	func_259(uParam0, iParam3);
	func_257(uParam0, iParam5);
	func_258(uParam0, iParam4);
	func_256(uParam0, iParam6);
}

int func_293(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_294(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_296(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_295(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_295(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_296(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0 /*2*/], 30))
		{
			func_297(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_297(var uParam0)
{
	func_298(*uParam0, "NULL", uParam0->f_1);
}

void func_298(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xA2BC31158C8CEFD2(uParam0, 30))
	{
		switch (func_225(iParam0))
		{
			case 0:
				unk_0xE0AC40EF164A2569(uParam2);
				break;
			
			case 1:
				unk_0x7D74D6A091150B86(sParam1);
				break;
			
			case 2:
				unk_0x3B3234F5138A2131(sParam1);
				break;
			
			case 3:
				unk_0xD73CEE901CAB1716(sParam1);
				break;
			
			case 4:
				unk_0x497FAD093E19504A(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x3F8C4865FB100A5A(sParam1);
				break;
			
			case 6:
				unk_0x22177E6DE081D074();
				break;
			
			case 7:
				unk_0xD67693566398B2F9(uParam2);
				break;
			
			case 8:
				unk_0xA95AA80044081B2A(uParam2, unk_0xA2BC31158C8CEFD2(iParam0, 26));
				break;
			
			case 9:
				unk_0xD9E853CD947E590B();
				break;
			
			default:
				break;
		}
	}
}

void func_299(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

