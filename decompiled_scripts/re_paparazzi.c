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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<6> Local_74 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
	var uLocal_97 = 0;
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
	var uLocal_129 = 1;
	struct<18> Local_130[4];
	struct<18> Local_203[8];
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	bool bLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char[] cLocal_371[8] = 0;
	char* sLocal_372 = NULL;
	char* sLocal_373 = NULL;
	int iLocal_374[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_384 = 0;
	int iLocal_385[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_394[16];
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559[3] = { 0, 0, 0 };
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	float fLocal_568 = 0f;
	float fLocal_569 = 0f;
	int iLocal_570[2] = { 0, 0 };
	float fLocal_573 = 0f;
	struct<3> Local_574 = { 0, 0, 0 } ;
	struct<3> Local_577 = { 0, 0, 0 } ;
	struct<3> Local_580 = { 0, 0, 0 } ;
	struct<3> Local_583 = { 0, 0, 0 } ;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_595[4];
	float fLocal_608[4] = { 0f, 0f, 0f, 0f };
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	char* sLocal_625[3] = { NULL, NULL, NULL };
	int iLocal_629 = 0;
	char* sLocal_630 = NULL;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	float fLocal_637 = 0f;
	struct<3> Local_638 = { 0, 0, 0 } ;
	struct<3> Local_641 = { 0, 0, 0 } ;
	float fLocal_644 = 0f;
	struct<3> Local_645 = { 0, 0, 0 } ;
	struct<3> Local_648 = { 0, 0, 0 } ;
	float fLocal_651 = 0f;
	struct<3> Local_652 = { 0, 0, 0 } ;
	struct<3> Local_655 = { 0, 0, 0 } ;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	float fLocal_664 = 0f;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	bool bLocal_667 = 0;
	bool bLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	Local_52 = { 226.6825f, 681.0297f, 188.4987f };
	Local_55 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_58 = 32.0905f;
	StringCopy(&Local_74, "", 24);
	Local_86 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_89 = 283.0367f;
	Local_91 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_94 = -18.4743f;
	cLocal_371 = "REPAPAU";
	sLocal_372 = "random@escape_paparazzi@standing@";
	sLocal_373 = "random@escape_paparazzi@incar@";
	iLocal_564 = 4000;
	fLocal_568 = 0f;
	fLocal_569 = 0f;
	fLocal_573 = 0f;
	Local_574 = { 272.6356f, 155.5618f, 103.3306f };
	Local_577 = { 247.5795f, 88.7094f, 92.9859f };
	Local_580 = { 259.0348f, 114.0369f, 98.9984f };
	Local_583 = { 255.4971f, 116.8744f, 99.8162f };
	Local_586 = { 266.8217f, 139.7698f, 103.2269f };
	Local_589 = { 270.0174f, 139.1181f, 103.2195f };
	Local_592 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_630 = "left_";
	Local_631 = { 261.9341f, 126.2429f, 95.15405f };
	Local_634 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_637 = 16f;
	Local_638 = { 261.9341f, 126.2429f, 107.6541f };
	Local_641 = { 248.354f, 87.01792f, 92.389f };
	fLocal_644 = 16f;
	Local_645 = { 256.6779f, 126.573f, 99.54784f };
	Local_648 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_651 = 5.75f;
	Local_652 = { 260.242f, 127.423f, 101.65f };
	Local_655 = { 0f, 0f, -20f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2C897F101BA20806(11))
	{
		func_268();
	}
	func_267(&uLocal_96, 3);
	if (!Global_3)
	{
		if (func_225(Local_49, -1, 0, 0, 0))
		{
			func_222(-1);
		}
		else
		{
			unk_0x82706E6C897B0FA1();
		}
	}
	uLocal_364 = unk_0x4210B2DCFC2838AC(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_365 = unk_0x4210B2DCFC2838AC(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_366 = unk_0x4210B2DCFC2838AC(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x84710FE7666EBF7B(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0xC7210908156431E0(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xAFB2D7547EAAAC69("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_219(&uLocal_96);
		if (!func_218())
		{
			if (func_217())
			{
				func_268();
			}
		}
		unk_0x0022A74B21F0C0B9("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0x538DF9E5B1DF01EB(Local_130[iVar0 /*18*/]) && !unk_0xE44A580B551C3645(Local_130[iVar0 /*18*/]))
			{
				Local_130[iVar0 /*18*/].f_8 = { unk_0xBF8499F46AD9093A(Local_130[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0xE44A580B551C3645(Local_203[iVar0 /*18*/]))
			{
				Local_203[iVar0 /*18*/].f_6 = { unk_0xBF8499F46AD9093A(Local_203[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Local_59 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_85))
		{
			Local_62 = { unk_0xBF8499F46AD9093A(iLocal_85, 1) };
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_90) && !unk_0xE44A580B551C3645(iLocal_90))
		{
			Local_65 = { unk_0xBF8499F46AD9093A(iLocal_90, 1) };
		}
		if (!func_218())
		{
			if (unk_0xFEC6476AFCF2033F())
			{
				switch (iLocal_368)
				{
					case 0:
						if (func_208())
						{
							func_198();
							iLocal_368++;
						}
						else if (func_186())
						{
							func_268();
						}
						break;
					
					case 1:
						if ((func_185() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || !unk_0xECFECDAD51A6184F(iLocal_90, 0))
						{
							if (!Global_3 && !bLocal_69)
							{
								func_184();
								func_268();
							}
						}
						else if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_175(1);
							uLocal_359 = func_174(iLocal_85, 0, 145);
							func_173("MAG_2_ESCAPE_PAP_GET_CAR");
							func_172(0);
						}
						break;
				}
			}
			else
			{
				func_268();
			}
		}
		else
		{
			unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
			switch (iLocal_46)
			{
				case 0:
					func_169();
					break;
				
				case 1:
					func_166();
					break;
				
				case 2:
					func_145();
					break;
				
				case 3:
					func_134();
					break;
				
				case 4:
					func_104();
					break;
				
				case 10:
					func_268();
					break;
				
				case 5:
					func_103();
					break;
				
				case 6:
					func_100(sLocal_370);
					break;
				
				case 7:
					func_99();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_98())
					{
						if (unk_0x538DF9E5B1DF01EB(iLocal_85))
						{
							unk_0x51A89CCC8A5317D0(&iLocal_85);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_62, 210f, 210f, 210f, 0, 1, 0))
			{
				func_184();
				func_268();
			}
			if (((iLocal_46 != 5 && iLocal_46 != 6) && iLocal_46 != 10) && iLocal_46 != 7)
			{
				if (!Global_3 && !bLocal_69)
				{
					if (func_67(iLocal_85, 1, 1) || func_66())
					{
						if (iLocal_46 > 0)
						{
							func_172(5);
						}
						else
						{
							func_184();
							func_172(10);
						}
					}
					if (((iLocal_46 != 5 && iLocal_46 != 10) && iLocal_46 != 0) && iLocal_46 != 7)
					{
						if (func_62())
						{
							func_172(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_46 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_73 || func_19() != 0))
			{
				if ((!unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x09560C7DE2A384BD() - iLocal_563) > 5000) && !unk_0x2DE0B96E966FD817(Local_203[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_203[iVar1 /*18*/], 1), Local_59) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_62, Local_59) > (22.5f * 22.5f))
					{
						if (func_218())
						{
							if (Local_394[4 /*10*/] != Local_203[iVar1 /*18*/])
							{
								func_18(&Local_394, 4);
								func_17(&Local_394, 4, Local_203[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_662)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_563 = unk_0x09560C7DE2A384BD();
									iLocal_662 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x444ECD635D5FD45F(1, 13), 24);
							func_3(Local_203[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_563 = unk_0x09560C7DE2A384BD();
						}
					}
				}
			}
		}
		if (iLocal_46 <= 1)
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
	
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		iVar0 = unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357());
		if (unk_0xECFECDAD51A6184F(iVar0, 0))
		{
			iVar1 = unk_0xD8A521688BDBE867(iVar0, 0);
			if (!unk_0x2DE0B96E966FD817(iVar1))
			{
				if (iVar1 != unk_0xA16EC202D9D35357())
				{
					if (unk_0x22349EC06EA5B08B(iVar1))
					{
						if (!unk_0xFABFAE59805681A2(iVar1, unk_0xA16EC202D9D35357()))
						{
							unk_0x4745F9C50C63A48C(iVar1, unk_0xA16EC202D9D35357(), 2000, 2048, 2);
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
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x6360D2FA3AD62AD1(Local_203[iVar0 /*18*/]) < Local_203[iVar0 /*18*/].f_17)
			{
				if (unk_0xBF8ADDCADFC4691E(Local_203[iVar0 /*18*/], unk_0xA16EC202D9D35357(), 1))
				{
					iLocal_385[iVar0] = (iLocal_385[iVar0] + (Local_203[iVar0 /*18*/].f_17 - unk_0x6360D2FA3AD62AD1(Local_203[iVar0 /*18*/])));
					iLocal_81 = (iLocal_81 + (Local_203[iVar0 /*18*/].f_17 - unk_0x6360D2FA3AD62AD1(Local_203[iVar0 /*18*/])));
					unk_0xFAF4121083211853(Local_203[iVar0 /*18*/]);
					if (iLocal_385[iVar0] > iLocal_384)
					{
						iLocal_384 = iLocal_385[iVar0];
					}
				}
			}
			Local_203[iVar0 /*18*/].f_17 = unk_0x6360D2FA3AD62AD1(Local_203[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0xB3DDF1AA38C87006(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_15();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_13();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_7();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_15();
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_8()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_9()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_11()
{
	if (func_12(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_19();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

bool func_12(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_15()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()
{
	func_20();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_23(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_22(unk_0xA16EC202D9D35357());
			if (func_21(iVar0) && (!func_12(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_21(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if ((unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/])) && !unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
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
	
	switch (iLocal_48)
	{
		case 0:
			iLocal_615 = 0;
			unk_0x939DA7EBCC6588FF(joaat("a_m_y_genstreet_02"));
			unk_0x939DA7EBCC6588FF(joaat("prop_pap_camera_01"));
			unk_0x939DA7EBCC6588FF(joaat("cavalcade2"));
			unk_0x939DA7EBCC6588FF(joaat("vader"));
			unk_0x3D28909AF30D70F4(sLocal_372);
			unk_0x3D28909AF30D70F4("random@paparazzi@pap_anims");
			if (((((unk_0x5494F37F35C1D7D7(joaat("a_m_y_genstreet_02")) && unk_0x5494F37F35C1D7D7(joaat("prop_pap_camera_01"))) && unk_0x5494F37F35C1D7D7(joaat("cavalcade2"))) && unk_0x5494F37F35C1D7D7(joaat("vader"))) && unk_0x6C47E32491756A1A(sLocal_372)) && unk_0x6C47E32491756A1A("random@paparazzi@pap_anims"))
			{
				Local_595[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_595[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_595[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_595[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_608[0] = -111.1625f;
				fLocal_608[1] = 68.857f;
				fLocal_608[2] = -108.2056f;
				fLocal_608[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_130.f_0)
				{
					func_61(iVar0);
					func_59(func_60(iVar0));
					func_59(func_58(iVar0));
					iVar0++;
				}
				iLocal_613 = 0;
				func_57(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_57(func_58(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_57(func_58(2), Local_595[1 /*3*/], fLocal_608[1]);
				func_57(func_58(3), Local_595[1 /*3*/], fLocal_608[1]);
				func_56(0, Local_595[0 /*3*/], fLocal_608[0], 1);
				func_56(1, Local_595[1 /*3*/], fLocal_608[1], 0);
				unk_0x6C43BF7625967266(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x34639238667C4381(func_55(0, 1), 217.1033f);
				unk_0x6C43BF7625967266(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x34639238667C4381(func_55(2, 1), 38.6283f);
				unk_0x6C43BF7625967266(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x34639238667C4381(func_55(3, 1), 272.9875f);
				unk_0x5B5659C49032B96C(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			func_53(func_58(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_53(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_53(func_58(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x538DF9E5B1DF01EB(Local_203[2 /*18*/].f_2))
			{
				if (!unk_0x01F2C76388A112CD(Local_203[2 /*18*/].f_2))
				{
					unk_0x423D1EBE54B18555(Local_203[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_615)
			{
				case 0:
					if (!unk_0x2DE0B96E966FD817(func_55(1, 0)))
					{
						unk_0x937785D9C1929236(func_55(1, 0));
					}
					if (!unk_0x2DE0B96E966FD817(func_55(1, 1)))
					{
						unk_0x937785D9C1929236(func_55(1, 1));
					}
					if (!unk_0x538DF9E5B1DF01EB(Local_130[2 /*18*/]))
					{
						func_56(2, Local_595[2 /*3*/], fLocal_608[2], 0);
						if (unk_0xECFECDAD51A6184F(Local_130[2 /*18*/], 0))
						{
							func_57(func_60(2), unk_0xBF8499F46AD9093A(Local_130[2 /*18*/], 1), 0f);
							unk_0x3195B1192FB0EA3D(func_55(2, 0), Local_130[2 /*18*/], -1);
						}
					}
					if (!unk_0x538DF9E5B1DF01EB(Local_130[3 /*18*/]))
					{
						func_56(3, Local_595[3 /*3*/], fLocal_608[3], 0);
					}
					if (!unk_0x2DE0B96E966FD817(func_55(2, 1)))
					{
						unk_0x353F4B963593F141(func_55(2, 1), Local_580, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x2DE0B96E966FD817(func_55(3, 1)))
					{
						unk_0x353F4B963593F141(func_55(3, 1), Local_583, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x538DF9E5B1DF01EB(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_69)
					{
						if (!unk_0x2DE0B96E966FD817(func_55(1, 0)))
						{
							unk_0x353F4B963593F141(func_55(1, 0), Local_586, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x2DE0B96E966FD817(func_55(1, 1)))
						{
							unk_0x353F4B963593F141(func_55(1, 1), Local_589, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x2DE0B96E966FD817(func_55(0, 1)))
						{
							unk_0x353F4B963593F141(func_55(0, 1), Local_592, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_203.f_0)
					{
						if (unk_0x538DF9E5B1DF01EB(Local_203[iVar1 /*18*/]))
						{
							unk_0xA5F41F91908B2FCB(Local_203[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_130.f_0)
					{
						if (unk_0x538DF9E5B1DF01EB(Local_130[iVar1 /*18*/]))
						{
							unk_0xA5F41F91908B2FCB(Local_130[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_615++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xECFECDAD51A6184F(Local_130[0 /*18*/], 0) && !unk_0x2DE0B96E966FD817(func_55(0, 0))) && !unk_0x2DE0B96E966FD817(func_55(0, 1)))
					{
						if (!iLocal_570[1])
						{
							iLocal_570[1] = 1;
							unk_0x9909D1FE2BA25A9B(func_55(0, 0), Local_130[0 /*18*/], Local_574, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xECFECDAD51A6184F(Local_130[2 /*18*/], 0) && !unk_0x2DE0B96E966FD817(func_55(2, 0))) && !unk_0x2DE0B96E966FD817(func_55(2, 1)))
					{
						if (!iLocal_570[0])
						{
							unk_0x9909D1FE2BA25A9B(func_55(2, 0), Local_130[2 /*18*/], Local_577, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_570[0] = 1;
						}
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_85) && !unk_0x2DE0B96E966FD817(iLocal_85))
					{
						func_46(iLocal_85, 6);
						if (Global_3 || bLocal_69)
						{
							if (!unk_0x2DE0B96E966FD817(func_55(1, 0)))
							{
								if (unk_0x965556ACF6A83973(func_55(1, 0), Local_586, Global_22, 0, 1, 0))
								{
									func_45(iLocal_85, func_60(1));
								}
							}
							if (!unk_0x2DE0B96E966FD817(func_55(1, 1)))
							{
								if (unk_0x965556ACF6A83973(func_55(1, 1), Local_589, Global_22, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(1));
								}
							}
							if (!unk_0x2DE0B96E966FD817(func_55(0, 1)))
							{
								if (unk_0x965556ACF6A83973(func_55(0, 1), Local_589, Global_22, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(0));
								}
							}
						}
						else
						{
							func_46(iLocal_85, func_60(1));
							func_46(iLocal_85, func_58(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_46(iLocal_85, func_60(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(iLocal_90, 1), Local_86) < 9f)
					{
						if (unk_0x965556ACF6A83973(func_55(2, 1), Local_580, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(2));
						}
						if (unk_0x965556ACF6A83973(func_55(3, 1), Local_583, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(3));
						}
						if (unk_0x965556ACF6A83973(func_55(0, 1), Local_583, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(0));
						}
					}
					else
					{
						if (!unk_0x889D01384B54BCE3(iLocal_618, 3))
						{
							unk_0x937785D9C1929236(Local_203[func_58(3) /*18*/]);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_618, 3);
						}
						if (!unk_0x889D01384B54BCE3(iLocal_618, 2))
						{
							unk_0x937785D9C1929236(Local_203[func_58(2) /*18*/]);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_618, 2);
						}
						if (!unk_0x889D01384B54BCE3(iLocal_618, 0))
						{
							unk_0x937785D9C1929236(Local_203[func_58(0) /*18*/]);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_618, 0);
						}
						if (Global_3 || bLocal_69)
						{
							func_45(iLocal_85, func_58(3));
						}
						else
						{
							func_46(iLocal_85, func_58(3));
						}
						func_46(iLocal_85, func_58(2));
						func_46(iLocal_85, func_58(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
			{
				if (unk_0x5AF66EDEBFA76B9B(iLocal_90) < 1f)
				{
					fLocal_573 = (fLocal_573 + unk_0x0C380BB05B91042D());
				}
				else if (fLocal_573 > 0f)
				{
					fLocal_573 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x538DF9E5B1DF01EB(Local_130[iVar0 /*18*/]) && iLocal_46 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_613 || !unk_0x538DF9E5B1DF01EB(Local_130[0 /*18*/])) || !unk_0x538DF9E5B1DF01EB(Local_130[1 /*18*/]))) && (unk_0x09560C7DE2A384BD() - iLocal_614) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_86) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_59, Local_86) < 62500f || (unk_0x09560C7DE2A384BD() - iLocal_369) < 30000)
							{
								func_40(Local_130[iVar0 /*18*/], iLocal_90, &(Local_130[iVar0 /*18*/].f_5), &(Local_130[iVar0 /*18*/].f_15), &(Local_130[iVar0 /*18*/].f_11), &(Local_130[iVar0 /*18*/].f_14), &(Local_130[iVar0 /*18*/].f_16), Local_130[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_613 = iVar0;
								iLocal_614 = unk_0x09560C7DE2A384BD();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!unk_0x2DE0B96E966FD817(Local_203[iVar2 /*18*/]))
					{
						iVar3 = func_58(iVar0);
					}
					else
					{
						iVar3 = func_60(iVar0);
					}
					switch (Local_130[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
							{
								if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Local_130[iVar0 /*18*/], 0))
								{
									if (!unk_0x2DE0B96E966FD817(Local_203[iVar2 /*18*/]))
									{
										if (!unk_0xAD203DB71ADF6E57(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
										{
											if (unk_0x221AC1EF116F6053(Local_203[iVar2 /*18*/], -1794415470) != 1 && unk_0x557C6E696286C67A(Local_130[iVar0 /*18*/], -1))
											{
												unk_0xA34C986DDC3D92F1(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x2DE0B96E966FD817(Local_203[iVar3 /*18*/]))
										{
											if (!unk_0xAD203DB71ADF6E57(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
											{
												if (unk_0x221AC1EF116F6053(Local_203[iVar3 /*18*/], -1794415470) != 1 && unk_0x557C6E696286C67A(Local_130[iVar0 /*18*/], 0))
												{
													unk_0xA34C986DDC3D92F1(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x2DE0B96E966FD817(Local_203[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x2DE0B96E966FD817(Local_203[iVar3 /*18*/])))
										{
											if ((unk_0xAD203DB71ADF6E57(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0xAD203DB71ADF6E57(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xECFECDAD51A6184F(iLocal_90, 0))
											{
												if (unk_0x221AC1EF116F6053(Local_203[iVar2 /*18*/], -1273030092) != 1 && unk_0x221AC1EF116F6053(Local_203[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x15EBFEEB77BF84B7(Local_203[iVar2 /*18*/], 3, 0);
													unk_0x15EBFEEB77BF84B7(Local_203[iVar2 /*18*/], 1, 1);
													unk_0x15EBFEEB77BF84B7(Local_203[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0xEA63F3EA64C8860A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0xEA63F3EA64C8860A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0xEA63F3EA64C8860A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0xEA63F3EA64C8860A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x1533C7835DBFC18D(Local_203[iVar2 /*18*/], func_39((3f * unk_0x4970185D4CC64616(Local_65, Local_130[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_573 > 3f && unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) < 10f)
									{
										Local_130[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x2DE0B96E966FD817(Local_203[iVar2 /*18*/]))
								{
									if (!unk_0x81060B34CE9997E9(Local_203[iVar2 /*18*/]))
									{
										unk_0xDEB0A02F25120B62(Local_203[iVar2 /*18*/], 2, 0);
										unk_0xEA36CC2E7750344B(Local_203[iVar2 /*18*/], unk_0xA16EC202D9D35357(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x2DE0B96E966FD817(Local_203[iVar3 /*18*/]))
									{
										if (!unk_0x81060B34CE9997E9(Local_203[iVar3 /*18*/]))
										{
											unk_0xDEB0A02F25120B62(Local_203[iVar3 /*18*/], 2, 0);
											unk_0xEA36CC2E7750344B(Local_203[iVar3 /*18*/], unk_0xA16EC202D9D35357(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x202EF5D8203705EF(Local_203[iVar2 /*18*/], 0))
							{
								unk_0xBB5AA994E06B28E2(Local_203[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_85, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x2DE0B96E966FD817(Local_203[iVar3 /*18*/]))
								{
									if (unk_0x202EF5D8203705EF(Local_203[iVar3 /*18*/], 0))
									{
										unk_0xBB5AA994E06B28E2(Local_203[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_85, iVar3);
									}
								}
							}
							if (unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) > 15f)
								{
									Local_130[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x2DE0B96E966FD817(Local_203[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x2DE0B96E966FD817(Local_203[iVar3 /*18*/]))) && unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x0E7E162F5A49FAAA(Local_203[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x0E7E162F5A49FAAA(Local_203[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x0E7E162F5A49FAAA(Local_130[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_59, Local_130[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_59, Local_203[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0xAD203DB71ADF6E57(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								unk_0x3195B1192FB0EA3D(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0xAD203DB71ADF6E57(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									unk_0x3195B1192FB0EA3D(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_617)
			{
				iVar0 = 0;
				while (iVar0 < Local_130.f_0)
				{
					iVar5 = func_60(iVar0);
					if (!unk_0x2DE0B96E966FD817(Local_203[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
					{
						if (!unk_0x2DE0B96E966FD817(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0xAD203DB71ADF6E57(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0x221AC1EF116F6053(Local_203[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xA34C986DDC3D92F1(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x2DE0B96E966FD817(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0xAD203DB71ADF6E57(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									if (unk_0x221AC1EF116F6053(Local_203[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xA34C986DDC3D92F1(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x2DE0B96E966FD817(Local_203[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x2DE0B96E966FD817(Local_203[iVar6 /*18*/])))
							{
								if ((unk_0xAD203DB71ADF6E57(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0xAD203DB71ADF6E57(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xECFECDAD51A6184F(iLocal_90, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x09560C7DE2A384BD() - iLocal_84)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x09560C7DE2A384BD() - iLocal_84) > 4000)
									{
										unk_0x119BF35B217BFA7D(Local_203[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_130.f_0)
										{
											if ((unk_0xECFECDAD51A6184F(Local_130[iVar8 /*18*/], 0) && !unk_0x2DE0B96E966FD817(func_55(iVar8, 0))) && unk_0xAD203DB71ADF6E57(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0))
											{
												unk_0x937785D9C1929236(func_55(iVar8, 0));
												unk_0xEA63F3EA64C8860A(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_617 = 1;
									}
									else if (unk_0x221AC1EF116F6053(Local_203[iVar5 /*18*/], -1273030092) != 1 && unk_0x221AC1EF116F6053(Local_203[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x15EBFEEB77BF84B7(Local_203[iVar5 /*18*/], 3, 0);
										unk_0x15EBFEEB77BF84B7(Local_203[iVar5 /*18*/], 1, 1);
										unk_0x15EBFEEB77BF84B7(Local_203[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0xEA63F3EA64C8860A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0xEA63F3EA64C8860A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0xEA63F3EA64C8860A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0xEA63F3EA64C8860A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x2DE0B96E966FD817(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x81060B34CE9997E9(Local_203[iVar5 /*18*/]))
							{
								unk_0xDEB0A02F25120B62(Local_203[iVar5 /*18*/], 2, 0);
								unk_0xEA36CC2E7750344B(Local_203[iVar5 /*18*/], unk_0xA16EC202D9D35357(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x2DE0B96E966FD817(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x81060B34CE9997E9(Local_203[iVar6 /*18*/]))
								{
									unk_0xDEB0A02F25120B62(Local_203[iVar6 /*18*/], 2, 0);
									unk_0xEA36CC2E7750344B(Local_203[iVar6 /*18*/], unk_0xA16EC202D9D35357(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_616, 10f))
				{
					func_37(iLocal_616);
				}
				iLocal_616++;
				if (iLocal_616 > 3)
				{
					iLocal_616 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_616, 1125515264))
			{
				func_37(iLocal_616);
			}
			iLocal_616++;
			if (iLocal_616 > 3)
			{
				iLocal_616 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
		{
			if (iLocal_48 > 1)
			{
				if (!unk_0x06771AF7795B3ECF(sLocal_372))
				{
					func_28(iVar0);
					if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/].f_2) && unk_0x5A6F774C8E17AA21(Local_203[iVar0 /*18*/].f_2))
					{
						if (!unk_0x202EF5D8203705EF(Local_203[iVar0 /*18*/], 0))
						{
							if (unk_0x01F2C76388A112CD(Local_203[iVar0 /*18*/].f_2))
							{
								if (unk_0xDBE30D8105A6CC0C(Local_203[iVar0 /*18*/]))
								{
									unk_0x423D1EBE54B18555(Local_203[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!unk_0xDBE30D8105A6CC0C(Local_203[iVar0 /*18*/]))
							{
								unk_0x423D1EBE54B18555(Local_203[iVar0 /*18*/].f_2, 1);
							}
							if (!unk_0x0E7E162F5A49FAAA(Local_203[iVar0 /*18*/]))
							{
								if (!unk_0x95EDB2DEFA5BB405(Local_203[iVar0 /*18*/], sLocal_372, func_27(iVar0), 3))
								{
									if (!Local_203[iVar0 /*18*/].f_11)
									{
										if (!unk_0x95EDB2DEFA5BB405(Local_203[iVar0 /*18*/], sLocal_372, "grip", 3))
										{
											unk_0x5B5659C49032B96C(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_203[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_203[iVar0 /*18*/].f_11)
								{
									unk_0x5B5659C49032B96C(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_203[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_203[iVar0 /*18*/].f_10)
							{
								unk_0x0EF340B9F1496462(sLocal_372);
								if (unk_0x159E168B54729167(sLocal_372))
								{
									unk_0x8CD99C4C4D0219C7(Local_203[iVar0 /*18*/], sLocal_372);
									Local_203[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_203[iVar0 /*18*/].f_11)
							{
								unk_0x5B5659C49032B96C(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_203[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_203[iVar0 /*18*/].f_10)
							{
								unk_0xB53E9FDF79E6F7F2(Local_203[iVar0 /*18*/]);
								Local_203[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x74AE4BA75DB7653F(Local_203[iVar0 /*18*/]) && func_26(Local_203[iVar0 /*18*/], unk_0x6ADAC08D70C79DE5(Local_203[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x01F2C76388A112CD(Local_203[iVar0 /*18*/].f_2))
							{
								unk_0x423D1EBE54B18555(Local_203[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!unk_0x01F2C76388A112CD(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x423D1EBE54B18555(Local_203[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_203[iVar0 /*18*/].f_11)
						{
							unk_0x5B5659C49032B96C(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_203[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_203[iVar0 /*18*/].f_10)
						{
							unk_0xB53E9FDF79E6F7F2(Local_203[iVar0 /*18*/]);
							Local_203[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_46 != 7)
			{
				if (unk_0xFE57C063743B552A(Local_203[iVar0 /*18*/]) && unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
				{
					func_172(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_46 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0x538DF9E5B1DF01EB(Local_130[iVar0 /*18*/]))
			{
				if (unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), Local_130[iVar0 /*18*/], 0))
					{
						func_172(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0xE44A580B551C3645(iParam0) && !unk_0xE44A580B551C3645(iParam1))
	{
		if (unk_0xD9275EB8FA656B5C(iParam0, iParam1))
		{
			if (unk_0xD8A521688BDBE867(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xD8A521688BDBE867(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)
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

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3(Local_203[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_374);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0)) > 0.9f)
					{
						unk_0x29DB79DD4D939B38(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)], 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x29DB79DD4D939B38(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sLocal_372, "grip", 3))
			{
				unk_0x29DB79DD4D939B38(&(Local_203[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		iVar0 = func_58(iLocal_567);
		if (((unk_0x538DF9E5B1DF01EB(Local_130[iLocal_567 /*18*/]) && unk_0xECFECDAD51A6184F(Local_130[iLocal_567 /*18*/], 0)) && unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/])) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x2C53E9EE23994172(Local_130[iLocal_567 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xD8A521688BDBE867(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					if (!Local_203[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x09560C7DE2A384BD() - Local_203[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x95EDB2DEFA5BB405(Local_203[iVar0 /*18*/], sLocal_373, "base", 3))
						{
							unk_0x5B5659C49032B96C(Local_203[iVar0 /*18*/], sLocal_373, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_203[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xD8A521688BDBE867(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					unk_0xE97F7AB236A98542(Local_203[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_85, 1070134723, 1048576000);
					Local_203[iVar0 /*18*/].f_9 = 1;
					Local_203[iVar0 /*18*/].f_13 = unk_0x09560C7DE2A384BD();
				}
			}
			else if (Local_203[iVar0 /*18*/].f_9)
			{
				if ((unk_0x09560C7DE2A384BD() - Local_203[iVar0 /*18*/].f_13) > 2000)
				{
					Local_203[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_567++;
		if (iLocal_567 >= Local_130.f_0)
		{
			iLocal_567 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x2DE0B96E966FD817(Local_203[iParam0 /*18*/]) && !unk_0x2DE0B96E966FD817(iLocal_85))
	{
		iVar0 = 15;
		Var1 = { Local_62 - Local_203[iParam0 /*18*/].f_6 };
		Var4 = { unk_0x0A0652D7F8135EB9(Local_203[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0x3545D662A0A53653(fVar7) < 10f)
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
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0x889D01384B54BCE3(Local_203[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_203[iParam0 /*18*/].f_15 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(Local_203[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_374));
}

float func_34(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_35(Param0) };
	Param3 = { func_35(Param3) };
	fVar0 = (unk_0xCE9082F704DCC33A(Param3.f_1, Param3.f_0) - unk_0xCE9082F704DCC33A(Param0.f_1, Param0.f_0));
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

Vector3 func_35(struct<3> Param0)
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

bool func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x06771AF7795B3ECF(sLocal_373))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x889D01384B54BCE3(Local_203[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(Local_130[iParam0 /*18*/]) && unk_0x0E7E162F5A49FAAA(Local_130[iParam0 /*18*/]))
	{
		unk_0x2F2948A2506AA404(&(Local_130[iParam0 /*18*/]));
	}
	if (unk_0x5660C8AFDD9C1721(Local_130[iParam0 /*18*/].f_1))
	{
		unk_0xB6FB9702660D84F6(&(Local_130[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_58(iParam0);
		}
		else
		{
			iVar1 = func_60(iParam0);
		}
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar1 /*18*/]) && unk_0x0E7E162F5A49FAAA(Local_203[iVar1 /*18*/]))
		{
			if (unk_0x538DF9E5B1DF01EB(Local_203[iVar1 /*18*/]))
			{
				unk_0xD4C90F16EBBFE620(&(Local_203[iVar1 /*18*/].f_2));
			}
			if (unk_0x5660C8AFDD9C1721(Local_203[iVar1 /*18*/].f_1))
			{
				unk_0xB6FB9702660D84F6(&(Local_203[iVar1 /*18*/].f_1));
			}
			unk_0x51A89CCC8A5317D0(&(Local_203[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x538DF9E5B1DF01EB(Local_130[iParam0 /*18*/]))
	{
		if (unk_0xECFECDAD51A6184F(Local_130[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_130[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x0E7E162F5A49FAAA(Local_130[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(func_55(iParam0, 0)))
	{
		if (!unk_0x2DE0B96E966FD817(func_55(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x0E7E162F5A49FAAA(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(func_55(iParam0, 1)))
	{
		if (!unk_0x2DE0B96E966FD817(func_55(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x0E7E162F5A49FAAA(func_55(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
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

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (((((unk_0x538DF9E5B1DF01EB(iParam1) && iParam0 != iParam1) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(iParam1))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(iParam1))) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iParam1))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(iParam1)))
		{
			if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_357, unk_0xBF8499F46AD9093A(iParam1, 1), unk_0x1A6D58515B4120D5(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xCC6B7A025E72F529(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
					*uParam5 = unk_0xD1613577C809E98B(iParam1);
				}
			}
			if (!unk_0x0E7E162F5A49FAAA(iParam0))
			{
				*uParam6 = unk_0x09560C7DE2A384BD();
			}
			else if ((unk_0x09560C7DE2A384BD() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x7A98E0DD2E6FAB7A(*uParam2, 6f))
						{
							unk_0x11E84835ED616A25(*uParam2, 6f, 0);
							unk_0x597CB55BA0825820(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0x6C43BF7625967266(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x34639238667C4381(iParam0, *uParam3);
							unk_0xAC894C93914464C2(iParam0);
							unk_0x213AEEC6A495123F(iParam0, func_39((unk_0x5AF66EDEBFA76B9B(iParam1) + 10f), 10f, 60f));
							unk_0x6EBB9B0E214CCF0F(iParam0, 1, 1);
							*uParam6 = unk_0x09560C7DE2A384BD();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x09560C7DE2A384BD();
		}
	}
}

int func_41(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
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
	
	if (unk_0x538DF9E5B1DF01EB(iParam2))
	{
		unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var7, &Var10);
		unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x3545D662A0A53653((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x3545D662A0A53653((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x3545D662A0A53653((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x3545D662A0A53653(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x3545D662A0A53653(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0x6C43BF7625967266(iParam2, Param3, 1, 0, 0, 1);
		unk_0x0BBAD8A322CB595E(iParam2, Param6, 2, 1);
		Var1 = { unk_0xA783C6007920169C(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0xA783C6007920169C(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xCC5DCC29F6E83651(Var4, Var1, fVar22, 19, unk_0xA16EC202D9D35357(), 4);
		if (unk_0x65595DB38D0F502A(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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

void func_44()
{
	bool bVar0;
	
	if ((unk_0x09560C7DE2A384BD() - iLocal_566) > 100)
	{
		if ((unk_0x09560C7DE2A384BD() - Local_203[iLocal_565 /*18*/].f_12) > 500)
		{
			if (unk_0x538DF9E5B1DF01EB(Local_203[iLocal_565 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iLocal_565 /*18*/]))
			{
				bVar0 = true;
				if (!Local_203[iLocal_565 /*18*/].f_9 && unk_0x202EF5D8203705EF(Local_203[iLocal_565 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x95EDB2DEFA5BB405(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565), 3) && unk_0x4CB0BCFFEC712BA2(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) > 0.5f) && unk_0x4CB0BCFFEC712BA2(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) < 0.75f) || Local_203[iLocal_565 /*18*/].f_9)
					{
						unk_0x465DC33550A13251("scr_rcpap1_camera", Local_203[iLocal_565 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_565 % 3) == 0)
						{
							unk_0x859FD7253E29A93D(-1, "SHUTTER_FLASH", unk_0xBF8499F46AD9093A(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_565 % 3) == 1)
						{
							unk_0x859FD7253E29A93D(-1, "SHUTTER", unk_0xBF8499F46AD9093A(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x859FD7253E29A93D(-1, "FLASH", unk_0xBF8499F46AD9093A(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_203[iLocal_565 /*18*/].f_12 = unk_0x09560C7DE2A384BD();
					}
					iLocal_566 = unk_0x09560C7DE2A384BD();
				}
			}
			iLocal_565++;
			if (iLocal_565 >= Local_203.f_0)
			{
				iLocal_565 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0x2DE0B96E966FD817(Local_203[iParam1 /*18*/]) && !unk_0x2DE0B96E966FD817(iParam0))
	{
		if (!unk_0x68E6C2D89A534992(Local_203[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0x221AC1EF116F6053(Local_203[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x1CAB36EC4E43E586(Local_203[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x09560C7DE2A384BD() - Local_203[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x95EDB2DEFA5BB405(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 3))
			{
				unk_0x5B5659C49032B96C(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_203[iParam1 /*18*/].f_13 = unk_0x09560C7DE2A384BD();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x2DE0B96E966FD817(Local_203[iParam1 /*18*/]) && !unk_0x2DE0B96E966FD817(iParam0))
	{
		Var0 = { unk_0xA783C6007920169C(iParam0, func_48(iParam1)) };
		switch (Local_203[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_203[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x221AC1EF116F6053(Local_203[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 5f)
				{
					Local_203[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_203[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_203[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (unk_0x221AC1EF116F6053(Local_203[iParam1 /*18*/], 713668775) != 1)
				{
					Local_203[iParam1 /*18*/].f_16 = (Local_203[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_35(unk_0xBF8499F46AD9093A(iParam4, 1) - Param0) };
	iVar3 = unk_0x3C616B96B92181C5(Var0.f_0, Var0.f_1);
	Local_203[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x937785D9C1929236(Local_203[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_203[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x353F4B963593F141(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x353F4B963593F141(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_48(int iParam0)
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

void func_49()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x5660C8AFDD9C1721(Local_203[iVar0 /*18*/].f_1))
		{
			if (unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
			{
				unk_0xB6FB9702660D84F6(&(Local_203[iVar0 /*18*/].f_1));
			}
			else if (unk_0x202EF5D8203705EF(Local_203[iVar0 /*18*/], 0))
			{
				unk_0xB6FB9702660D84F6(&(Local_203[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]) && !unk_0x202EF5D8203705EF(Local_203[iVar0 /*18*/], 0))
		{
			Local_203[iVar0 /*18*/].f_1 = func_174(Local_203[iVar0 /*18*/], 1, 145);
			unk_0xFDA1FE98ECD75505(Local_203[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0xECFECDAD51A6184F(Local_130[iVar0 /*18*/], 0))
		{
			if (unk_0x5660C8AFDD9C1721(Local_130[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x19E074E292E9B9F6(Local_130[iVar0 /*18*/].f_1) };
				Var4 = { Local_130[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0xEF247769E001D314(Local_130[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
				{
					unk_0xB6FB9702660D84F6(&(Local_130[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
			{
				Local_130[iVar0 /*18*/].f_1 = func_50(Local_130[iVar0 /*18*/].f_8, 0);
				unk_0x1AD45E3CF020D50D(Local_130[iVar0 /*18*/].f_1, 1);
				unk_0xFDA1FE98ECD75505(Local_130[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x85C00B9AEF9CC0BE(Local_130[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0x5660C8AFDD9C1721(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0xB6FB9702660D84F6(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_51(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xE3C88401E17BFBB2(uParam0) + 1;
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x557C6E696286C67A(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xD8A521688BDBE867(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xA16EC202D9D35357())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x2DE0B96E966FD817(iVar2))
					{
						if (unk_0x2303B9FE7CF81971(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xD8A521688BDBE867(iParam0, (iVar0 - 1));
					if (!unk_0x2DE0B96E966FD817(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_53(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x2DE0B96E966FD817(Local_203[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(Local_203[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0x221AC1EF116F6053(Local_203[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x353F4B963593F141(Local_203[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x3545D662A0A53653((func_54(unk_0xD1613577C809E98B(Local_203[iParam0 /*18*/])) - func_54(fParam4))) > 10f)
		{
			if (unk_0x221AC1EF116F6053(Local_203[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x4341FCA05D2E4938(Local_203[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_203[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x06771AF7795B3ECF(sParam7))
					{
						if (!unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x4CB0BCFFEC712BA2(Local_203[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x95EDB2DEFA5BB405(Local_203[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x4CB0BCFFEC712BA2(Local_203[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x5B5659C49032B96C(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_54(float fParam0)
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

var func_55(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_203[func_60(iParam0) /*18*/];
	}
	return Local_203[func_58(iParam0) /*18*/];
}

void func_56(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_130[iParam0 /*18*/] = unk_0x9BB6F54E415071A1(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_130[iParam0 /*18*/] = unk_0x9BB6F54E415071A1(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		unk_0x716275F05FAE278C(Local_130[iParam0 /*18*/], 0);
	}
	unk_0xAC894C93914464C2(Local_130[iParam0 /*18*/]);
	unk_0xF6F04B5324C9DA32(Local_130[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x538DF9E5B1DF01EB(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0x538DF9E5B1DF01EB(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam4);
		}
		if (!unk_0x2DE0B96E966FD817(func_55(iParam0, 0)) && unk_0xECFECDAD51A6184F(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x3195B1192FB0EA3D(func_55(iParam0, 0), Local_130[iParam0 /*18*/], -1);
		}
		if (!unk_0x2DE0B96E966FD817(func_55(iParam0, 1)) && unk_0xECFECDAD51A6184F(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x3195B1192FB0EA3D(func_55(iParam0, 1), Local_130[iParam0 /*18*/], 0);
		}
		unk_0x6EBB9B0E214CCF0F(Local_130[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam4)
{
	Local_203[iParam0 /*18*/] = unk_0x6F9DE0DE8363ADF1(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x15EBFEEB77BF84B7(Local_203[iParam0 /*18*/], 1, 0);
	unk_0x2C4E82CF88213975(Local_203[iParam0 /*18*/], 1);
	unk_0x15EBFEEB77BF84B7(Local_203[iParam0 /*18*/], 0, 1);
	unk_0x4F0C83A389EC7C63(Local_203[iParam0 /*18*/], 3);
	unk_0x2D79C863A05FB8F7(Local_203[iParam0 /*18*/], 1);
	unk_0x15EBFEEB77BF84B7(Local_203[iParam0 /*18*/], 17, 1);
	unk_0xDEB0A02F25120B62(Local_203[iParam0 /*18*/], 2, 0);
	unk_0x940C6B8BF42B190B(Local_203[iParam0 /*18*/], 0);
	unk_0x2686393074E14730(Local_203[iParam0 /*18*/], 1);
	unk_0xFDEA10D71178C300(Local_203[iParam0 /*18*/], 100);
	unk_0xC08D5CB36D708A34(Local_203[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0xA1478EBA54DDE31B(Local_203[iParam0 /*18*/], 101, 1);
	unk_0xA1478EBA54DDE31B(Local_203[iParam0 /*18*/], 185, 0);
	unk_0x4C31C3561F937348(Local_203[iParam0 /*18*/], 300);
	unk_0x42544C0CC4949BD5(Local_203[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_69)
	{
		unk_0xE31C4C317516E7A7(Local_203[iParam0 /*18*/], 1);
		unk_0x4C31C3561F937348(Local_203[iParam0 /*18*/], 500);
	}
	unk_0x383868E60E28653A(Local_203[iParam0 /*18*/], 1);
	unk_0x15EBFEEB77BF84B7(Local_203[iParam0 /*18*/], 2, 1);
	unk_0x00CFDDE7ACCA68D1(Local_203[iParam0 /*18*/], 2f);
	unk_0x940C6B8BF42B190B(Local_203[iParam0 /*18*/], 0);
	unk_0x49D26ECEB56A3095(Local_203[iParam0 /*18*/], 0);
	Local_203[iParam0 /*18*/].f_2 = unk_0x8AC4394F3C9173EE(joaat("prop_pap_camera_01"), unk_0xCDC62EA66023BC94(Local_203[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x07CDE0236CD8AAC8(Local_203[iParam0 /*18*/].f_2, Local_203[iParam0 /*18*/], unk_0x879EC196F941E547(Local_203[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x538DF9E5B1DF01EB(Local_203[0 /*18*/].f_2))
	{
		unk_0x423D1EBE54B18555(Local_203[0 /*18*/].f_2, 0);
	}
	Local_203[iParam0 /*18*/].f_17 = unk_0x6360D2FA3AD62AD1(Local_203[iParam0 /*18*/]);
}

int func_58(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_59(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_203[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_203[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_60(int iParam0)
{
	return iParam0 * 2;
}

void func_61(int iParam0)
{
	Local_130[iParam0 /*18*/].f_17 = 0;
}

int func_62()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		bVar0 = false;
		if (func_65())
		{
			if (unk_0x538DF9E5B1DF01EB(func_64()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(func_64(), 1), Local_62) < 5f && unk_0x5AF66EDEBFA76B9B(iLocal_90) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
		{
			if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0) && unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
			{
				fLocal_569 = (fLocal_569 + unk_0x0C380BB05B91042D());
			}
			else if (fLocal_569 > 0f)
			{
				fLocal_569 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_568 = (fLocal_568 + unk_0x0C380BB05B91042D());
		}
		else if (fLocal_568 > 0f)
		{
			fLocal_568 = 0f;
		}
		if (fLocal_568 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_70)
		{
			if (!unk_0xD9275EB8FA656B5C(iLocal_85, iLocal_90))
			{
				if (unk_0xEAABEAE1DB589285(iLocal_85))
				{
					bVar1 = true;
				}
				iLocal_70 = 0;
			}
		}
		if (!iLocal_70)
		{
			if (unk_0xD9275EB8FA656B5C(iLocal_85, iLocal_90))
			{
				iLocal_70 = 1;
			}
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xECFECDAD51A6184F(iLocal_90, 0) && (!bLocal_367 || iLocal_46 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_62, Local_59) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xECFECDAD51A6184F(iLocal_90, 0) && func_63(iLocal_90)) && (!bLocal_367 || iLocal_46 == 1)) && unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(iLocal_85, 1), Local_55) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xECFECDAD51A6184F(iLocal_90, 0) && unk_0x21FF064386DC6A0A(iLocal_90))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x444ECD635D5FD45F(0, 2) == 1)
			{
				sLocal_370 = "REPAP_GUP";
			}
			else
			{
				sLocal_370 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			if (((unk_0x5E8694417D361328(iParam0, 0, 7000) || unk_0x5E8694417D361328(iParam0, 3, 30000)) || unk_0x5E8694417D361328(iParam0, 2, 30000)) || unk_0x5E8694417D361328(iParam0, 1, 40000))
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

int func_64()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if ((unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/])) && !unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_203[iVar1 /*18*/];
	}
	return 0;
}

int func_65()
{
	if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0) && unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (func_67(Local_203[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]) || unk_0xE44A580B551C3645(Local_203[iVar0 /*18*/]))
			{
				if (iLocal_385[iVar0] > 50)
				{
					iLocal_348++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 7))
		{
			unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0xF6BC67E137183D3F(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_59) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6) && !unk_0xB7761EC96D6D9B92(unk_0xA16EC202D9D35357())) && unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357())) && unk_0xB7A628320EFF8E47(Local_59, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iParam0) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iParam0)) && (func_68(Local_59, iParam0) && unk_0xB7A628320EFF8E47(Local_59, unk_0xBF8499F46AD9093A(iParam0, 1)) < 100f)) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
			{
				return 1;
			}
			if (iLocal_384 > 150)
			{
				return 1;
			}
		}
		if (unk_0x14A03700BE8DDF33(unk_0xCDC62EA66023BC94(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x538DF9E5B1DF01EB(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0xBF8499F46AD9093A(iParam3, 1) };
	Var3 = { unk_0xA783C6007920169C(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_69(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_69(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_70()
{
	if (iLocal_46 != 11)
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_361))
		{
			unk_0xB6FB9702660D84F6(&uLocal_361);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_362))
		{
			unk_0xB6FB9702660D84F6(&uLocal_362);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_359))
		{
			unk_0xB6FB9702660D84F6(&uLocal_359);
		}
		iLocal_47 = iLocal_46;
		iLocal_46 = 11;
	}
	else if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
	{
		if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) < 3)
		{
			if (!func_73())
			{
				func_71("REPAP_COP1");
			}
		}
		else
		{
			func_172(5);
		}
	}
	else if (func_5(&Local_394, cLocal_371, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_46 = iLocal_47;
	}
}

void func_71(char* sParam0)
{
	if ((unk_0x09560C7DE2A384BD() - iLocal_666) > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x09560C7DE2A384BD();
			}
		}
	}
}

int func_72()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

bool func_73()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
	{
		if (!iLocal_349 && (unk_0x09560C7DE2A384BD() - iLocal_351) > 5000)
		{
			if (iLocal_81 > 10)
			{
				iLocal_349 = 1;
				iLocal_81 = 0;
			}
		}
		if ((!iLocal_354 && !iLocal_349) && (unk_0x09560C7DE2A384BD() - iLocal_355) > 4000)
		{
			if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6) && unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				if (iLocal_356 > 2)
				{
					if (!Global_3 && !bLocal_69)
					{
						func_172(5);
					}
				}
				else
				{
					iLocal_354 = 1;
					iLocal_356++;
				}
			}
		}
		if (((!iLocal_352 && !iLocal_349) && !iLocal_354) && (unk_0x09560C7DE2A384BD() - iLocal_353) > 15000)
		{
			if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6) && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iLocal_352 = 1;
			}
		}
		if (iLocal_349)
		{
			if (iLocal_350)
			{
				if (func_5(&Local_394, cLocal_371, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_351 = unk_0x09560C7DE2A384BD();
					iLocal_349 = 0;
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_351 = unk_0x09560C7DE2A384BD();
				iLocal_349 = 0;
				iLocal_350 = 1;
			}
		}
		if (iLocal_354)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_355 = unk_0x09560C7DE2A384BD();
				iLocal_354 = 0;
			}
		}
		if (iLocal_352)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_353 = unk_0x09560C7DE2A384BD();
				iLocal_352 = 0;
			}
		}
	}
	return ((iLocal_352 || iLocal_354) || iLocal_349);
}

void func_74()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		unk_0x2686393074E14730(iLocal_85, 1);
		unk_0x2966D41514EAE84B(255, uLocal_68, joaat("player"));
		if (!Global_3 && !bLocal_69)
		{
			unk_0xA1478EBA54DDE31B(iLocal_85, 317, 1);
			unk_0x2C4E82CF88213975(iLocal_85, 0);
		}
	}
	func_78(-1, 0);
	func_75();
	unk_0xB8615B27EDB1B2FA(62);
	func_268();
}

void func_75()
{
	func_76();
}

int func_76()
{
	if (func_77(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_95(iParam0))
	{
		func_94(iParam0, iParam1);
		if (!func_93(51))
		{
			func_89("RE_REWARD", 1, 0, 4000, 10000, func_92(), 0, 138, 0);
			func_88(51);
		}
		if (func_87(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_79(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_79(7);
			}
			else
			{
				func_79(1);
			}
		}
	}
}

void func_79(int iParam0)
{
	Global_97425 = iParam0;
}

void func_80(int iParam0, var uParam1, var uParam2)
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
		func_84((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_81();
	}
}

void func_81()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_83(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_82() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_76();
				}
			}
		}
	}
}

int func_82()
{
	return Global_24446;
}

int func_83(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_85()
{
	return Global_1312729;
}

int func_86(int iParam0, int iParam1)
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

int func_87(int iParam0)
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

void func_88(int iParam0)
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_91();
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_92()
{
	func_20();
	switch (Global_97439.f_1729.f_539.f_3213)
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

int func_93(int iParam0)
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_95(int iParam0)
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

int func_96()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_97(Var0);
	return uVar16;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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

int func_98()
{
	if (Global_24681)
	{
		func_79(4);
		return 1;
	}
	return 0;
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_359))
	{
		unk_0xB6FB9702660D84F6(&uLocal_359);
	}
	switch (iLocal_368)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
				{
					if (unk_0x0E7E162F5A49FAAA(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_203[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 900f)
					{
						if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0xD4C90F16EBBFE620(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x51A89CCC8A5317D0(&(Local_203[iVar0 /*18*/]));
					}
				}
				if (unk_0x5660C8AFDD9C1721(Local_203[iVar0 /*18*/].f_1))
				{
					unk_0xB6FB9702660D84F6(&(Local_203[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x538DF9E5B1DF01EB(Local_130[iVar0 /*18*/]))
				{
					if (unk_0x0E7E162F5A49FAAA(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_130[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 900f)
					{
						unk_0x2F2948A2506AA404(&(Local_130[iVar0 /*18*/]));
					}
				}
				if (unk_0x5660C8AFDD9C1721(Local_130[iVar0 /*18*/].f_1))
				{
					unk_0xB6FB9702660D84F6(&(Local_130[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_672 = 0;
			iLocal_368++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if ((unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/])) && !unk_0xE44A580B551C3645(Local_203[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(unk_0xA16EC202D9D35357(), iVar0);
					if (unk_0x0E7E162F5A49FAAA(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_203[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 2500f)
					{
						if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0xD4C90F16EBBFE620(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x51A89CCC8A5317D0(&(Local_203[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_672)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(func_64(), 1)) < 100f)
				{
					iVar2 = unk_0x444ECD635D5FD45F(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 7);
						func_18(&Local_394, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[6 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[6 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[7 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[7 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[8 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[8 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 5);
						iVar2 = unk_0x444ECD635D5FD45F(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 5);
						iVar2 = unk_0x444ECD635D5FD45F(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x538DF9E5B1DF01EB(Local_394[iVar2 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_66())
			{
				func_184();
				func_268();
			}
			if (iVar1 == 0)
			{
				func_268();
			}
			break;
	}
}

void func_100(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (!iLocal_671)
	{
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
			{
				unk_0x937785D9C1929236(Local_203[iVar0 /*18*/]);
				Local_203[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_671 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x5660C8AFDD9C1721(Local_203[iVar0 /*18*/].f_1))
		{
			unk_0xB6FB9702660D84F6(&(Local_203[iVar0 /*18*/].f_1));
		}
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x2DE0B96E966FD817(iLocal_85))
				{
					if (unk_0x202EF5D8203705EF(Local_203[iVar0 /*18*/], 0))
					{
						unk_0xBB5AA994E06B28E2(Local_203[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_85, iVar0);
					}
				}
				else if (unk_0x221AC1EF116F6053(Local_203[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xAC9F22F89987627B(Local_203[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x0E7E162F5A49FAAA(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_203[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_203[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 400f)
			{
				unk_0x51A89CCC8A5317D0(&(Local_203[iVar0 /*18*/]));
				if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/].f_2))
				{
					unk_0xD4C90F16EBBFE620(&(Local_203[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_130[iVar0 /*18*/]))
		{
			if ((unk_0x0E7E162F5A49FAAA(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(Local_130[iVar0 /*18*/], 1), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1)) > 2500f) && func_52(Local_130[iVar0 /*18*/], 0, 0, 0))
			{
				unk_0x3A3C5A6572B3C611(&(Local_130[iVar0 /*18*/]));
			}
		}
		if (unk_0x5660C8AFDD9C1721(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0xB6FB9702660D84F6(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_85))
	{
		if (unk_0x0E7E162F5A49FAAA(iLocal_85) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_62) > 2500f)
		{
			unk_0x6B3DDEE91652BE59(&iLocal_85);
			func_268();
		}
	}
	if (func_66() || func_67(iLocal_85, 1, 1))
	{
		func_172(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_368)
	{
		case 0:
			if (unk_0x5660C8AFDD9C1721(uLocal_359))
			{
				unk_0xB6FB9702660D84F6(&uLocal_359);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_360))
			{
				unk_0xB6FB9702660D84F6(&uLocal_360);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				unk_0x937785D9C1929236(iLocal_85);
				unk_0x00CFDDE7ACCA68D1(iLocal_85, 3f);
			}
			func_101();
			if (unk_0x2A488C176D52CCA5(Local_59, Local_62) < 30f)
			{
				if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_203.f_0)
					{
						if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
						{
							if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
							{
								unk_0x937785D9C1929236(Local_203[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_368++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_203.f_0)
				{
					if (unk_0x538DF9E5B1DF01EB(Local_203[iVar0 /*18*/]))
					{
						if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
						{
							unk_0x937785D9C1929236(Local_203[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_368++;
			}
			break;
		
		case 1:
			if (((unk_0xECFECDAD51A6184F(iLocal_90, 0) && unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0)) && !bLocal_367) && unk_0x557C6E696286C67A(iLocal_90, -1))
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0x6D98AA46076A68BE(&uVar2);
					unk_0xE8AD4366EEC5C2B2(0, iLocal_90);
					unk_0x9909D1FE2BA25A9B(0, iLocal_90, Local_52, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x3B47A0C2EA52BEBB(0, iLocal_90, Local_52, 288.7089f, 1, 50f, 0);
					unk_0x933DC7D168CD6A71(0, iLocal_90, unk_0xBF8499F46AD9093A(iLocal_90, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x3CB6843C8C4A8A21(0, iLocal_90, 0);
					unk_0x353F4B963593F141(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x963BB7C99350D827(uVar2);
					unk_0x0891776D0327B77A(iLocal_85, uVar2);
					unk_0x2AF68ED52DC74B7D(&uVar2);
				}
				else
				{
					unk_0x6D98AA46076A68BE(&uVar3);
					unk_0xE8AD4366EEC5C2B2(0, iLocal_90);
					unk_0x2B79CD6A5064FB19(0, iLocal_90, 15f, 786468);
					unk_0x963BB7C99350D827(uVar3);
					unk_0x0891776D0327B77A(iLocal_85, uVar3);
					unk_0x2AF68ED52DC74B7D(&uVar3);
				}
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x202EF5D8203705EF(iLocal_85, 0))
				{
					unk_0xBB5AA994E06B28E2(iLocal_85, 0, 0);
				}
				iLocal_368++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 3000f, -1, 1, 0);
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0x6D98AA46076A68BE(&uVar4);
					unk_0x353F4B963593F141(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x963BB7C99350D827(uVar4);
					unk_0x0891776D0327B77A(iLocal_85, uVar4);
					unk_0x2AF68ED52DC74B7D(&uVar4);
				}
				else
				{
					unk_0xAC9F22F89987627B(iLocal_85, 1193033728, 0);
				}
				iLocal_368 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_268();
			}
			break;
	}
}

void func_101()
{
	Global_14559 = 0;
	func_102();
}

void func_102()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_103()
{
	func_101();
	if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 900f)
	{
		unk_0x937785D9C1929236(iLocal_85);
		if (func_5(&Local_394, cLocal_371, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_184();
			func_172(10);
		}
		unk_0xA9465591B42213AE(iLocal_85, -2065892691);
	}
	else
	{
		func_184();
		func_172(10);
	}
}

void func_104()
{
	var uVar0;
	
	switch (iLocal_368)
	{
		case 0:
			func_133();
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_359))
				{
					uLocal_359 = func_174(iLocal_85, 0, 145);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_362))
				{
					unk_0xB6FB9702660D84F6(&uLocal_362);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_361))
				{
					unk_0xB6FB9702660D84F6(&uLocal_361);
				}
				unk_0x937785D9C1929236(iLocal_85);
				unk_0x6D98AA46076A68BE(&uVar0);
				unk_0x3CB6843C8C4A8A21(0, iLocal_90, 0);
				unk_0x353F4B963593F141(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
				unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x963BB7C99350D827(uVar0);
				unk_0x0891776D0327B77A(iLocal_85, uVar0);
				unk_0x2AF68ED52DC74B7D(&uVar0);
				if (unk_0x9A132E8DFAE1F524(iLocal_85))
				{
					unk_0xA7130AF256ED96A1(iLocal_85);
				}
				func_101();
				iLocal_368++;
			}
			break;
		
		case 1:
			if (!func_72() && !unk_0x2DE0B96E966FD817(iLocal_85))
			{
				if (unk_0x965556ACF6A83973(iLocal_85, Local_55, 3f, 3f, 3f, 0, 1, 0) && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_55, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				func_132(0);
				if (func_5(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
				{
					func_106(func_19(), 1, 150, 0, 1);
					iLocal_368++;
				}
			}
			break;
		
		case 3:
			if (!func_72() && !unk_0x2DE0B96E966FD817(iLocal_85))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_368++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_105())
				{
					func_74();
				}
			}
			break;
	}
}

int func_105()
{
	return 1;
}

void func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_107(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_131();
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
					func_130(99, 1);
					func_129(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_129(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_129(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_115(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_114(5))
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
							func_129(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_114(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_129(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_129(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_129(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_129(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_129(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_114(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_129(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_129(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_129(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_113(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_130(95, iParam3);
					break;
				
				case 1:
					func_130(97, iParam3);
					break;
				
				case 2:
					func_130(96, iParam3);
					break;
			}
			func_130(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_110(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_110(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_129(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_129(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_129(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
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
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_109(iParam0);
	if (Global_34915 == 15)
	{
		func_108(0);
	}
	return 1;
}

void func_108(bool bParam0)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_112() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_112() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_111(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_111(int iParam0)
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
		
		default:
	}
	return "";
}

int func_112()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_113(int iParam0)
{
	func_130(93, iParam0);
	func_130(29, iParam0);
	func_130(30, iParam0);
}

bool func_114(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_112() /*8064*/].f_5756.f_10, iParam0);
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_83(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_116(27, 1);
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1)
{
	if (func_12(14) && !func_128(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_127(&Global_2542838))
	{
		if (func_125(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_118(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_128(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	if (func_124(uParam0) < 0f)
	{
		func_123(uParam0, 0);
	}
	func_121(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_119(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_128(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	if (func_124(uParam0) < 0f)
	{
		func_123(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_120(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_121(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_122(uParam0, iVar0);
		iVar0++;
	}
	func_123(uParam0, (Global_2542837 - 0.5f));
}

void func_122(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_123(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_124(var uParam0)
{
	return uParam0->f_72;
}

bool func_125(var uParam0, int iParam1)
{
	return func_126(uParam0, iParam1) != -1;
}

int func_126(var uParam0, int iParam1)
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

bool func_127(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_128(int iParam0)
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

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_131()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

void func_132(bool bParam0)
{
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (iLocal_620 > 1)
		{
			if (!unk_0x68E6C2D89A534992(iLocal_85, unk_0xA16EC202D9D35357(), 60f))
			{
				iLocal_620 = 0;
				iLocal_621 = 0;
			}
		}
		switch (iLocal_620)
		{
			case 0:
				unk_0x937785D9C1929236(iLocal_85);
				unk_0x4745F9C50C63A48C(iLocal_85, unk_0xA16EC202D9D35357(), -1, 16, 2);
				unk_0x6D98AA46076A68BE(&uLocal_619);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 16, 2);
				unk_0x963BB7C99350D827(uLocal_619);
				unk_0x0891776D0327B77A(iLocal_85, uLocal_619);
				unk_0x2AF68ED52DC74B7D(&uLocal_619);
				iLocal_620++;
				break;
			
			case 1:
				if (unk_0x221AC1EF116F6053(iLocal_85, 242628503) != 1)
				{
					iLocal_620++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_621)
					{
						case 0:
							if (!unk_0x95EDB2DEFA5BB405(iLocal_85, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4CB0BCFFEC712BA2(iLocal_85, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 1:
							if (!unk_0x95EDB2DEFA5BB405(iLocal_85, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4CB0BCFFEC712BA2(iLocal_85, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 2:
							if (!unk_0x95EDB2DEFA5BB405(iLocal_85, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x4CB0BCFFEC712BA2(iLocal_85, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_133()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_363))
	{
		unk_0xB6FB9702660D84F6(&uLocal_363);
	}
}

void func_134()
{
	var uVar0;
	
	if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
	{
		switch (iLocal_368)
		{
			case 0:
				if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					func_133();
					func_138(1, 1, 0, 0);
					if (unk_0x5660C8AFDD9C1721(uLocal_361))
					{
						unk_0xB6FB9702660D84F6(&uLocal_361);
					}
					if (unk_0x5660C8AFDD9C1721(uLocal_359))
					{
						unk_0xB6FB9702660D84F6(&uLocal_359);
					}
					if (unk_0x5660C8AFDD9C1721(uLocal_360))
					{
						unk_0xB6FB9702660D84F6(&uLocal_360);
					}
					if (unk_0x9A132E8DFAE1F524(iLocal_85))
					{
						unk_0xA7130AF256ED96A1(iLocal_85);
					}
					func_136();
					if (!unk_0x2DE0B96E966FD817(iLocal_85))
					{
						unk_0x3116CFED02763A5D(iLocal_85, unk_0xA783C6007920169C(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x3116CFED02763A5D(unk_0xA16EC202D9D35357(), unk_0xA783C6007920169C(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 1280);
					if ((bLocal_367 || Global_3) || bLocal_69)
					{
						while (!func_135(&Local_394, cLocal_371, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_106(func_19(), 1, 750, 0, 1);
					if (!unk_0x2DE0B96E966FD817(iLocal_85))
					{
						unk_0x3116CFED02763A5D(iLocal_85, unk_0xA783C6007920169C(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
						unk_0x30D76463BF50C618(iLocal_85, 0, 0);
					}
					unk_0x3116CFED02763A5D(unk_0xA16EC202D9D35357(), unk_0xA783C6007920169C(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_368++;
				}
				break;
			
			case 1:
				if (!func_72() && !unk_0x2DE0B96E966FD817(iLocal_85))
				{
					unk_0x6D98AA46076A68BE(&uVar0);
					unk_0x3CB6843C8C4A8A21(0, iLocal_90, 0);
					unk_0x353F4B963593F141(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
					unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x963BB7C99350D827(uVar0);
					unk_0x0891776D0327B77A(iLocal_85, uVar0);
					unk_0x2AF68ED52DC74B7D(&uVar0);
					iLocal_368++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (!unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_367)
						{
							unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
							func_138(0, 1, 0, 0);
							iLocal_368 = 5;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xECFECDAD51A6184F(iLocal_90, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x3CB6843C8C4A8A21(unk_0xA16EC202D9D35357(), iLocal_90, 0);
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_90, 10000, 0, 3);
					iLocal_368++;
				}
				break;
			
			case 4:
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0) && !unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					func_138(0, 1, 0, 0);
					unk_0x542B8BF5C21F2470(iLocal_90, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_105())
					{
						if (!bLocal_367)
						{
							if (!func_93(19))
							{
								func_89("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_88(19);
							}
						}
						func_74();
					}
				}
				break;
			}
	}
}

bool func_135(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_136()
{
	Global_14559 = 0;
	func_137();
}

void func_137()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_138(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_144(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_9())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_143(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_144(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_143(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_139(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_139(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return 1;
	}
	if (func_140())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_140()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_142(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_85();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_143(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_145()
{
	if (Global_3 || bLocal_69)
	{
		unk_0x0D2C6B9B89E344E4(0.7f);
	}
	if (bLocal_367 && !unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (!func_165(iLocal_85))
		{
			if (!unk_0x5660C8AFDD9C1721(uLocal_359))
			{
				uLocal_359 = func_174(iLocal_85, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_362))
				{
					unk_0xB6FB9702660D84F6(&uLocal_362);
				}
			}
			else
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_362))
				{
					uLocal_362 = func_50(Local_55, 1);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_361))
				{
					unk_0xB6FB9702660D84F6(&uLocal_361);
				}
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_359))
			{
				unk_0xB6FB9702660D84F6(&uLocal_359);
			}
		}
		if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
		{
			if ((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0)) && func_164(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
			{
				iLocal_90 = 0;
				iLocal_90 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				unk_0x7B9576B4E099FB1F(iLocal_90, 1, 1);
				unk_0x542B8BF5C21F2470(iLocal_90, 1);
				unk_0x58E0272CBA220320(iLocal_90, 0, 0);
			}
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_362) && !unk_0x202EF5D8203705EF(iLocal_85, 0))
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_55, 15f, 15f, 15f, 0, 1, 0) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_172(4);
			}
		}
		else if (iLocal_368 != 100)
		{
			if (func_65() && func_163(1, 1, 1))
			{
				if (unk_0x0852C405AF94F670(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
			else if (!unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
			{
				if (unk_0x221AC1EF116F6053(iLocal_85, -1794415470) != 1)
				{
					unk_0xA34C986DDC3D92F1(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_368 != 100)
		{
			if (func_65() && func_163(1, 1, 1))
			{
				if (unk_0x0852C405AF94F670(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
		}
		func_159(1);
	}
	switch (iLocal_368)
	{
		case 0:
			if (func_65())
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x937785D9C1929236(iLocal_85);
				}
				if (func_5(&Local_394, cLocal_371, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xABC4F2A6D7D56CF4(0.5f);
					iLocal_368++;
				}
				if (!func_158())
				{
					func_153();
				}
			}
			break;
		
		case 1:
			if (!func_73())
			{
				if (func_65())
				{
					if (!func_72())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_5(&Local_394, cLocal_371, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_73())
			{
				if (func_65())
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_69)
						{
							iLocal_368 = 99;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_149("REPAP_HOME1", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_149("REPAP_HOME1M", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_149("REPAP_HOME1F", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (func_149("REPAP_HOME1T", (func_152() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 5:
			if (func_149("REPAP_HOME1L", (func_152() && !func_73())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_368++;
			}
			break;
		
		case 6:
			if (!func_73())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_152())
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_148("REPAP_HOME2"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 8:
			if (func_149("REPAP_HOME2L", (func_152() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 9:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_148("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_149("REPAP_HOME3", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 11:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_148("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_149("REPAP_HOME4", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 13:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_148("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_149("REPAP_NOBAN", (func_152() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 15:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_148("REPAP_NOBAN"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_73())
			{
				if (func_152() && !func_72())
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 17:
			func_73();
			break;
		
		case 100:
			if (func_147(iLocal_90, 5f, 5, 1056964608, 0, 1))
			{
				func_173("");
				func_172(3);
			}
			break;
	}
	if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_146() && !func_158()) && iLocal_46 != 8)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				if (unk_0x965556ACF6A83973(iLocal_85, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0xDF17BE550B9FEC7A(iLocal_85, unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241())))
					{
						unk_0xE4C80CFABEAEED8F(iLocal_85, unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241()));
					}
					func_101();
					iLocal_46 = 8;
				}
			}
		}
	}
}

var func_146()
{
	return Global_24680;
}

int func_147(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x4B404C739A9AFC7A(0, 71, 1);
	unk_0x4B404C739A9AFC7A(0, 72, 1);
	unk_0x4B404C739A9AFC7A(0, 76, 1);
	unk_0x4B404C739A9AFC7A(0, 73, 1);
	unk_0x4B404C739A9AFC7A(0, 59, 1);
	unk_0x4B404C739A9AFC7A(0, 60, 1);
	if (bParam5)
	{
		unk_0x4B404C739A9AFC7A(0, 75, 1);
	}
	unk_0x4B404C739A9AFC7A(0, 80, 1);
	unk_0x4B404C739A9AFC7A(0, 69, 1);
	unk_0x4B404C739A9AFC7A(0, 70, 1);
	unk_0x4B404C739A9AFC7A(0, 68, 1);
	unk_0x4B404C739A9AFC7A(0, 74, 1);
	unk_0x4B404C739A9AFC7A(0, 86, 1);
	unk_0x4B404C739A9AFC7A(0, 81, 1);
	unk_0x4B404C739A9AFC7A(0, 82, 1);
	unk_0x4B404C739A9AFC7A(0, 138, 1);
	unk_0x4B404C739A9AFC7A(0, 136, 1);
	unk_0x4B404C739A9AFC7A(0, 114, 1);
	unk_0x4B404C739A9AFC7A(0, 107, 1);
	unk_0x4B404C739A9AFC7A(0, 110, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 89, 1);
	unk_0x4B404C739A9AFC7A(0, 87, 1);
	unk_0x4B404C739A9AFC7A(0, 88, 1);
	unk_0x4B404C739A9AFC7A(0, 113, 1);
	unk_0x4B404C739A9AFC7A(0, 115, 1);
	unk_0x4B404C739A9AFC7A(0, 116, 1);
	unk_0x4B404C739A9AFC7A(0, 117, 1);
	unk_0x4B404C739A9AFC7A(0, 118, 1);
	unk_0x4B404C739A9AFC7A(0, 119, 1);
	unk_0x4B404C739A9AFC7A(0, 131, 1);
	unk_0x4B404C739A9AFC7A(0, 132, 1);
	unk_0x4B404C739A9AFC7A(0, 123, 1);
	unk_0x4B404C739A9AFC7A(0, 126, 1);
	unk_0x4B404C739A9AFC7A(0, 129, 1);
	unk_0x4B404C739A9AFC7A(0, 130, 1);
	unk_0x4B404C739A9AFC7A(0, 133, 1);
	unk_0x4B404C739A9AFC7A(0, 134, 1);
	unk_0x70B6991909A03810();
	if ((unk_0x09560C7DE2A384BD() - Global_29) > 500)
	{
		unk_0x7DDC5160036EE766(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x09560C7DE2A384BD();
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0x3545D662A0A53653(unk_0x5AF66EDEBFA76B9B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_148(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_394, cLocal_371, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_149(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_71)
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_71 = 1;
				iLocal_72 = 0;
			}
		}
		else if (iLocal_72)
		{
			if (func_151(&Local_394, cLocal_371, sParam0, &Local_74, 4, 0, 0))
			{
				iLocal_72 = 0;
			}
		}
		if ((iLocal_71 && !iLocal_72) && bParam1)
		{
			if (iLocal_80 == -1)
			{
				if (!func_72())
				{
					iLocal_80 = unk_0x09560C7DE2A384BD();
				}
			}
			else if ((unk_0x09560C7DE2A384BD() - iLocal_80) > 500)
			{
				iLocal_80 = -1;
				iLocal_71 = 0;
				iLocal_72 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_71 && !iLocal_72)
	{
		Local_74 = { func_150() };
		func_136();
		iLocal_72 = 1;
	}
	return 0;
}

struct<6> func_150()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x8E904BB26E98BDB0();
		iVar6 = (iVar6 + Global_16703);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xC929DDA58687736B(&(Global_14561[iVar7 /*6*/])))
			{
				return Global_14561[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xC929DDA58687736B(&(Global_14561[iVar8 /*6*/])))
					{
						return Global_14561[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_151(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_152()
{
	if (bLocal_367)
	{
		if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x202EF5D8203705EF(iLocal_85, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_65();
	}
	return 0;
}

void func_153()
{
	if (func_19() == 2)
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_363))
		{
			func_156();
			uLocal_363 = func_155(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x2025496D9184D312(uLocal_363, 269);
			func_154();
		}
	}
}

void func_154()
{
	if (!func_158())
	{
		if (func_19() == 2)
		{
			Global_24680 = 1;
		}
	}
}

var func_155(struct<3> Param0, int iParam3)
{
	return func_50(Param0, iParam3);
}

void func_156()
{
	if (func_19() == 2)
	{
		if (!Global_24682)
		{
			func_157("CULT_BLIP_HELP", -1);
			Global_24682 = 1;
		}
	}
}

void func_157(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

int func_158()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_159(bool bParam0)
{
	if (unk_0xECFECDAD51A6184F(iLocal_90, 0) && !unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_359))
			{
				unk_0xB6FB9702660D84F6(&uLocal_359);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_360))
			{
				unk_0xB6FB9702660D84F6(&uLocal_360);
			}
		}
		else
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_361))
			{
				unk_0xB6FB9702660D84F6(&uLocal_361);
			}
			if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_360))
				{
					uLocal_360 = func_160(iLocal_90, 0, 0);
				}
			}
			if (!unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_359))
				{
					uLocal_359 = func_174(iLocal_85, 0, 145);
				}
			}
			else if (unk_0x5660C8AFDD9C1721(uLocal_359))
			{
				unk_0xB6FB9702660D84F6(&uLocal_359);
			}
		}
	}
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	return func_161(iParam0, !bParam1, bParam2);
}

int func_161(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_51(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_51(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_51(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xE3C88401E17BFBB2(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x557C6E696286C67A(iParam0, iVar2))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)
{
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		if (unk_0x557C6E696286C67A(iParam0, -1))
		{
			return 1;
		}
		if (unk_0x557C6E696286C67A(iParam0, 0))
		{
			return 1;
		}
		if (unk_0x557C6E696286C67A(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x557C6E696286C67A(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	if (unk_0xDF17BE550B9FEC7A(iParam0, unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241())))
	{
		if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0xA7130AF256ED96A1(iParam0);
		}
		return 1;
	}
	else if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xE4C80CFABEAEED8F(iParam0, unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241()));
	}
	return 0;
}

void func_166()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xECFECDAD51A6184F(iLocal_90, 0))
	{
		if (!unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 1))
		{
			if (unk_0x221AC1EF116F6053(iLocal_85, -1794415470) != 1)
			{
				unk_0xA34C986DDC3D92F1(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 2f, 8388608, 0);
			}
		}
		if ((unk_0x538DF9E5B1DF01EB(func_64()) && unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(iLocal_85, 1), unk_0xBF8499F46AD9093A(func_64(), 1)) < 100f) && (unk_0x5AF66EDEBFA76B9B(iLocal_90) < 5f || !unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(iLocal_90))))
		{
			if (bLocal_367)
			{
				if (!unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0xD9275EB8FA656B5C(iLocal_85, iLocal_90))
				{
					unk_0x5B5659C49032B96C(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0xD9275EB8FA656B5C(iLocal_85, iLocal_90))
			{
				unk_0x5B5659C49032B96C(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x95EDB2DEFA5BB405(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0xD9275EB8FA656B5C(iLocal_85, iLocal_90))
		{
			unk_0x937785D9C1929236(iLocal_85);
		}
		switch (iLocal_368)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x538DF9E5B1DF01EB(func_64()) && !unk_0x2DE0B96E966FD817(func_64()))
					{
						func_18(&Local_394, 4);
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_48 = 2;
					func_101();
					if (func_5(&Local_394, cLocal_371, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xABC4F2A6D7D56CF4(0.2f);
						unk_0x2C4E82CF88213975(iLocal_85, 1);
						unk_0x2966D41514EAE84B(1, uLocal_68, joaat("player"));
						iLocal_357 = unk_0x8AC4394F3C9173EE(joaat("prop_ld_test_01"), Local_86, 1, 1, 0);
						unk_0x6A23C3306A8CF21B(iLocal_357, 0, 0);
						unk_0x423D1EBE54B18555(iLocal_357, 0);
						unk_0x3CC3106305C40A28(iLocal_357, 1);
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				func_168();
				if (!unk_0x0852C405AF94F670(iLocal_85, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_368++;
					iLocal_369 = unk_0x09560C7DE2A384BD();
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_667)
				{
					if (((((iLocal_669 != 1 && iLocal_669 != 3) && iLocal_669 != 6) && iLocal_669 != 9) && iLocal_669 != 11) && iLocal_669 != 13)
					{
						bLocal_668 = false;
						if (unk_0x538DF9E5B1DF01EB(func_64()) && unk_0x14F9932776F21CC2(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = true;
						}
					}
				}
				else
				{
					if (!func_72())
					{
						bLocal_668 = true;
					}
					if (unk_0x538DF9E5B1DF01EB(func_64()))
					{
						if (!unk_0x14F9932776F21CC2(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = false;
						}
					}
				}
				if (bLocal_668)
				{
					if (!func_73())
					{
						if (!func_167())
						{
							func_168();
						}
					}
				}
				else
				{
					switch (iLocal_669)
					{
						case 0:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_148("REPAP_RES1"))
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
									iLocal_669++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
								{
									if (func_148("REPAP_CHT2"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
									iLocal_669++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_149("REPAP_CHT3M", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_149("REPAP_CHT3F", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_149("REPAP_CHT3T", ((func_152() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 4)
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
								}
							}
							break;
						
						case 5:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_149("REPAP_CHT4M", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_149("REPAP_CHT4F", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_149("REPAP_CHT4T", ((func_152() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 5)
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
								}
							}
							break;
						
						case 6:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_149("REPAP_CHT5M", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_149("REPAP_CHT5F", ((func_152() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_149("REPAP_CHT5T", ((func_152() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 6)
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
								}
							}
							break;
						
						case 7:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
								{
									if (func_148("REPAP_CHT6"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
									iLocal_669++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
								{
									if (func_148("REPAP_CHT7"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0x09560C7DE2A384BD();
									iLocal_669++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x09560C7DE2A384BD() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
								{
									if (func_148("REPAP_CHT8"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_667 && func_152()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						}
				}
				if (!unk_0x538DF9E5B1DF01EB(func_64()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368++;
					func_136();
					if (!Global_3 && !bLocal_69)
					{
						iLocal_48 = 6;
					}
				}
				if (Global_3 || bLocal_69)
				{
					if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_48 = 4;
						iLocal_84 = unk_0x09560C7DE2A384BD();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_65())
				{
					func_173("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_394, cLocal_371, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_172(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_159(0);
	}
}

int func_167()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x09560C7DE2A384BD() - iLocal_665) > 5000)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_90) && unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
		{
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 1))
			{
				if (iVar0 != -1 && (unk_0x09560C7DE2A384BD() - Local_203[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_665 = unk_0x09560C7DE2A384BD();
						return 1;
					}
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_665 = unk_0x09560C7DE2A384BD();
				return 1;
			}
		}
	}
	return 0;
}

void func_168()
{
	int iVar0;
	
	if ((unk_0x09560C7DE2A384BD() - iLocal_563) > iLocal_564)
	{
		if ((!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0x538DF9E5B1DF01EB(func_64())) && !unk_0x2DE0B96E966FD817(func_64()))
		{
			if (unk_0x4970185D4CC64616(Local_62, unk_0xBF8499F46AD9093A(func_64(), 1), 1) < 8f)
			{
				iVar0 = unk_0x444ECD635D5FD45F(0, 5);
				func_18(&Local_394, 4);
				func_18(&Local_394, 5);
				func_18(&Local_394, 6);
				func_18(&Local_394, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x538DF9E5B1DF01EB(Local_394[4 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
								iLocal_564 = unk_0x444ECD635D5FD45F(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x538DF9E5B1DF01EB(Local_394[4 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
								iLocal_564 = unk_0x444ECD635D5FD45F(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_394, 5, func_64(), "PAP2", 0, 1);
						if (unk_0x538DF9E5B1DF01EB(Local_394[5 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[5 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
								iLocal_564 = unk_0x444ECD635D5FD45F(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_394, 6, func_64(), "PAP3", 0, 1);
						if (unk_0x538DF9E5B1DF01EB(Local_394[6 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[6 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
								iLocal_564 = unk_0x444ECD635D5FD45F(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_394, 7, func_64(), "PAP4", 0, 1);
						if (unk_0x538DF9E5B1DF01EB(Local_394[7 /*10*/]) && !unk_0x2DE0B96E966FD817(Local_394[7 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x09560C7DE2A384BD();
								iLocal_564 = unk_0x444ECD635D5FD45F(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_169()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_359))
		{
			unk_0xAF9E05E1AFA9F45F(uLocal_359, iLocal_663);
		}
		switch (iLocal_368)
		{
			case 0:
				unk_0x3D28909AF30D70F4("random@paparazzi@peek");
				unk_0x3D28909AF30D70F4("random@paparazzi@trans");
				unk_0x3D28909AF30D70F4("random@paparazzi@wait");
				if ((unk_0x6C47E32491756A1A("random@paparazzi@peek") && unk_0x6C47E32491756A1A("random@paparazzi@trans")) && unk_0x6C47E32491756A1A("random@paparazzi@wait"))
				{
					uLocal_624 = unk_0x7D9AB6E493591276(Local_652, Local_655, 2);
					unk_0x10D8E64E13BD715C(iLocal_85, uLocal_624, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x4745F9C50C63A48C(iLocal_85, unk_0xA16EC202D9D35357(), -1, 4, 4);
					sLocal_625[0] = "peek_a";
					sLocal_625[1] = "peek_b";
					sLocal_625[2] = "peek_c";
					unk_0xABC4F2A6D7D56CF4(0.2f);
					iLocal_622 = 0;
					iLocal_658 = 0;
					iLocal_663 = 0;
					iLocal_73 = 1;
					iLocal_659 = 0;
					iLocal_70 = 0;
					fLocal_660 = 0f;
					iLocal_368++;
				}
				break;
			
			case 1:
				if (unk_0x889D01384B54BCE3(iLocal_659, 0))
				{
					if (!unk_0x889D01384B54BCE3(iLocal_659, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&iLocal_659, 1);
					}
					else
					{
						iLocal_659 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_638, Local_641, fLocal_644, 0, 1, 0);
				bVar1 = unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_631, Local_634, fLocal_637, 0, 1, 0);
				if (unk_0x9BA82E09A986BA4B(sLocal_630, "right_"))
				{
					if (bVar1)
					{
						sLocal_630 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_630 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xCFC5CE3AD496DA0B(uLocal_624) && unk_0x0DF89B3B1CF0FDC1(uLocal_624) > 0.9f) || iVar2)
				{
					if (iLocal_659 == 0)
					{
						unk_0x937785D9C1929236(iLocal_85);
						iLocal_629++;
						if (iLocal_629 >= 3)
						{
							iLocal_629 = 0;
						}
						StringCopy(&cVar3, sLocal_630, 24);
						StringConCat(&cVar3, sLocal_625[iLocal_629], 24);
						uLocal_624 = unk_0x7D9AB6E493591276(Local_652, Local_655, 2);
						unk_0x10D8E64E13BD715C(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xD0E2BFCE93AE3ABD(&iLocal_659, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_660 <= 20f)
					{
						fLocal_660 = (fLocal_660 + unk_0x0C380BB05B91042D());
					}
					if ((unk_0x09560C7DE2A384BD() - iLocal_623) > 5000 && iLocal_659 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < (22.2f * 22.2f))
						{
							if (fLocal_660 < 10f)
							{
								if (iLocal_661)
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
							if (func_19() == 1)
							{
								func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_394, cLocal_371, sVar9, 4, 0, 0, 0))
							{
								iLocal_661 = 1;
								if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_85, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x937785D9C1929236(iLocal_85);
									StringCopy(&cVar10, sLocal_630, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_624 = unk_0x7D9AB6E493591276(Local_652, Local_655, 2);
									unk_0x10D8E64E13BD715C(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_659, 0);
								}
								iLocal_623 = unk_0x09560C7DE2A384BD();
							}
						}
					}
				}
				if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_645, Local_648, fLocal_651, 0, 1, 0) && iLocal_659 == 0)
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_358))
					{
						unk_0xB6FB9702660D84F6(&uLocal_358);
						if (!unk_0x5660C8AFDD9C1721(uLocal_359))
						{
							uLocal_359 = func_174(iLocal_85, 0, 145);
						}
					}
					unk_0x937785D9C1929236(iLocal_85);
					uLocal_624 = unk_0x7D9AB6E493591276(Local_652, Local_655, 2);
					if (bVar1)
					{
						unk_0x10D8E64E13BD715C(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x10D8E64E13BD715C(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xD0E2BFCE93AE3ABD(&iLocal_659, 0);
					iLocal_368++;
				}
				break;
			
			case 2:
				if (unk_0xCFC5CE3AD496DA0B(uLocal_624) && unk_0x0DF89B3B1CF0FDC1(uLocal_624) > 0.9f)
				{
					if (unk_0x221AC1EF116F6053(iLocal_85, 242628503) != 1)
					{
						unk_0x937785D9C1929236(iLocal_85);
						unk_0x5B5659C49032B96C(iLocal_85, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_620 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_368++;
				}
				break;
			
			case 3:
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (func_171())
					{
						unk_0x3A3C5A6572B3C611(&iLocal_90);
						iLocal_90 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						unk_0x7B9576B4E099FB1F(iLocal_90, 1, 1);
						unk_0x58E0272CBA220320(iLocal_90, 0, 0);
						unk_0x542B8BF5C21F2470(iLocal_90, 1);
						bLocal_367 = true;
					}
				}
				if (!bLocal_367)
				{
					unk_0x542B8BF5C21F2470(iLocal_90, 1);
					if (func_135(&Local_394, cLocal_371, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_663 = 1;
						iLocal_368 = 100;
					}
				}
				else if (func_135(&Local_394, cLocal_371, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_663 = 1;
					iLocal_368++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_170(Local_86, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (unk_0x14F9932776F21CC2(iLocal_90, iLocal_85, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_367)
					{
						if (unk_0x221AC1EF116F6053(iLocal_85, 242628503) != 1 && !iLocal_658)
						{
							unk_0x6D98AA46076A68BE(&uVar16);
							unk_0x353F4B963593F141(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
							unk_0x963BB7C99350D827(uVar16);
							unk_0x0891776D0327B77A(iLocal_85, uVar16);
							unk_0x30D76463BF50C618(iLocal_85, 0, 0);
							unk_0x2AF68ED52DC74B7D(&uVar16);
							iLocal_658 = 1;
						}
						else
						{
							unk_0x00CFDDE7ACCA68D1(iLocal_85, 1f);
							func_170(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_170(Local_86, 1);
					}
					if (!bLocal_367)
					{
						if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
						{
							if (unk_0x5660C8AFDD9C1721(uLocal_360))
							{
								unk_0xB6FB9702660D84F6(&uLocal_360);
							}
							if (!unk_0x5660C8AFDD9C1721(uLocal_359))
							{
								uLocal_359 = func_174(iLocal_85, 0, 145);
							}
						}
					}
					if ((unk_0x14F9932776F21CC2(iLocal_90, iLocal_85, Global_19, 0, 1, 0) && func_164(iLocal_90)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_367))
					{
						if (!iLocal_622)
						{
							func_101();
							if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (func_5(&Local_394, cLocal_371, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_622 = 1;
							}
						}
						else
						{
							if (!bLocal_367)
							{
								iLocal_368 = -5;
							}
							else
							{
								iLocal_368++;
							}
							unk_0x937785D9C1929236(iLocal_85);
							unk_0xA34C986DDC3D92F1(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_367)
				{
					func_170(Local_86, 1);
				}
				else
				{
					func_170(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (func_147(iLocal_90, 1093140480, 1, 1056964608, 0, 1))
					{
						iLocal_368 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_85) && unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_359))
						{
							unk_0xB6FB9702660D84F6(&uLocal_359);
						}
						unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
						func_172(1);
					}
					else
					{
						if (!Global_3 && !bLocal_69)
						{
							if ((unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0) && !unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 1)) && !unk_0x0852C405AF94F670(iLocal_90, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_367)
								{
									unk_0xDEB0A02F25120B62(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_GUP";
									func_172(6);
								}
								else
								{
									unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 1, 0);
									unk_0xDEB0A02F25120B62(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_CP";
									func_172(6);
								}
							}
						}
						if (!unk_0xAD203DB71ADF6E57(iLocal_85, iLocal_90, 0))
						{
							if (unk_0x221AC1EF116F6053(iLocal_85, -1794415470) != 1)
							{
								unk_0x937785D9C1929236(iLocal_85);
								unk_0xA34C986DDC3D92F1(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_62, unk_0xA783C6007920169C(iLocal_90, 1f, 0f, 0f)) < 1f)
							{
								unk_0x00CFDDE7ACCA68D1(iLocal_85, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (!func_72())
					{
						func_101();
						if (func_19() == 1)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_19() == 0)
						{
							func_101();
							if (func_5(&Local_394, cLocal_371, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
							iLocal_73 = 0;
						}
						else if (func_5(&Local_394, cLocal_371, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
				if (iLocal_368 == 101)
				{
					fLocal_664 = 0f;
				}
				func_170(Local_86, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 49f && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) < 3f)
					{
						fLocal_664 = (fLocal_664 + unk_0x0C380BB05B91042D());
					}
					else
					{
						fLocal_664 = (fLocal_664 - (unk_0x0C380BB05B91042D() * 2f));
					}
					if (fLocal_664 > 10f)
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_664 = 0f;
						}
					}
				}
				if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
				{
					if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0) && func_171())
					{
						bLocal_367 = true;
						iLocal_73 = 1;
						iLocal_90 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						unk_0x7B9576B4E099FB1F(iLocal_90, 1, 1);
					}
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_90, 0))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_360))
						{
							unk_0xB6FB9702660D84F6(&uLocal_360);
						}
						if (!unk_0x5660C8AFDD9C1721(uLocal_359))
						{
							uLocal_359 = func_174(iLocal_85, 0, 145);
						}
					}
					else
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_359))
						{
							unk_0xB6FB9702660D84F6(&uLocal_359);
						}
						if (!unk_0x5660C8AFDD9C1721(uLocal_360))
						{
							uLocal_360 = func_160(iLocal_90, 0, 0);
						}
					}
					if (unk_0xD9275EB8FA656B5C(unk_0xA16EC202D9D35357(), iLocal_90))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_360))
						{
							unk_0xB6FB9702660D84F6(&uLocal_360);
						}
						if (!unk_0x5660C8AFDD9C1721(uLocal_359))
						{
							uLocal_359 = func_174(iLocal_85, 0, 145);
						}
						func_173("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_368 = 4;
					}
					if (!iLocal_73)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_65) < 9f && func_19() == 0)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_73 = 1;
							}
						}
					}
				}
				func_170(Local_86, 1);
				break;
		}
		if (!Global_3 && !bLocal_69)
		{
			if (unk_0xECFECDAD51A6184F(iLocal_90, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_59, Local_86) > 75f)
				{
					func_172(6);
				}
				if (func_185())
				{
					func_172(5);
				}
			}
		}
		if (!bLocal_367)
		{
			if (!unk_0xECFECDAD51A6184F(iLocal_90, 0))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_172(5);
				}
			}
			else
			{
				if (!bLocal_367)
				{
					if (!Global_3 && !bLocal_69)
					{
						if (unk_0x6360D2FA3AD62AD1(iLocal_90) < iLocal_82)
						{
							if (unk_0xBF8ADDCADFC4691E(iLocal_90, unk_0xA16EC202D9D35357(), 1))
							{
								iLocal_83 = (iLocal_83 + (iLocal_82 - unk_0x6360D2FA3AD62AD1(iLocal_90)));
							}
							unk_0xFAF4121083211853(iLocal_90);
						}
						if (iLocal_83 > 250)
						{
							if (unk_0x070FE1B33937A5CB(iLocal_85, iLocal_90) && unk_0x2A488C176D52CCA5(Local_62, Local_65) < 25f)
							{
								func_172(5);
							}
						}
					}
				}
				iLocal_82 = unk_0x6360D2FA3AD62AD1(iLocal_90);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0x81060B34CE9997E9(iLocal_85))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_172(5);
				}
			}
		}
	}
}

void func_170(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_62, Param0) > 2.5f)
	{
		if (unk_0x221AC1EF116F6053(iLocal_85, 713668775) != 1)
		{
			unk_0x353F4B963593F141(iLocal_85, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0x221AC1EF116F6053(iLocal_85, 713668775) != 1)
	{
		func_132(bParam3);
		unk_0x4745F9C50C63A48C(iLocal_85, unk_0xA16EC202D9D35357(), -1, 16, 2);
	}
}

bool func_171()
{
	return (((((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0)) && (unk_0xD548A98EDA33C15A(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0))) || unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0))))) && unk_0xE3C88401E17BFBB2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) > 0) && func_164(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0))) && !Global_96486);
}

void func_172(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_368 = 0;
}

void func_173(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (!unk_0x9BA82E09A986BA4B(iLocal_559[iVar0], sParam0))
		{
			if (unk_0x4CBFDAD06D630F7C(iLocal_559[iVar0]))
			{
				unk_0x124843CE93F39C27(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (unk_0x9BA82E09A986BA4B(iLocal_559[iVar0], sParam0))
		{
			if (!unk_0x4CBFDAD06D630F7C(iLocal_559[iVar0]))
			{
				unk_0x3EF2F05E6EA65602(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_174(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_161(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_175(int iParam0)
{
	if (func_178())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_87(Global_97428))
		{
			func_176(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_87(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_157(func_177(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_157(func_177(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_157(func_177(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

char* func_177(int iParam0)
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

int func_178()
{
	switch (func_179(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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

int func_179(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_183(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_181(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_180(uParam0, iParam4);
		}
	}
	return 2;
}

void func_180(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_181(int iParam0)
{
	return func_182(iParam0, Global_34915);
}

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_181(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_184()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		unk_0xDEB0A02F25120B62(iLocal_85, 2, 0);
		unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (!unk_0x2DE0B96E966FD817(Local_203[iVar0 /*18*/]))
		{
			unk_0xEA36CC2E7750344B(Local_203[iVar0 /*18*/], unk_0xA16EC202D9D35357(), 300f, -1, 0, 0);
			unk_0xA9465591B42213AE(Local_203[iVar0 /*18*/], -2065892691);
			unk_0x2C4E82CF88213975(Local_203[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_185()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_203.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_203[iVar1 /*18*/]) && !unk_0x2DE0B96E966FD817(Local_203[iVar1 /*18*/]))
		{
			if (unk_0x01F2C76388A112CD(Local_203[iVar1 /*18*/]))
			{
				if (((unk_0xF6BC67E137183D3F(Local_203[iVar1 /*18*/].f_6, 5f, 1) || unk_0x8C42D51DE272AC72(-1, Local_203[iVar1 /*18*/].f_6, 10f)) || unk_0x81060B34CE9997E9(Local_203[iVar1 /*18*/])) || (iLocal_385[iVar1] > 10 && iLocal_46 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_348 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_130.f_0)
	{
		if (unk_0x538DF9E5B1DF01EB(Local_130[iVar1 /*18*/]))
		{
			if (unk_0xECFECDAD51A6184F(Local_130[iVar1 /*18*/], 0) && unk_0x01F2C76388A112CD(Local_130[iVar1 /*18*/]))
			{
				if (unk_0x042EE007A41C88D4(Local_130[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_186()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_197())
		{
			return 0;
		}
	}
	if (func_193())
	{
		return 1;
	}
	if (func_187(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_187(float fParam0, bool bParam1)
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_92();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_188(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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

void func_188(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_189(uParam1, "Abigail1", func_191(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 1:
			func_189(uParam1, "Abigail2", func_191(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 2:
			func_189(uParam1, "Barry1", func_191(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 3:
			func_189(uParam1, "Barry2", func_191(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 4:
			func_189(uParam1, "Barry3", func_191(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 5:
			func_189(uParam1, "Barry3A", func_191(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 6:
			func_189(uParam1, "Barry3C", func_191(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 7:
			func_189(uParam1, "Barry4", func_191(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_190(iParam0), 0, 0);
			break;
		
		case 8:
			func_189(uParam1, "Dreyfuss1", func_191(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 9:
			func_189(uParam1, "Epsilon1", func_191(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 10:
			func_189(uParam1, "Epsilon2", func_191(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 11:
			func_189(uParam1, "Epsilon3", func_191(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 12:
			func_189(uParam1, "Epsilon4", func_191(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 13:
			func_189(uParam1, "Epsilon5", func_191(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 14:
			func_189(uParam1, "Epsilon6", func_191(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 15:
			func_189(uParam1, "Epsilon7", func_191(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 16:
			func_189(uParam1, "Epsilon8", func_191(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 17:
			func_189(uParam1, "Extreme1", func_191(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 18:
			func_189(uParam1, "Extreme2", func_191(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 19:
			func_189(uParam1, "Extreme3", func_191(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 20:
			func_189(uParam1, "Extreme4", func_191(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 21:
			func_189(uParam1, "Fanatic1", func_191(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_190(iParam0), 1, 0);
			break;
		
		case 22:
			func_189(uParam1, "Fanatic2", func_191(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_190(iParam0), 1, 0);
			break;
		
		case 23:
			func_189(uParam1, "Fanatic3", func_191(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_190(iParam0), 0, 1);
			break;
		
		case 24:
			func_189(uParam1, "Hao1", func_191(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_190(iParam0), 0, 1);
			break;
		
		case 25:
			func_189(uParam1, "Hunting1", func_191(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 26:
			func_189(uParam1, "Hunting2", func_191(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 27:
			func_189(uParam1, "Josh1", func_191(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 28:
			func_189(uParam1, "Josh2", func_191(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 29:
			func_189(uParam1, "Josh3", func_191(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 30:
			func_189(uParam1, "Josh4", func_191(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 31:
			func_189(uParam1, "Maude1", func_191(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 32:
			func_189(uParam1, "Minute1", func_191(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 33:
			func_189(uParam1, "Minute2", func_191(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 34:
			func_189(uParam1, "Minute3", func_191(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 35:
			func_189(uParam1, "MrsPhilips1", func_191(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 36:
			func_189(uParam1, "MrsPhilips2", func_191(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 37:
			func_189(uParam1, "Nigel1", func_191(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 38:
			func_189(uParam1, "Nigel1A", func_191(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 39:
			func_189(uParam1, "Nigel1B", func_191(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 40:
			func_189(uParam1, "Nigel1C", func_191(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 41:
			func_189(uParam1, "Nigel1D", func_191(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 42:
			func_189(uParam1, "Nigel2", func_191(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 43:
			func_189(uParam1, "Nigel3", func_191(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 44:
			func_189(uParam1, "Omega1", func_191(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 45:
			func_189(uParam1, "Omega2", func_191(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 46:
			func_189(uParam1, "Paparazzo1", func_191(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 47:
			func_189(uParam1, "Paparazzo2", func_191(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 48:
			func_189(uParam1, "Paparazzo3", func_191(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 49:
			func_189(uParam1, "Paparazzo3A", func_191(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 50:
			func_189(uParam1, "Paparazzo3B", func_191(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 51:
			func_189(uParam1, "Paparazzo4", func_191(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 52:
			func_189(uParam1, "Rampage1", func_191(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 54:
			func_189(uParam1, "Rampage3", func_191(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 55:
			func_189(uParam1, "Rampage4", func_191(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 56:
			func_189(uParam1, "Rampage5", func_191(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 53:
			func_189(uParam1, "Rampage2", func_191(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 57:
			func_189(uParam1, "TheLastOne", func_191(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 58:
			func_189(uParam1, "Tonya1", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 59:
			func_189(uParam1, "Tonya2", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 60:
			func_189(uParam1, "Tonya3", func_191(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 61:
			func_189(uParam1, "Tonya4", func_191(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 62:
			func_189(uParam1, "Tonya5", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_189(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_190(int iParam0)
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

struct<2> func_191(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_192(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_192(int iParam0)
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

int func_193()
{
	if (func_196() && !func_197())
	{
		return 1;
	}
	if (func_195() && func_194())
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_97157 > 0;
}

int func_195()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_197()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_198()
{
	func_200(39, 1);
	func_200(40, 1);
	func_200(41, 1);
	func_200(42, 1);
	func_200(43, 1);
	uLocal_358 = func_199(Local_86);
	iLocal_85 = unk_0x6F9DE0DE8363ADF1(26, joaat("a_f_y_bevhills_03"), Local_86, fLocal_89, 1, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_85, 1, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_85, 17, 1);
	unk_0xDEB0A02F25120B62(iLocal_85, 128, 1);
	unk_0x2686393074E14730(iLocal_85, 1);
	unk_0x3F376CC691816BEF(iLocal_85, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 0, 0, 1, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 2, 0, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 3, 0, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 4, 0, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 7, 1, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_85, 8, 0, 0, 0);
	unk_0x2EDAF8A9FD053A8E(iLocal_85, 1);
	unk_0x2C4E82CF88213975(iLocal_85, 1);
	unk_0xA8BC819B54F5B824(iLocal_85, 0);
	unk_0x3E99D575EE07FDB3(iLocal_85, "LACEY");
	if (Global_3 || bLocal_69)
	{
		unk_0xE31C4C317516E7A7(iLocal_85, 1);
	}
	if (unk_0x0B29CE7F19BFE6C0("CELEBRITY", &uLocal_68))
	{
		unk_0xA9465591B42213AE(iLocal_85, uLocal_68);
	}
	iLocal_90 = unk_0x9BB6F54E415071A1(joaat("surano"), Local_91, fLocal_94, 1, 1);
	unk_0xFE2DEA78E1B4FDB9(iLocal_90, Local_91, 0, 0, 1);
	unk_0xFBD00B8DE708BF8E(iLocal_90, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x58E0272CBA220320(iLocal_90, 0, 0);
	unk_0x716275F05FAE278C(iLocal_90, 10);
	unk_0xAC894C93914464C2(iLocal_90);
	unk_0x542B8BF5C21F2470(iLocal_90, 3);
	unk_0x5CDB4C8C611F6B1A(iLocal_90, 1);
	unk_0x822826B4A2067BB2(iLocal_90, 1);
	unk_0x4C4993C4A4C173AD(iLocal_90, unk_0x0D1B4E500469970E(1));
	if (func_19() == 1)
	{
		func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_394, 1, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
	}
	func_17(&Local_394, 3, iLocal_85, "LACEY", 0, 1);
	iLocal_374[0] = "idle_a";
	iLocal_374[1] = "idle_b";
	iLocal_374[2] = "idle_c";
	iLocal_374[3] = "idle_d";
	iLocal_374[4] = "idle_e";
	iLocal_374[5] = "idle_f";
	iLocal_374[6] = "idle_g";
	iLocal_374[7] = "idle_h";
	iLocal_374[8] = "idle_i";
	iLocal_559[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_559[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_559[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x32DC163A33A4AB6D(joaat("vader"), 1);
	unk_0x32DC163A33A4AB6D(joaat("surano"), 1);
	unk_0x32DC163A33A4AB6D(joaat("cavalcade2"), 1);
}

var func_199(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xE30CC26FBB1F8075(uVar0, 0);
	unk_0x58063239A5B8FB80(uVar0, 0);
	return uVar0;
}

void func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_207(iParam0, 2, 1))
		{
			func_206(iParam0, 2, 1);
		}
	}
	else if (func_207(iParam0, 2, 1))
	{
		func_201(iParam0, 2, 1);
	}
}

void func_201(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_82() == 0)
		{
			uVar0 = func_204(func_205(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_202(func_205(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, iParam3);
	}
}

int func_203(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_85();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_204(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_203(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

void func_206(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_82() == 0)
		{
			uVar0 = func_204(func_205(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_202(func_205(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_207(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_82() == 0)
		{
			return unk_0x889D01384B54BCE3(func_204(func_205(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_208()
{
	if (!iLocal_95)
	{
		func_216(&uLocal_96, joaat("surano"));
		func_216(&uLocal_96, joaat("prop_ld_test_01"));
		func_216(&uLocal_96, joaat("a_f_y_bevhills_03"));
		func_216(&uLocal_96, joaat("a_m_y_genstreet_02"));
		func_216(&uLocal_96, joaat("vader"));
		func_216(&uLocal_96, joaat("cavalcade2"));
		func_216(&uLocal_96, joaat("prop_pap_camera_01"));
		func_213(&uLocal_96);
		iLocal_95 = 1;
	}
	if (!func_209(&uLocal_96))
	{
		return 0;
	}
	unk_0x3D28909AF30D70F4("random@escape_paparazzi@standing@");
	unk_0x3D28909AF30D70F4("random@paparazzi@pap_anims");
	unk_0x3D28909AF30D70F4("random@paparazzi@peek");
	unk_0x3D28909AF30D70F4("random@paparazzi@trans");
	unk_0x3D28909AF30D70F4("random@paparazzi@wait");
	unk_0x3D28909AF30D70F4("veh@std@ps@idle_panic");
	unk_0x3D28909AF30D70F4("veh@low@front_ps@idle_panic");
	unk_0x3D28909AF30D70F4(sLocal_373);
	unk_0x95AB598E6554985B("ESCPAP", 0);
	if (((((((((unk_0x6C47E32491756A1A("random@escape_paparazzi@standing@") && unk_0x6C47E32491756A1A("random@paparazzi@pap_anims")) && unk_0x6C47E32491756A1A("random@paparazzi@peek")) && unk_0x6C47E32491756A1A("random@paparazzi@trans")) && unk_0x6C47E32491756A1A("random@paparazzi@wait")) && unk_0x6C47E32491756A1A("veh@std@ps@idle_panic")) && unk_0x6C47E32491756A1A("veh@low@front_ps@idle_panic")) && unk_0x6C47E32491756A1A(sLocal_373)) && unk_0x5CD78FA34B48CB6E(0)) && unk_0x45B7DFCE888B2A02("Distant_Camera_Flash", false))
	{
		return 1;
	}
	return 0;
}

int func_209(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_210(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_210(var uParam0)
{
	return func_211(*uParam0, "NULL", uParam0->f_1);
}

int func_211(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x889D01384B54BCE3(iParam0, 30))
	{
		if (unk_0x889D01384B54BCE3(iParam0, 29))
		{
			switch (func_212(iParam0))
			{
				case 0:
					return unk_0x5494F37F35C1D7D7(uParam2);
					break;
				
				case 1:
					return unk_0x6C47E32491756A1A(sParam1);
					break;
				
				case 2:
					return unk_0x307330CEB84DD3AE(sParam1);
					break;
				
				case 3:
					return unk_0xDC8071F347A8DD3F(sParam1);
					break;
				
				case 4:
					return unk_0x0C73411A25059A28(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xBE56E3F122265AAC(sParam1);
					break;
				
				case 6:
					return unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(iParam0, 27));
					break;
				
				case 7:
					return unk_0xACFDEC9C39CAD932(iParam2);
					break;
				
				case 8:
					return unk_0x5CD78FA34B48CB6E(iParam2);
					break;
				
				case 9:
					return unk_0xEA01082BB3EA9C37();
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

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x889D01384B54BCE3(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_213(var uParam0)
{
	func_214(uParam0, 9, -1, 0);
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_215(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*2*/], iParam1);
			unk_0xD0E2BFCE93AE3ABD(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_215(int iParam0)
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

void func_216(var uParam0, int iParam1)
{
	func_214(uParam0, 0, iParam1, 0);
}

int func_217()
{
	if (!func_181(5))
	{
		return 1;
	}
	if (func_193())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_197())
		{
			return 0;
		}
	}
	if (func_187(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if ((Global_97428 == func_96() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_219(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xA152BE858C442B26() >= (uParam0->f_32 + uParam0->f_33) || unk_0x889D01384B54BCE3(Global_90042.f_20, 2)) || unk_0x889D01384B54BCE3(Global_90042.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 29))
					{
						func_220(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xA152BE858C442B26();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_220(var uParam0)
{
	func_221(uParam0, "NULL", uParam0->f_1);
}

void func_221(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x889D01384B54BCE3(*uParam0, 30))
	{
		switch (func_212(*uParam0))
		{
			case 0:
				unk_0x939DA7EBCC6588FF(uParam2);
				break;
			
			case 1:
				unk_0x3D28909AF30D70F4(sParam1);
				break;
			
			case 2:
				unk_0x660D567D3EB18812(sParam1);
				break;
			
			case 3:
				unk_0x52964052BC489DDD(sParam1, unk_0x889D01384B54BCE3(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDF529DC50AE6BC93(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xB3F2C2105E254F2B(sParam1);
				break;
			
			case 6:
				unk_0x45B7DFCE888B2A02(sParam1, unk_0x889D01384B54BCE3(*uParam0, 27));
				break;
			
			case 7:
				unk_0x2EDAAB9A8F7BCA0B(iParam2);
				break;
			
			case 8:
				unk_0x95AB598E6554985B(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xE8C49E8D4B533F7D();
				break;
			
			default:
				break;
		}
		unk_0xD0E2BFCE93AE3ABD(uParam0, 29);
	}
}

void func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_224(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_223();
}

void func_223()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_224(int iParam0)
{
	Global_97428 = iParam0;
}

int func_225(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_96();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_197())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_77(0))
		{
			return 0;
		}
		if (func_193())
		{
			return 0;
		}
		if (func_265())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_187(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_264(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_263(func_19()) == 4 || func_263(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_262(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_261(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_260())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_251(4))
		{
			return 0;
		}
		if (!func_181(5))
		{
			return 0;
		}
		if (func_250(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_250(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_264(30) && !func_250(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_249(iVar8))
				{
					if (func_227(iVar4))
					{
						if (!func_226(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_19() != iVar4)
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

bool func_226(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_228(iVar0);
}

int func_228(int iParam0)
{
	return func_229(iParam0, 1);
}

int func_229(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_249(iParam0))
	{
		return 0;
	}
	func_230(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_230(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_231(func_242(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_231(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_241(iParam0, iParam1))
	{
		iVar0 = func_240(iParam1);
		iVar1 = func_238(iParam0);
		iVar2 = (func_238(iParam0) - func_238(iParam1));
		iVar3 = (func_240(iParam0) - func_240(iParam1));
		iVar4 = (func_237(iParam0) - func_237(iParam1));
		iVar5 = (func_236(iParam0) - func_236(iParam1));
		iVar6 = (func_235(iParam0) - func_235(iParam1));
		iVar7 = (func_234(iParam0) - func_234(iParam1));
	}
	else
	{
		iVar0 = func_240(iParam0);
		iVar1 = func_238(iParam1);
		iVar2 = (func_238(iParam1) - func_238(iParam0));
		iVar3 = (func_240(iParam1) - func_240(iParam0));
		iVar4 = (func_237(iParam1) - func_237(iParam0));
		iVar5 = (func_236(iParam1) - func_236(iParam0));
		iVar6 = (func_235(iParam1) - func_235(iParam0));
		iVar7 = (func_234(iParam1) - func_234(iParam0));
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
		iVar4 = (iVar4 + func_233(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_232(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_232(float fParam0, float fParam1, float fParam2)
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

int func_233(int iParam0, int iParam1)
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

int func_234(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_235(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_236(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_237(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_238(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_239(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_239(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_240(int iParam0)
{
	return iParam0 & 15;
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_249(iParam1) || !func_249(iParam0))
	{
		return 1;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	var uVar0;
	
	func_248(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_247(&uVar0, unk_0x26ADBF0B08315387());
	func_246(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_245(&uVar0, unk_0xA3730885141EEA96());
	func_244(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_243(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_243(var uParam0, int iParam1)
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

void func_244(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_245(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_240(*uParam0);
	iVar1 = func_238(*uParam0);
	if (iParam1 < 1 || iParam1 > func_233(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_248(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_249(int iParam0)
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
	iVar0 = func_234(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_235(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_236(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_238(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_240(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_237(iParam0);
	if (iVar5 < 1 || iVar5 > func_233(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_250(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_259()) || Global_96486) || Global_24448) || func_258()) || func_14(8, -1)) || func_257()) || func_256()) || func_255()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_259()) || Global_24448) || func_258()) || func_14(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_259()) || Global_96486) || Global_24448) || func_258()) || func_14(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_259()) || Global_96486) || Global_24448) || func_258()) || func_14(8, -1)) || func_257()) || func_256()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_259() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_14(8, -1)) || func_254()) || func_253()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_257()) || func_256()) || func_253()) || func_252())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_259()) || Global_24448) || func_258()) || func_14(8, -1)) || func_256()) || func_255()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_259()) || func_256()) || Global_96486) || Global_24448) || func_258()) || Global_35965) || func_14(8, -1)) || func_255()) || func_253()) || func_254()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_259()) || Global_96486) || Global_24448) || func_258()) || func_14(8, -1)) || func_255()) || func_253()) || func_257()) || func_256()) || func_254())
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

var func_252()
{
	return Global_90081.f_1;
}

int func_253()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_254()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_256()
{
	return Global_90094.f_291 > 0;
}

bool func_257()
{
	return Global_90094.f_290 > 0;
}

var func_258()
{
	return Global_1315891;
}

int func_259()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_260()
{
	func_11();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_261(int iParam0)
{
	return func_241(func_242(), iParam0);
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
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

int func_263(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_264(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_265()
{
	var uVar0;
	
	if (Global_24596)
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_266()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_267(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_268()
{
	func_286(0);
	unk_0x46A747493835E815(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xAFB2D7547EAAAC69("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_281(&uLocal_96, 0);
	unk_0xB845ECB6BD2996BD("random@escape_paparazzi@standing@");
	unk_0xB845ECB6BD2996BD("random@paparazzi@pap_anims");
	unk_0xB845ECB6BD2996BD("random@paparazzi@peek");
	unk_0xB845ECB6BD2996BD("random@paparazzi@trans");
	unk_0xB845ECB6BD2996BD("random@paparazzi@wait");
	unk_0xB845ECB6BD2996BD("veh@std@ps@idle_panic");
	unk_0xB845ECB6BD2996BD("veh@low@front_ps@idle_panic");
	unk_0xB845ECB6BD2996BD(sLocal_373);
	unk_0x0C2EDF73A2AD1F31();
	if (func_218())
	{
		unk_0xABC4F2A6D7D56CF4(1f);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_85) && !unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (unk_0x9A132E8DFAE1F524(iLocal_85))
		{
			unk_0xA7130AF256ED96A1(iLocal_85);
		}
		if (unk_0x202EF5D8203705EF(iLocal_85, 1))
		{
			if (!unk_0x81060B34CE9997E9(iLocal_85))
			{
				unk_0xBB5AA994E06B28E2(iLocal_85, 0, 0);
			}
		}
	}
	func_270(-1);
	unk_0x4DB591D4FB49C738();
	unk_0x7AB9D66C2C87285D(0);
	unk_0x32DC163A33A4AB6D(joaat("vader"), 0);
	unk_0x32DC163A33A4AB6D(joaat("surano"), 0);
	unk_0x32DC163A33A4AB6D(joaat("cavalcade2"), 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_364, 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_365, 0);
	unk_0xA2D4DD3AE5BD39B4(uLocal_366, 0);
	unk_0xC7210908156431E0(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_24684)
	{
		unk_0x495459882382D113("AC_STOP");
	}
	func_269();
	unk_0x82706E6C897B0FA1();
}

void func_269()
{
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

void func_270(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_218())
	{
		func_274(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_273(30000);
		StringCopy(&cVar0, func_272(Global_97428, 1), 64);
		if (func_95(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_271(&Global_24505);
	Global_97429 = 0;
	func_224(-1);
}

void func_271(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

char* func_272(int iParam0, bool bParam1)
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

void func_273(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_274(int iParam0)
{
	func_275(iParam0, 0, func_280(iParam0));
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_242();
	func_278(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_277(iParam0, &uVar0);
	Var1 = { func_276(&uVar0) };
}

struct<16> func_276(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_234(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_237(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_238(*uParam0), 64);
	return Var0;
}

void func_277(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_238(*uParam0);
	iVar1 = func_240(*uParam0);
	iVar2 = func_237(*uParam0);
	iVar3 = func_236(*uParam0);
	iVar4 = func_235(*uParam0);
	iVar5 = func_234(*uParam0);
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
	iVar6 = func_233(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_233(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_279(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_279(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, iParam1);
	func_247(uParam0, iParam2);
	func_246(uParam0, iParam3);
	func_245(uParam0, iParam4);
	func_244(uParam0, iParam5);
	func_243(uParam0, iParam6);
}

int func_280(int iParam0)
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

void func_281(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_282(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_282(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_283(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x889D01384B54BCE3((*uParam0)[iVar0 /*2*/], 30))
		{
			func_284(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_284(var uParam0)
{
	func_285(*uParam0, "NULL", uParam0->f_1);
}

void func_285(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x889D01384B54BCE3(uParam0, 30))
	{
		switch (func_212(iParam0))
		{
			case 0:
				unk_0xEA054561294AEC10(uParam2);
				break;
			
			case 1:
				unk_0xB845ECB6BD2996BD(sParam1);
				break;
			
			case 2:
				unk_0xF4E0DE38B3046EF1(sParam1);
				break;
			
			case 3:
				unk_0x4A79FCCDF915C20B(sParam1);
				break;
			
			case 4:
				unk_0xA0B5A2A31FD758CC(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x3DE6488DAAEAB507(sParam1);
				break;
			
			case 6:
				unk_0x0C2EDF73A2AD1F31();
				break;
			
			case 7:
				unk_0x7782C61D47F5F794(uParam2);
				break;
			
			case 8:
				unk_0x3D3D5DB8C3B816AF(uParam2, unk_0x889D01384B54BCE3(iParam0, 26));
				break;
			
			case 9:
				unk_0x465D89CA94CBF67D();
				break;
			
			default:
				break;
		}
	}
}

void func_286(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_200(iVar0, bParam0);
		iVar0++;
	}
}

