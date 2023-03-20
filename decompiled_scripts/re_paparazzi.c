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
	if (unk_0x8D841F1DD3FA555F(11))
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
			unk_0xC23A229F78DAD92A();
		}
	}
	uLocal_364 = unk_0x13705C66F125D98D(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_365 = unk_0x13705C66F125D98D(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_366 = unk_0x13705C66F125D98D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x7C6BF0CD5D7454C9(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x3DD1ED742E99F292(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 0);
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
		unk_0x36137B7A77318822("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar0 /*18*/]) && !unk_0x930F8FBB8E9537CC(Local_130[iVar0 /*18*/]))
			{
				Local_130[iVar0 /*18*/].f_8 = { unk_0xB6AE0DAE06D56288(Local_130[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x930F8FBB8E9537CC(Local_203[iVar0 /*18*/]))
			{
				Local_203[iVar0 /*18*/].f_6 = { unk_0xB6AE0DAE06D56288(Local_203[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Local_59 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_85))
		{
			Local_62 = { unk_0xB6AE0DAE06D56288(iLocal_85, 1) };
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_90) && !unk_0x930F8FBB8E9537CC(iLocal_90))
		{
			Local_65 = { unk_0xB6AE0DAE06D56288(iLocal_90, 1) };
		}
		if (!func_218())
		{
			if (unk_0x52AB115D3D6A8417())
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
						if ((func_185() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || !unk_0x7404950238A154C2(iLocal_90, 0))
						{
							if (!Global_3 && !bLocal_69)
							{
								func_184();
								func_268();
							}
						}
						else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
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
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
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
						if (unk_0x86CCCD2FAE9D5E65(iLocal_85))
						{
							unk_0xF210D34D7F7152ED(&iLocal_85);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_62, 210f, 210f, 210f, 0, 1, 0))
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
				if ((!unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x48E480685981C7D4() - iLocal_563) > 5000) && !unk_0x5FEB513A4402FD59(Local_203[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_203[iVar1 /*18*/], 1), Local_59) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_62, Local_59) > (22.5f * 22.5f))
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
									iLocal_563 = unk_0x48E480685981C7D4();
									iLocal_662 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x2E0A9E3291F398E3(1, 13), 24);
							func_3(Local_203[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_563 = unk_0x48E480685981C7D4();
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
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		iVar0 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			iVar1 = unk_0xB0B9E53CEFDB16AA(iVar0, 0);
			if (!unk_0x5FEB513A4402FD59(iVar1))
			{
				if (iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						if (!unk_0x3E3058289D865B2D(iVar1, unk_0x81873881071CD9FE()))
						{
							unk_0xAF625598EDA64AD3(iVar1, unk_0x81873881071CD9FE(), 2000, 2048, 2);
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x4DC6EF945236C0F7(Local_203[iVar0 /*18*/]) < Local_203[iVar0 /*18*/].f_17)
			{
				if (unk_0xBBEF8270CE27C0EE(Local_203[iVar0 /*18*/], unk_0x81873881071CD9FE(), 1))
				{
					iLocal_385[iVar0] = (iLocal_385[iVar0] + (Local_203[iVar0 /*18*/].f_17 - unk_0x4DC6EF945236C0F7(Local_203[iVar0 /*18*/])));
					iLocal_81 = (iLocal_81 + (Local_203[iVar0 /*18*/].f_17 - unk_0x4DC6EF945236C0F7(Local_203[iVar0 /*18*/])));
					unk_0xD24EA1F9FB501BB5(Local_203[iVar0 /*18*/]);
					if (iLocal_385[iVar0] > iLocal_384)
					{
						iLocal_384 = iLocal_385[iVar0];
					}
				}
			}
			Local_203[iVar0 /*18*/].f_17 = unk_0x4DC6EF945236C0F7(Local_203[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
					unk_0x9E95048D8C96C1EA(0);
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
		if (unk_0xE1772957381F609F())
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
	unk_0x9E95048D8C96C1EA(0);
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
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
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		if (Global_69020)
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
	return Global_35443 == iParam0;
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_15()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
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
	return Global_98931.f_1750.f_539.f_3549;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_23(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_22(unk_0x81873881071CD9FE());
			if (func_21(iVar0) && (!func_12(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_21(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
		if ((unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/])) && !unk_0x5FEB513A4402FD59(iLocal_85))
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
			unk_0x32A12757CBF48A33(joaat("a_m_y_genstreet_02"));
			unk_0x32A12757CBF48A33(joaat("prop_pap_camera_01"));
			unk_0x32A12757CBF48A33(joaat("cavalcade2"));
			unk_0x32A12757CBF48A33(joaat("vader"));
			unk_0x295DC04FC13E025B(sLocal_372);
			unk_0x295DC04FC13E025B("random@paparazzi@pap_anims");
			if (((((unk_0x33ACB874CECA2D4B(joaat("a_m_y_genstreet_02")) && unk_0x33ACB874CECA2D4B(joaat("prop_pap_camera_01"))) && unk_0x33ACB874CECA2D4B(joaat("cavalcade2"))) && unk_0x33ACB874CECA2D4B(joaat("vader"))) && unk_0x8E8B546E1A81D27F(sLocal_372)) && unk_0x8E8B546E1A81D27F("random@paparazzi@pap_anims"))
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
				unk_0xB067093BBAF0A747(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(func_55(0, 1), 217.1033f);
				unk_0xB067093BBAF0A747(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(func_55(2, 1), 38.6283f);
				unk_0xB067093BBAF0A747(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(func_55(3, 1), 272.9875f);
				unk_0x31C1393E4ACFD794(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x31C1393E4ACFD794(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
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
			if (unk_0x86CCCD2FAE9D5E65(Local_203[2 /*18*/].f_2))
			{
				if (!unk_0x1DB417C2D78C2390(Local_203[2 /*18*/].f_2))
				{
					unk_0xABA9860C0161F3CD(Local_203[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_615)
			{
				case 0:
					if (!unk_0x5FEB513A4402FD59(func_55(1, 0)))
					{
						unk_0x27CC98B7C879C320(func_55(1, 0));
					}
					if (!unk_0x5FEB513A4402FD59(func_55(1, 1)))
					{
						unk_0x27CC98B7C879C320(func_55(1, 1));
					}
					if (!unk_0x86CCCD2FAE9D5E65(Local_130[2 /*18*/]))
					{
						func_56(2, Local_595[2 /*3*/], fLocal_608[2], 0);
						if (unk_0x7404950238A154C2(Local_130[2 /*18*/], 0))
						{
							func_57(func_60(2), unk_0xB6AE0DAE06D56288(Local_130[2 /*18*/], 1), 0f);
							unk_0xDC81A805934C85CD(func_55(2, 0), Local_130[2 /*18*/], -1);
						}
					}
					if (!unk_0x86CCCD2FAE9D5E65(Local_130[3 /*18*/]))
					{
						func_56(3, Local_595[3 /*3*/], fLocal_608[3], 0);
					}
					if (!unk_0x5FEB513A4402FD59(func_55(2, 1)))
					{
						unk_0xD91194CE3D1E1D77(func_55(2, 1), Local_580, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x5FEB513A4402FD59(func_55(3, 1)))
					{
						unk_0xD91194CE3D1E1D77(func_55(3, 1), Local_583, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x86CCCD2FAE9D5E65(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_69)
					{
						if (!unk_0x5FEB513A4402FD59(func_55(1, 0)))
						{
							unk_0xD91194CE3D1E1D77(func_55(1, 0), Local_586, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x5FEB513A4402FD59(func_55(1, 1)))
						{
							unk_0xD91194CE3D1E1D77(func_55(1, 1), Local_589, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x5FEB513A4402FD59(func_55(0, 1)))
						{
							unk_0xD91194CE3D1E1D77(func_55(0, 1), Local_592, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_203.f_0)
					{
						if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar1 /*18*/]))
						{
							unk_0x80E2E482FDBC2DD9(Local_203[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_130.f_0)
					{
						if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar1 /*18*/]))
						{
							unk_0x80E2E482FDBC2DD9(Local_130[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_615++;
					break;
				
				case 1:
					func_49();
					if ((unk_0x7404950238A154C2(Local_130[0 /*18*/], 0) && !unk_0x5FEB513A4402FD59(func_55(0, 0))) && !unk_0x5FEB513A4402FD59(func_55(0, 1)))
					{
						if (!iLocal_570[1])
						{
							iLocal_570[1] = 1;
							unk_0x1ABA8A919187E144(func_55(0, 0), Local_130[0 /*18*/], Local_574, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0x7404950238A154C2(Local_130[2 /*18*/], 0) && !unk_0x5FEB513A4402FD59(func_55(2, 0))) && !unk_0x5FEB513A4402FD59(func_55(2, 1)))
					{
						if (!iLocal_570[0])
						{
							unk_0x1ABA8A919187E144(func_55(2, 0), Local_130[2 /*18*/], Local_577, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_570[0] = 1;
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_85) && !unk_0x5FEB513A4402FD59(iLocal_85))
					{
						func_46(iLocal_85, 6);
						if (Global_3 || bLocal_69)
						{
							if (!unk_0x5FEB513A4402FD59(func_55(1, 0)))
							{
								if (unk_0x515B65C19A5CA9B1(func_55(1, 0), Local_586, Global_22, 0, 1, 0))
								{
									func_45(iLocal_85, func_60(1));
								}
							}
							if (!unk_0x5FEB513A4402FD59(func_55(1, 1)))
							{
								if (unk_0x515B65C19A5CA9B1(func_55(1, 1), Local_589, Global_22, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(1));
								}
							}
							if (!unk_0x5FEB513A4402FD59(func_55(0, 1)))
							{
								if (unk_0x515B65C19A5CA9B1(func_55(0, 1), Local_589, Global_22, 0, 1, 0))
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
					if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_90, 1), Local_86) < 9f)
					{
						if (unk_0x515B65C19A5CA9B1(func_55(2, 1), Local_580, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(2));
						}
						if (unk_0x515B65C19A5CA9B1(func_55(3, 1), Local_583, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(3));
						}
						if (unk_0x515B65C19A5CA9B1(func_55(0, 1), Local_583, Global_22, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(0));
						}
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_618, 3))
						{
							unk_0x27CC98B7C879C320(Local_203[func_58(3) /*18*/]);
							unk_0xF3148AAF69AF9CBC(&iLocal_618, 3);
						}
						if (!unk_0x236D8AD7EE179F46(iLocal_618, 2))
						{
							unk_0x27CC98B7C879C320(Local_203[func_58(2) /*18*/]);
							unk_0xF3148AAF69AF9CBC(&iLocal_618, 2);
						}
						if (!unk_0x236D8AD7EE179F46(iLocal_618, 0))
						{
							unk_0x27CC98B7C879C320(Local_203[func_58(0) /*18*/]);
							unk_0xF3148AAF69AF9CBC(&iLocal_618, 0);
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
			if (unk_0x7404950238A154C2(iLocal_90, 0))
			{
				if (unk_0xA04824262F150982(iLocal_90) < 1f)
				{
					fLocal_573 = (fLocal_573 + unk_0x8D51D24D214E2FF2());
				}
				else if (fLocal_573 > 0f)
				{
					fLocal_573 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar0 /*18*/]) && iLocal_46 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_613 || !unk_0x86CCCD2FAE9D5E65(Local_130[0 /*18*/])) || !unk_0x86CCCD2FAE9D5E65(Local_130[1 /*18*/]))) && (unk_0x48E480685981C7D4() - iLocal_614) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_86) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_59, Local_86) < 62500f || (unk_0x48E480685981C7D4() - iLocal_369) < 30000)
							{
								func_40(Local_130[iVar0 /*18*/], iLocal_90, &(Local_130[iVar0 /*18*/].f_5), &(Local_130[iVar0 /*18*/].f_15), &(Local_130[iVar0 /*18*/].f_11), &(Local_130[iVar0 /*18*/].f_14), &(Local_130[iVar0 /*18*/].f_16), Local_130[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_613 = iVar0;
								iLocal_614 = unk_0x48E480685981C7D4();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!unk_0x5FEB513A4402FD59(Local_203[iVar2 /*18*/]))
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
							if (unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
							{
								if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_130[iVar0 /*18*/], 0))
								{
									if (!unk_0x5FEB513A4402FD59(Local_203[iVar2 /*18*/]))
									{
										if (!unk_0x04C377C10639B842(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
										{
											if (unk_0xFA1212DE7C455679(Local_203[iVar2 /*18*/], -1794415470) != 1 && unk_0xBEB00EB4ADDC2A33(Local_130[iVar0 /*18*/], -1))
											{
												unk_0x3C3A95141D01773E(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x5FEB513A4402FD59(Local_203[iVar3 /*18*/]))
										{
											if (!unk_0x04C377C10639B842(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
											{
												if (unk_0xFA1212DE7C455679(Local_203[iVar3 /*18*/], -1794415470) != 1 && unk_0xBEB00EB4ADDC2A33(Local_130[iVar0 /*18*/], 0))
												{
													unk_0x3C3A95141D01773E(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x5FEB513A4402FD59(Local_203[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x5FEB513A4402FD59(Local_203[iVar3 /*18*/])))
										{
											if ((unk_0x04C377C10639B842(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x04C377C10639B842(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0x7404950238A154C2(iLocal_90, 0))
											{
												if (unk_0xFA1212DE7C455679(Local_203[iVar2 /*18*/], -1273030092) != 1 && unk_0xFA1212DE7C455679(Local_203[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x4B9FA68A3AC8C29D(Local_203[iVar2 /*18*/], 3, 0);
													unk_0x4B9FA68A3AC8C29D(Local_203[iVar2 /*18*/], 1, 1);
													unk_0x4B9FA68A3AC8C29D(Local_203[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0x31F198965149F7F4(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x31F198965149F7F4(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x31F198965149F7F4(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x31F198965149F7F4(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xB8BE32B6C4B45732(Local_203[iVar2 /*18*/], func_39((3f * unk_0x0D6E79537424BACE(Local_65, Local_130[iVar0 /*18*/].f_8, 1)), 50f, 120f));
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
								if (!unk_0x5FEB513A4402FD59(Local_203[iVar2 /*18*/]))
								{
									if (!unk_0x5EF53977B76418E5(Local_203[iVar2 /*18*/]))
									{
										unk_0x7F5F0D37173E518C(Local_203[iVar2 /*18*/], 2, 0);
										unk_0x754376E2234CBB4A(Local_203[iVar2 /*18*/], unk_0x81873881071CD9FE(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x5FEB513A4402FD59(Local_203[iVar3 /*18*/]))
									{
										if (!unk_0x5EF53977B76418E5(Local_203[iVar3 /*18*/]))
										{
											unk_0x7F5F0D37173E518C(Local_203[iVar3 /*18*/], 2, 0);
											unk_0x754376E2234CBB4A(Local_203[iVar3 /*18*/], unk_0x81873881071CD9FE(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0xE5AB05962FA1FF3F(Local_203[iVar2 /*18*/], 0))
							{
								unk_0x98046F3D16B9CF76(Local_203[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_85, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x5FEB513A4402FD59(Local_203[iVar3 /*18*/]))
								{
									if (unk_0xE5AB05962FA1FF3F(Local_203[iVar3 /*18*/], 0))
									{
										unk_0x98046F3D16B9CF76(Local_203[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_85, iVar3);
									}
								}
							}
							if (unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) > 15f)
								{
									Local_130[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x5FEB513A4402FD59(Local_203[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x5FEB513A4402FD59(Local_203[iVar3 /*18*/]))) && unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x895C275673BCEAB0(Local_203[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x895C275673BCEAB0(Local_203[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x895C275673BCEAB0(Local_130[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_59, Local_130[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_59, Local_203[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x04C377C10639B842(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								unk_0xDC81A805934C85CD(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x04C377C10639B842(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									unk_0xDC81A805934C85CD(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0);
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
					if (!unk_0x5FEB513A4402FD59(Local_203[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
					{
						if (!unk_0x5FEB513A4402FD59(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x04C377C10639B842(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0xFA1212DE7C455679(Local_203[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x3C3A95141D01773E(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x5FEB513A4402FD59(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x04C377C10639B842(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									if (unk_0xFA1212DE7C455679(Local_203[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x3C3A95141D01773E(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x5FEB513A4402FD59(Local_203[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x5FEB513A4402FD59(Local_203[iVar6 /*18*/])))
							{
								if ((unk_0x04C377C10639B842(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x04C377C10639B842(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0x7404950238A154C2(iLocal_90, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x48E480685981C7D4() - iLocal_84)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x48E480685981C7D4() - iLocal_84) > 4000)
									{
										unk_0x44E2D0A040477671(Local_203[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_130.f_0)
										{
											if ((unk_0x7404950238A154C2(Local_130[iVar8 /*18*/], 0) && !unk_0x5FEB513A4402FD59(func_55(iVar8, 0))) && unk_0x04C377C10639B842(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0))
											{
												unk_0x27CC98B7C879C320(func_55(iVar8, 0));
												unk_0x31F198965149F7F4(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_617 = 1;
									}
									else if (unk_0xFA1212DE7C455679(Local_203[iVar5 /*18*/], -1273030092) != 1 && unk_0xFA1212DE7C455679(Local_203[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x4B9FA68A3AC8C29D(Local_203[iVar5 /*18*/], 3, 0);
										unk_0x4B9FA68A3AC8C29D(Local_203[iVar5 /*18*/], 1, 1);
										unk_0x4B9FA68A3AC8C29D(Local_203[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0x31F198965149F7F4(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x31F198965149F7F4(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x31F198965149F7F4(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x31F198965149F7F4(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x5FEB513A4402FD59(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x5EF53977B76418E5(Local_203[iVar5 /*18*/]))
							{
								unk_0x7F5F0D37173E518C(Local_203[iVar5 /*18*/], 2, 0);
								unk_0x754376E2234CBB4A(Local_203[iVar5 /*18*/], unk_0x81873881071CD9FE(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x5FEB513A4402FD59(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x5EF53977B76418E5(Local_203[iVar6 /*18*/]))
								{
									unk_0x7F5F0D37173E518C(Local_203[iVar6 /*18*/], 2, 0);
									unk_0x754376E2234CBB4A(Local_203[iVar6 /*18*/], unk_0x81873881071CD9FE(), 300f, 100000, 0, 0);
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
		{
			if (iLocal_48 > 1)
			{
				if (!unk_0xB318FDA0D1ABDB20(sLocal_372))
				{
					func_28(iVar0);
					if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/].f_2) && unk_0xCB8B9E751036ECB2(Local_203[iVar0 /*18*/].f_2))
					{
						if (!unk_0xE5AB05962FA1FF3F(Local_203[iVar0 /*18*/], 0))
						{
							if (unk_0x1DB417C2D78C2390(Local_203[iVar0 /*18*/].f_2))
							{
								if (unk_0xEE6F2DE3DB966195(Local_203[iVar0 /*18*/]))
								{
									unk_0xABA9860C0161F3CD(Local_203[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!unk_0xEE6F2DE3DB966195(Local_203[iVar0 /*18*/]))
							{
								unk_0xABA9860C0161F3CD(Local_203[iVar0 /*18*/].f_2, 1);
							}
							if (!unk_0x895C275673BCEAB0(Local_203[iVar0 /*18*/]))
							{
								if (!unk_0x0BAE7BE122182FA8(Local_203[iVar0 /*18*/], sLocal_372, func_27(iVar0), 3))
								{
									if (!Local_203[iVar0 /*18*/].f_11)
									{
										if (!unk_0x0BAE7BE122182FA8(Local_203[iVar0 /*18*/], sLocal_372, "grip", 3))
										{
											unk_0x31C1393E4ACFD794(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_203[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_203[iVar0 /*18*/].f_11)
								{
									unk_0x31C1393E4ACFD794(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_203[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_203[iVar0 /*18*/].f_10)
							{
								unk_0x84DD60B32678925A(sLocal_372);
								if (unk_0xF8EE0045B0C60677(sLocal_372))
								{
									unk_0x4AA63E48994C4A78(Local_203[iVar0 /*18*/], sLocal_372);
									Local_203[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_203[iVar0 /*18*/].f_11)
							{
								unk_0x31C1393E4ACFD794(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_203[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_203[iVar0 /*18*/].f_10)
							{
								unk_0xE5A10141D270658C(Local_203[iVar0 /*18*/]);
								Local_203[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x86F7E6A693F6370F(Local_203[iVar0 /*18*/]) && func_26(Local_203[iVar0 /*18*/], unk_0xE68E6B44DABA9C05(Local_203[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0x1DB417C2D78C2390(Local_203[iVar0 /*18*/].f_2))
							{
								unk_0xABA9860C0161F3CD(Local_203[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!unk_0x1DB417C2D78C2390(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0xABA9860C0161F3CD(Local_203[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_203[iVar0 /*18*/].f_11)
						{
							unk_0x31C1393E4ACFD794(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_203[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_203[iVar0 /*18*/].f_10)
						{
							unk_0xE5A10141D270658C(Local_203[iVar0 /*18*/]);
							Local_203[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_46 != 7)
			{
				if (unk_0x70847137E3B37A59(Local_203[iVar0 /*18*/]) && unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()))
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
			if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar0 /*18*/]))
			{
				if (unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_130[iVar0 /*18*/], 0))
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
	if (!unk_0x930F8FBB8E9537CC(iParam0) && !unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (unk_0x58A69336FE7307D8(iParam0, iParam1))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB0B9E53CEFDB16AA(iParam1, 2) == iParam0)
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
		if (unk_0x236D8AD7EE179F46(Local_203[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_374);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 3))
				{
					if (unk_0xC00796CF40447CA8(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0)) > 0.9f)
					{
						unk_0xC69E84EBBD7166E6(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)], 3))
				{
					if (unk_0xC00796CF40447CA8(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xC69E84EBBD7166E6(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sLocal_372, "grip", 3))
			{
				unk_0xC69E84EBBD7166E6(&(Local_203[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		iVar0 = func_58(iLocal_567);
		if (((unk_0x86CCCD2FAE9D5E65(Local_130[iLocal_567 /*18*/]) && unk_0x7404950238A154C2(Local_130[iLocal_567 /*18*/], 0)) && unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/])) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
		{
			if (unk_0xCC6B00B8460CDA0E(Local_130[iLocal_567 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xB0B9E53CEFDB16AA(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					if (!Local_203[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x48E480685981C7D4() - Local_203[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x0BAE7BE122182FA8(Local_203[iVar0 /*18*/], sLocal_373, "base", 3))
						{
							unk_0x31C1393E4ACFD794(Local_203[iVar0 /*18*/], sLocal_373, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_203[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xB0B9E53CEFDB16AA(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					unk_0xB50550EDBED3C493(Local_203[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_85, 1070134723, 1048576000);
					Local_203[iVar0 /*18*/].f_9 = 1;
					Local_203[iVar0 /*18*/].f_13 = unk_0x48E480685981C7D4();
				}
			}
			else if (Local_203[iVar0 /*18*/].f_9)
			{
				if ((unk_0x48E480685981C7D4() - Local_203[iVar0 /*18*/].f_13) > 2000)
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
	
	if (!unk_0x5FEB513A4402FD59(Local_203[iParam0 /*18*/]) && !unk_0x5FEB513A4402FD59(iLocal_85))
	{
		iVar0 = 15;
		Var1 = { Local_62 - Local_203[iParam0 /*18*/].f_6 };
		Var4 = { unk_0xC99223BD7E489FC6(Local_203[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0xB9AA84B14E04BC20(fVar7) < 10f)
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
		if (!unk_0x236D8AD7EE179F46(Local_203[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_203[iParam0 /*18*/].f_15 = 0;
			unk_0xF3148AAF69AF9CBC(&(Local_203[iParam0 /*18*/].f_15), iParam1);
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
	fVar0 = (unk_0x43A2E703A9A654DB(Param3.f_1, Param3.f_0) - unk_0x43A2E703A9A654DB(Param0.f_1, Param0.f_0));
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
	if (!unk_0xB318FDA0D1ABDB20(sLocal_373))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x236D8AD7EE179F46(Local_203[iParam0 /*18*/].f_15, iVar1))
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
	
	if (unk_0x86CCCD2FAE9D5E65(Local_130[iParam0 /*18*/]) && unk_0x895C275673BCEAB0(Local_130[iParam0 /*18*/]))
	{
		unk_0x5D00E836B6BE8693(&(Local_130[iParam0 /*18*/]));
	}
	if (unk_0xFBACB273AA628CC5(Local_130[iParam0 /*18*/].f_1))
	{
		unk_0x0A8175F24237A3D4(&(Local_130[iParam0 /*18*/].f_1));
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar1 /*18*/]) && unk_0x895C275673BCEAB0(Local_203[iVar1 /*18*/]))
		{
			if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar1 /*18*/]))
			{
				unk_0xAB6AFD52AD641D70(&(Local_203[iVar1 /*18*/].f_2));
			}
			if (unk_0xFBACB273AA628CC5(Local_203[iVar1 /*18*/].f_1))
			{
				unk_0x0A8175F24237A3D4(&(Local_203[iVar1 /*18*/].f_1));
			}
			unk_0xF210D34D7F7152ED(&(Local_203[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x86CCCD2FAE9D5E65(Local_130[iParam0 /*18*/]))
	{
		if (unk_0x7404950238A154C2(Local_130[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_130[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x895C275673BCEAB0(Local_130[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(func_55(iParam0, 0)))
	{
		if (!unk_0x5FEB513A4402FD59(func_55(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x895C275673BCEAB0(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(func_55(iParam0, 1)))
	{
		if (!unk_0x5FEB513A4402FD59(func_55(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x895C275673BCEAB0(func_55(iParam0, 1)))
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
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		if (((((unk_0x86CCCD2FAE9D5E65(iParam1) && iParam0 != iParam1) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(iParam1)))
		{
			if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_357, unk_0xB6AE0DAE06D56288(iParam1, 1), unk_0x1FC13B3C61DF24B9(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x957F1AE07A974C5E(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
					*uParam5 = unk_0x3306AAAFE3B25098(iParam1);
				}
			}
			if (!unk_0x895C275673BCEAB0(iParam0))
			{
				*uParam6 = unk_0x48E480685981C7D4();
			}
			else if ((unk_0x48E480685981C7D4() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x547A2AA158CA2804(*uParam2, 6f))
						{
							unk_0x984F8E3A66FFFEE5(*uParam2, 6f, 0);
							unk_0xA450601E968044DB(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0xB067093BBAF0A747(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iParam0, *uParam3);
							unk_0x5CC9D6711FE01F0D(iParam0);
							unk_0x3D24414865131CB8(iParam0, func_39((unk_0xA04824262F150982(iParam1) + 10f), 10f, 60f));
							unk_0x686D6CDC14C4BA6C(iParam0, 1, 1);
							*uParam6 = unk_0x48E480685981C7D4();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x48E480685981C7D4();
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
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam2))
	{
		unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var7, &Var10);
		unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam1), &Var13, &uVar16);
		fVar19 = unk_0xB9AA84B14E04BC20((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0xB9AA84B14E04BC20((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0xB9AA84B14E04BC20((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0xB9AA84B14E04BC20(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0xB9AA84B14E04BC20(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xB067093BBAF0A747(iParam2, Param3, 1, 0, 0, 1);
		unk_0x3A45EB0810EBE71C(iParam2, Param6, 2, 1);
		Var1 = { unk_0xB07F27EC3B05E4EA(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0xB07F27EC3B05E4EA(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0x751FA16E55F0A171(Var4, Var1, fVar22, 19, unk_0x81873881071CD9FE(), 4);
		if (unk_0x26CECBCADF60693F(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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
	
	if ((unk_0x48E480685981C7D4() - iLocal_566) > 100)
	{
		if ((unk_0x48E480685981C7D4() - Local_203[iLocal_565 /*18*/].f_12) > 500)
		{
			if (unk_0x86CCCD2FAE9D5E65(Local_203[iLocal_565 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iLocal_565 /*18*/]))
			{
				bVar0 = true;
				if (!Local_203[iLocal_565 /*18*/].f_9 && unk_0xE5AB05962FA1FF3F(Local_203[iLocal_565 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x0BAE7BE122182FA8(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565), 3) && unk_0xC00796CF40447CA8(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) > 0.5f) && unk_0xC00796CF40447CA8(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) < 0.75f) || Local_203[iLocal_565 /*18*/].f_9)
					{
						unk_0x5CBC8B584F025FB4("scr_rcpap1_camera", Local_203[iLocal_565 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_565 % 3) == 0)
						{
							unk_0x5A24D808FBE871F7(-1, "SHUTTER_FLASH", unk_0xB6AE0DAE06D56288(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_565 % 3) == 1)
						{
							unk_0x5A24D808FBE871F7(-1, "SHUTTER", unk_0xB6AE0DAE06D56288(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x5A24D808FBE871F7(-1, "FLASH", unk_0xB6AE0DAE06D56288(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_203[iLocal_565 /*18*/].f_12 = unk_0x48E480685981C7D4();
					}
					iLocal_566 = unk_0x48E480685981C7D4();
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
	if (!unk_0x5FEB513A4402FD59(Local_203[iParam1 /*18*/]) && !unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0x598CCC94D95857D9(Local_203[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xFA1212DE7C455679(Local_203[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0xF88735A9354A45F3(Local_203[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x48E480685981C7D4() - Local_203[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x0BAE7BE122182FA8(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 3))
			{
				unk_0x31C1393E4ACFD794(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_203[iParam1 /*18*/].f_13 = unk_0x48E480685981C7D4();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x5FEB513A4402FD59(Local_203[iParam1 /*18*/]) && !unk_0x5FEB513A4402FD59(iParam0))
	{
		Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, func_48(iParam1)) };
		switch (Local_203[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_203[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xFA1212DE7C455679(Local_203[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 5f)
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
				if (unk_0xFA1212DE7C455679(Local_203[iParam1 /*18*/], 713668775) != 1)
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
	
	Var0 = { func_35(unk_0xB6AE0DAE06D56288(iParam4, 1) - Param0) };
	iVar3 = unk_0x097CA9356FED843D(Var0.f_0, Var0.f_1);
	Local_203[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x27CC98B7C879C320(Local_203[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_203[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0xD91194CE3D1E1D77(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0xD91194CE3D1E1D77(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
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
		if (unk_0xFBACB273AA628CC5(Local_203[iVar0 /*18*/].f_1))
		{
			if (unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
			{
				unk_0x0A8175F24237A3D4(&(Local_203[iVar0 /*18*/].f_1));
			}
			else if (unk_0xE5AB05962FA1FF3F(Local_203[iVar0 /*18*/], 0))
			{
				unk_0x0A8175F24237A3D4(&(Local_203[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]) && !unk_0xE5AB05962FA1FF3F(Local_203[iVar0 /*18*/], 0))
		{
			Local_203[iVar0 /*18*/].f_1 = func_174(Local_203[iVar0 /*18*/], 1, 145);
			unk_0x2AB7C42FF2AF476D(Local_203[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0x7404950238A154C2(Local_130[iVar0 /*18*/], 0))
		{
			if (unk_0xFBACB273AA628CC5(Local_130[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x3BB744083EDD3FF5(Local_130[iVar0 /*18*/].f_1) };
				Var4 = { Local_130[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x8F0CD34B4BFF4767(Local_130[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
				{
					unk_0x0A8175F24237A3D4(&(Local_130[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
			{
				Local_130[iVar0 /*18*/].f_1 = func_50(Local_130[iVar0 /*18*/].f_8, 0);
				unk_0x1B86E7A8766EA6B4(Local_130[iVar0 /*18*/].f_1, 1);
				unk_0x2AB7C42FF2AF476D(Local_130[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xCB015C3E2E01CA1C(Local_130[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xFBACB273AA628CC5(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0x0A8175F24237A3D4(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_51(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
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
	
	iVar1 = unk_0x59D35AC211D17FAB(uParam0) + 1;
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x81873881071CD9FE())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x5FEB513A4402FD59(iVar2))
					{
						if (unk_0x0452D5BF20AD945A(iVar2))
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
					iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, (iVar0 - 1));
					if (!unk_0x5FEB513A4402FD59(iVar3))
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
	if (!unk_0x5FEB513A4402FD59(Local_203[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(Local_203[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xFA1212DE7C455679(Local_203[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0xD91194CE3D1E1D77(Local_203[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0xB9AA84B14E04BC20((func_54(unk_0x3306AAAFE3B25098(Local_203[iParam0 /*18*/])) - func_54(fParam4))) > 10f)
		{
			if (unk_0xFA1212DE7C455679(Local_203[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x5D5CFD0EDDA0BC90(Local_203[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_203[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0xB318FDA0D1ABDB20(sParam7))
					{
						if (!unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xC00796CF40447CA8(Local_203[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x0BAE7BE122182FA8(Local_203[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xC00796CF40447CA8(Local_203[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x31C1393E4ACFD794(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
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
		Local_130[iParam0 /*18*/] = unk_0xE00F8DEA9778FC87(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_130[iParam0 /*18*/] = unk_0xE00F8DEA9778FC87(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		unk_0xED1544041E75AE1E(Local_130[iParam0 /*18*/], 0);
	}
	unk_0x5CC9D6711FE01F0D(Local_130[iParam0 /*18*/]);
	unk_0xDEE6369ABB2B517A(Local_130[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x86CCCD2FAE9D5E65(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0x86CCCD2FAE9D5E65(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam4);
		}
		if (!unk_0x5FEB513A4402FD59(func_55(iParam0, 0)) && unk_0x7404950238A154C2(Local_130[iParam0 /*18*/], 0))
		{
			unk_0xDC81A805934C85CD(func_55(iParam0, 0), Local_130[iParam0 /*18*/], -1);
		}
		if (!unk_0x5FEB513A4402FD59(func_55(iParam0, 1)) && unk_0x7404950238A154C2(Local_130[iParam0 /*18*/], 0))
		{
			unk_0xDC81A805934C85CD(func_55(iParam0, 1), Local_130[iParam0 /*18*/], 0);
		}
		unk_0x686D6CDC14C4BA6C(Local_130[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam4)
{
	Local_203[iParam0 /*18*/] = unk_0x206897C6DBC12488(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x4B9FA68A3AC8C29D(Local_203[iParam0 /*18*/], 1, 0);
	unk_0x1D15D99A10A15334(Local_203[iParam0 /*18*/], 1);
	unk_0x4B9FA68A3AC8C29D(Local_203[iParam0 /*18*/], 0, 1);
	unk_0x150101BCDC17D828(Local_203[iParam0 /*18*/], 3);
	unk_0x4351E8D40CE67994(Local_203[iParam0 /*18*/], 1);
	unk_0x4B9FA68A3AC8C29D(Local_203[iParam0 /*18*/], 17, 1);
	unk_0x7F5F0D37173E518C(Local_203[iParam0 /*18*/], 2, 0);
	unk_0xEA89E72C99125D9C(Local_203[iParam0 /*18*/], 0);
	unk_0x6CB332CB31E9FA96(Local_203[iParam0 /*18*/], 1);
	unk_0x3E0DE130384C7771(Local_203[iParam0 /*18*/], 100);
	unk_0x0795E896D82CFA3B(Local_203[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0xCE566DBDCACD245E(Local_203[iParam0 /*18*/], 101, 1);
	unk_0xCE566DBDCACD245E(Local_203[iParam0 /*18*/], 185, 0);
	unk_0x9765BF567DB87B5F(Local_203[iParam0 /*18*/], 300);
	unk_0x03F73D35E5AC583A(Local_203[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_69)
	{
		unk_0x210A4A0B257F8433(Local_203[iParam0 /*18*/], 1);
		unk_0x9765BF567DB87B5F(Local_203[iParam0 /*18*/], 500);
	}
	unk_0x632435B4905EF92E(Local_203[iParam0 /*18*/], 1);
	unk_0x4B9FA68A3AC8C29D(Local_203[iParam0 /*18*/], 2, 1);
	unk_0x99E525B7A12DCDBE(Local_203[iParam0 /*18*/], 2f);
	unk_0xEA89E72C99125D9C(Local_203[iParam0 /*18*/], 0);
	unk_0x06618C182FDAA45F(Local_203[iParam0 /*18*/], 0);
	Local_203[iParam0 /*18*/].f_2 = unk_0xF364195A57BB7AE3(joaat("prop_pap_camera_01"), unk_0xC91EFAB304EB7DE6(Local_203[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x75F9EE7629363312(Local_203[iParam0 /*18*/].f_2, Local_203[iParam0 /*18*/], unk_0xDED1B3B1138F742B(Local_203[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x86CCCD2FAE9D5E65(Local_203[0 /*18*/].f_2))
	{
		unk_0xABA9860C0161F3CD(Local_203[0 /*18*/].f_2, 0);
	}
	Local_203[iParam0 /*18*/].f_17 = unk_0x4DC6EF945236C0F7(Local_203[iParam0 /*18*/]);
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
	
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		bVar0 = false;
		if (func_65())
		{
			if (unk_0x86CCCD2FAE9D5E65(func_64()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(func_64(), 1), Local_62) < 5f && unk_0xA04824262F150982(iLocal_90) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0x7404950238A154C2(iLocal_90, 0))
		{
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0) && unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
			{
				fLocal_569 = (fLocal_569 + unk_0x8D51D24D214E2FF2());
			}
			else if (fLocal_569 > 0f)
			{
				fLocal_569 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_568 = (fLocal_568 + unk_0x8D51D24D214E2FF2());
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
			if (!unk_0x58A69336FE7307D8(iLocal_85, iLocal_90))
			{
				if (unk_0xD81BC0FD4D47CC04(iLocal_85))
				{
					bVar1 = true;
				}
				iLocal_70 = 0;
			}
		}
		if (!iLocal_70)
		{
			if (unk_0x58A69336FE7307D8(iLocal_85, iLocal_90))
			{
				iLocal_70 = 1;
			}
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0x7404950238A154C2(iLocal_90, 0) && (!bLocal_367 || iLocal_46 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_62, Local_59) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0x7404950238A154C2(iLocal_90, 0) && func_63(iLocal_90)) && (!bLocal_367 || iLocal_46 == 1)) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_85, 1), Local_55) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0x7404950238A154C2(iLocal_90, 0) && unk_0x2C237D28F05F0008(iLocal_90))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x2E0A9E3291F398E3(0, 2) == 1)
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
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (((unk_0x088B9F587DA37464(iParam0, 0, 7000) || unk_0x088B9F587DA37464(iParam0, 3, 30000)) || unk_0x088B9F587DA37464(iParam0, 2, 30000)) || unk_0x088B9F587DA37464(iParam0, 1, 40000))
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
		if ((unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/])) && !unk_0x5FEB513A4402FD59(iLocal_85))
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
	if (unk_0x7404950238A154C2(iLocal_90, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_85))
		{
			if (unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]) || unk_0x930F8FBB8E9537CC(Local_203[iVar0 /*18*/]))
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
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7))
		{
			unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x544121698BDAB87E(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_59) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && !unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE())) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE())) && unk_0xB7A628320EFF8E47(Local_59, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0)) && (func_68(Local_59, iParam0) && unk_0xB7A628320EFF8E47(Local_59, unk_0xB6AE0DAE06D56288(iParam0, 1)) < 100f)) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				return 1;
			}
			if (iLocal_384 > 150)
			{
				return 1;
			}
		}
		if (unk_0x7524A58D724C2495(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x86CCCD2FAE9D5E65(iParam0) && iParam1)
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
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam3, 1) };
	Var3 = { unk_0xB07F27EC3B05E4EA(iParam3, 0f, 1f, 0f) - Var0 };
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
		if (unk_0xFBACB273AA628CC5(uLocal_361))
		{
			unk_0x0A8175F24237A3D4(&uLocal_361);
		}
		if (unk_0xFBACB273AA628CC5(uLocal_362))
		{
			unk_0x0A8175F24237A3D4(&uLocal_362);
		}
		if (unk_0xFBACB273AA628CC5(uLocal_359))
		{
			unk_0x0A8175F24237A3D4(&uLocal_359);
		}
		iLocal_47 = iLocal_46;
		iLocal_46 = 11;
	}
	else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 3)
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
	if ((unk_0x48E480685981C7D4() - iLocal_666) > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x48E480685981C7D4();
			}
		}
	}
}

int func_72()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

bool func_73()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
	{
		if (!iLocal_349 && (unk_0x48E480685981C7D4() - iLocal_351) > 5000)
		{
			if (iLocal_81 > 10)
			{
				iLocal_349 = 1;
				iLocal_81 = 0;
			}
		}
		if ((!iLocal_354 && !iLocal_349) && (unk_0x48E480685981C7D4() - iLocal_355) > 4000)
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
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
		if (((!iLocal_352 && !iLocal_349) && !iLocal_354) && (unk_0x48E480685981C7D4() - iLocal_353) > 15000)
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
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
					iLocal_351 = unk_0x48E480685981C7D4();
					iLocal_349 = 0;
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_351 = unk_0x48E480685981C7D4();
				iLocal_349 = 0;
				iLocal_350 = 1;
			}
		}
		if (iLocal_354)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_355 = unk_0x48E480685981C7D4();
				iLocal_354 = 0;
			}
		}
		if (iLocal_352)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_353 = unk_0x48E480685981C7D4();
				iLocal_352 = 0;
			}
		}
	}
	return ((iLocal_352 || iLocal_354) || iLocal_349);
}

void func_74()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		unk_0x6CB332CB31E9FA96(iLocal_85, 1);
		unk_0xF8E77F310A5B6EAB(255, uLocal_68, joaat("player"));
		if (!Global_3 && !bLocal_69)
		{
			unk_0xCE566DBDCACD245E(iLocal_85, 317, 1);
			unk_0x1D15D99A10A15334(iLocal_85, 0);
		}
	}
	func_78(-1, 0);
	func_75();
	unk_0xB767D0AC54C32B5B(62);
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
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
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_79(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
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
	Global_98917 = iParam0;
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_83(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_82() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_76();
				}
			}
		}
	}
}

int func_82()
{
	return Global_24946;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_91();
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_92()
{
	func_20();
	switch (Global_98931.f_1750.f_539.f_3549)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_97(Var0);
	return uVar16;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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
	if (Global_25181)
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
	if (unk_0xFBACB273AA628CC5(uLocal_359))
	{
		unk_0x0A8175F24237A3D4(&uLocal_359);
	}
	switch (iLocal_368)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
				{
					if (unk_0x895C275673BCEAB0(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_203[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 900f)
					{
						if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0xAB6AFD52AD641D70(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0xF210D34D7F7152ED(&(Local_203[iVar0 /*18*/]));
					}
				}
				if (unk_0xFBACB273AA628CC5(Local_203[iVar0 /*18*/].f_1))
				{
					unk_0x0A8175F24237A3D4(&(Local_203[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar0 /*18*/]))
				{
					if (unk_0x895C275673BCEAB0(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_130[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 900f)
					{
						unk_0x5D00E836B6BE8693(&(Local_130[iVar0 /*18*/]));
					}
				}
				if (unk_0xFBACB273AA628CC5(Local_130[iVar0 /*18*/].f_1))
				{
					unk_0x0A8175F24237A3D4(&(Local_130[iVar0 /*18*/].f_1));
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
				if ((unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/])) && !unk_0x930F8FBB8E9537CC(Local_203[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(unk_0x81873881071CD9FE(), iVar0);
					if (unk_0x895C275673BCEAB0(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_203[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 2500f)
					{
						if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0xAB6AFD52AD641D70(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0xF210D34D7F7152ED(&(Local_203[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_672)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(func_64(), 1)) < 100f)
				{
					iVar2 = unk_0x2E0A9E3291F398E3(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 7);
						func_18(&Local_394, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[6 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[6 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[7 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[7 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[8 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[8 /*10*/]))
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
						iVar2 = unk_0x2E0A9E3291F398E3(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
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
						iVar2 = unk_0x2E0A9E3291F398E3(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x86CCCD2FAE9D5E65(Local_394[iVar2 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[iVar2 /*10*/]))
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
			if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
			{
				unk_0x27CC98B7C879C320(Local_203[iVar0 /*18*/]);
				Local_203[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_671 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xFBACB273AA628CC5(Local_203[iVar0 /*18*/].f_1))
		{
			unk_0x0A8175F24237A3D4(&(Local_203[iVar0 /*18*/].f_1));
		}
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x5FEB513A4402FD59(iLocal_85))
				{
					if (unk_0xE5AB05962FA1FF3F(Local_203[iVar0 /*18*/], 0))
					{
						unk_0x98046F3D16B9CF76(Local_203[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_85, iVar0);
					}
				}
				else if (unk_0xFA1212DE7C455679(Local_203[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x9AF45ACD4E9068EE(Local_203[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x895C275673BCEAB0(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_203[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_203[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 400f)
			{
				unk_0xF210D34D7F7152ED(&(Local_203[iVar0 /*18*/]));
				if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/].f_2))
				{
					unk_0xAB6AFD52AD641D70(&(Local_203[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar0 /*18*/]))
		{
			if ((unk_0x895C275673BCEAB0(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_130[iVar0 /*18*/], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 2500f) && func_52(Local_130[iVar0 /*18*/], 0, 0, 0))
			{
				unk_0xE0913C01F5C0CC3D(&(Local_130[iVar0 /*18*/]));
			}
		}
		if (unk_0xFBACB273AA628CC5(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0x0A8175F24237A3D4(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_85))
	{
		if (unk_0x895C275673BCEAB0(iLocal_85) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_62) > 2500f)
		{
			unk_0x71A8BCA218722FA1(&iLocal_85);
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_368)
	{
		case 0:
			if (unk_0xFBACB273AA628CC5(uLocal_359))
			{
				unk_0x0A8175F24237A3D4(&uLocal_359);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_360))
			{
				unk_0x0A8175F24237A3D4(&uLocal_360);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				unk_0x27CC98B7C879C320(iLocal_85);
				unk_0x99E525B7A12DCDBE(iLocal_85, 3f);
			}
			func_101();
			if (unk_0x2A488C176D52CCA5(Local_59, Local_62) < 30f)
			{
				if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_203.f_0)
					{
						if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
						{
							if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
							{
								unk_0x27CC98B7C879C320(Local_203[iVar0 /*18*/]);
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
					if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar0 /*18*/]))
					{
						if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
						{
							unk_0x27CC98B7C879C320(Local_203[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_368++;
			}
			break;
		
		case 1:
			if (((unk_0x7404950238A154C2(iLocal_90, 0) && unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0)) && !bLocal_367) && unk_0xBEB00EB4ADDC2A33(iLocal_90, -1))
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xEAD984C2869B8B7C(&uVar2);
					unk_0xD74093F7638FAFA8(0, iLocal_90);
					unk_0x1ABA8A919187E144(0, iLocal_90, Local_52, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xB5583B79BBC50AC9(0, iLocal_90, Local_52, 288.7089f, 1, 50f, 0);
					unk_0x73FD8D43B37C0615(0, iLocal_90, unk_0xB6AE0DAE06D56288(iLocal_90, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x3535A48C04BEA949(0, iLocal_90, 0);
					unk_0xD91194CE3D1E1D77(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x56D9ED1541046AF6(uVar2);
					unk_0xC65002CAA1212AF9(iLocal_85, uVar2);
					unk_0xA3561415EB3DA3A3(&uVar2);
				}
				else
				{
					unk_0xEAD984C2869B8B7C(&uVar3);
					unk_0xD74093F7638FAFA8(0, iLocal_90);
					unk_0x2D7E8CD6F4101CAB(0, iLocal_90, 15f, 786468);
					unk_0x56D9ED1541046AF6(uVar3);
					unk_0xC65002CAA1212AF9(iLocal_85, uVar3);
					unk_0xA3561415EB3DA3A3(&uVar3);
				}
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0xE5AB05962FA1FF3F(iLocal_85, 0))
				{
					unk_0x98046F3D16B9CF76(iLocal_85, 0, 0);
				}
				iLocal_368++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 3000f, -1, 1, 0);
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xEAD984C2869B8B7C(&uVar4);
					unk_0xD91194CE3D1E1D77(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x56D9ED1541046AF6(uVar4);
					unk_0xC65002CAA1212AF9(iLocal_85, uVar4);
					unk_0xA3561415EB3DA3A3(&uVar4);
				}
				else
				{
					unk_0x9AF45ACD4E9068EE(iLocal_85, 1193033728, 0);
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
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_103()
{
	func_101();
	if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 900f)
	{
		unk_0x27CC98B7C879C320(iLocal_85);
		if (func_5(&Local_394, cLocal_371, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_184();
			func_172(10);
		}
		unk_0x506A601663C5417C(iLocal_85, -2065892691);
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
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_359))
				{
					uLocal_359 = func_174(iLocal_85, 0, 145);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_362))
				{
					unk_0x0A8175F24237A3D4(&uLocal_362);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_361))
				{
					unk_0x0A8175F24237A3D4(&uLocal_361);
				}
				unk_0x27CC98B7C879C320(iLocal_85);
				unk_0xEAD984C2869B8B7C(&uVar0);
				unk_0x3535A48C04BEA949(0, iLocal_90, 0);
				unk_0xD91194CE3D1E1D77(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x56D9ED1541046AF6(uVar0);
				unk_0xC65002CAA1212AF9(iLocal_85, uVar0);
				unk_0xA3561415EB3DA3A3(&uVar0);
				if (unk_0xCD67A1A6022640ED(iLocal_85))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_85);
				}
				func_101();
				iLocal_368++;
			}
			break;
		
		case 1:
			if (!func_72() && !unk_0x5FEB513A4402FD59(iLocal_85))
			{
				if (unk_0x515B65C19A5CA9B1(iLocal_85, Local_55, 3f, 3f, 3f, 0, 1, 0) && unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_55, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
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
			if (!func_72() && !unk_0x5FEB513A4402FD59(iLocal_85))
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
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_107(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
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
					switch (unk_0xA60A6B4935A3E9A7())
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
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
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
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_109(iParam0);
	if (Global_35443 == 15)
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

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_112() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_112() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_111(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_112() /*9662*/].f_7252.f_10, iParam0);
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_127(&Global_2550589))
	{
		if (func_125(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	
	if (unk_0x8A933F79CD45968A(iParam1))
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
	func_123(uParam0, (Global_2550588 - 0.5f));
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
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_131()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

void func_132(bool bParam0)
{
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (iLocal_620 > 1)
		{
			if (!unk_0x598CCC94D95857D9(iLocal_85, unk_0x81873881071CD9FE(), 60f))
			{
				iLocal_620 = 0;
				iLocal_621 = 0;
			}
		}
		switch (iLocal_620)
		{
			case 0:
				unk_0x27CC98B7C879C320(iLocal_85);
				unk_0xAF625598EDA64AD3(iLocal_85, unk_0x81873881071CD9FE(), -1, 16, 2);
				unk_0xEAD984C2869B8B7C(&uLocal_619);
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 16, 2);
				unk_0x56D9ED1541046AF6(uLocal_619);
				unk_0xC65002CAA1212AF9(iLocal_85, uLocal_619);
				unk_0xA3561415EB3DA3A3(&uLocal_619);
				iLocal_620++;
				break;
			
			case 1:
				if (unk_0xFA1212DE7C455679(iLocal_85, 242628503) != 1)
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
							if (!unk_0x0BAE7BE122182FA8(iLocal_85, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xC00796CF40447CA8(iLocal_85, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 1:
							if (!unk_0x0BAE7BE122182FA8(iLocal_85, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xC00796CF40447CA8(iLocal_85, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 2:
							if (!unk_0x0BAE7BE122182FA8(iLocal_85, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xC00796CF40447CA8(iLocal_85, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
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
	if (unk_0xFBACB273AA628CC5(uLocal_363))
	{
		unk_0x0A8175F24237A3D4(&uLocal_363);
	}
}

void func_134()
{
	var uVar0;
	
	if (unk_0x7404950238A154C2(iLocal_90, 0))
	{
		switch (iLocal_368)
		{
			case 0:
				if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x7404950238A154C2(iLocal_90, 0))
				{
					func_133();
					func_138(1, 1, 0, 0);
					if (unk_0xFBACB273AA628CC5(uLocal_361))
					{
						unk_0x0A8175F24237A3D4(&uLocal_361);
					}
					if (unk_0xFBACB273AA628CC5(uLocal_359))
					{
						unk_0x0A8175F24237A3D4(&uLocal_359);
					}
					if (unk_0xFBACB273AA628CC5(uLocal_360))
					{
						unk_0x0A8175F24237A3D4(&uLocal_360);
					}
					if (unk_0xCD67A1A6022640ED(iLocal_85))
					{
						unk_0x6EC15FE0ADD3E99C(iLocal_85);
					}
					func_136();
					if (!unk_0x5FEB513A4402FD59(iLocal_85))
					{
						unk_0x71D4A7422520E90F(iLocal_85, unk_0xB07F27EC3B05E4EA(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 1280);
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
					if (!unk_0x5FEB513A4402FD59(iLocal_85))
					{
						unk_0x71D4A7422520E90F(iLocal_85, unk_0xB07F27EC3B05E4EA(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
						unk_0x95BE9BA77CA91710(iLocal_85, 0, 0);
					}
					unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_368++;
				}
				break;
			
			case 1:
				if (!func_72() && !unk_0x5FEB513A4402FD59(iLocal_85))
				{
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0x3535A48C04BEA949(0, iLocal_90, 0);
					unk_0xD91194CE3D1E1D77(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
					unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(iLocal_85, uVar0);
					unk_0xA3561415EB3DA3A3(&uVar0);
					iLocal_368++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x7404950238A154C2(iLocal_90, 0))
				{
					if (!unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_367)
						{
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
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
				if ((!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x7404950238A154C2(iLocal_90, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x3535A48C04BEA949(unk_0x81873881071CD9FE(), iLocal_90, 0);
					unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_90, 10000, 0, 3);
					iLocal_368++;
				}
				break;
			
			case 4:
				if (unk_0x7404950238A154C2(iLocal_90, 0) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					func_138(0, 1, 0, 0);
					unk_0xC390A6485FB80923(iLocal_90, 2);
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
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_138(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_144(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_9())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_143(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_144(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_143(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_139(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_140()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_141(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_142(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
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

int func_143(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_145()
{
	if (Global_3 || bLocal_69)
	{
		unk_0xCDE668E40D482687(0.7f);
	}
	if (bLocal_367 && !unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (!func_165(iLocal_85))
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_359))
			{
				uLocal_359 = func_174(iLocal_85, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_362))
				{
					unk_0x0A8175F24237A3D4(&uLocal_362);
				}
			}
			else
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_362))
				{
					uLocal_362 = func_50(Local_55, 1);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_361))
				{
					unk_0x0A8175F24237A3D4(&uLocal_361);
				}
			}
			if (unk_0xFBACB273AA628CC5(uLocal_359))
			{
				unk_0x0A8175F24237A3D4(&uLocal_359);
			}
		}
		if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
		{
			if ((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && func_164(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				iLocal_90 = 0;
				iLocal_90 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				unk_0xD768713E73165208(iLocal_90, 1, 1);
				unk_0xC390A6485FB80923(iLocal_90, 1);
				unk_0x55E6058CA305144A(iLocal_90, 0, 0);
			}
		}
		if (unk_0xFBACB273AA628CC5(uLocal_362) && !unk_0xE5AB05962FA1FF3F(iLocal_85, 0))
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_55, 15f, 15f, 15f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_172(4);
			}
		}
		else if (iLocal_368 != 100)
		{
			if (func_65() && func_163(1, 1, 1))
			{
				if (unk_0xD1FFD959917D4ED8(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
			else if (!unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
			{
				if (unk_0xFA1212DE7C455679(iLocal_85, -1794415470) != 1)
				{
					unk_0x3C3A95141D01773E(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 2f, 8388608, 0);
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
				if (unk_0xD1FFD959917D4ED8(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
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
				if (unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x27CC98B7C879C320(iLocal_85);
				}
				if (func_5(&Local_394, cLocal_371, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x5B6D37392F5991C3(0.5f);
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
			if (func_147(iLocal_90, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_173("");
				func_172(3);
			}
			break;
	}
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_146() && !func_158()) && iLocal_46 != 8)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				if (unk_0x515B65C19A5CA9B1(iLocal_85, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x6914EFE7823C0640(iLocal_85, unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63())))
					{
						unk_0xABED360AB1F46D3D(iLocal_85, unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63()));
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
	return Global_25180;
}

int func_147(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
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
					iLocal_80 = unk_0x48E480685981C7D4();
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_80) > 500)
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
		iVar6 = unk_0x21C9C1BDAA5B68B1();
		iVar6 = (iVar6 + Global_16703);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x7281387C8D4EC316(&(Global_14561[iVar7 /*6*/])))
			{
				return Global_14561[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x7281387C8D4EC316(&(Global_14561[iVar8 /*6*/])))
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
		if (unk_0x7404950238A154C2(iLocal_90, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0xE5AB05962FA1FF3F(iLocal_85, 0))
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
		if (!unk_0xFBACB273AA628CC5(uLocal_363))
		{
			func_156();
			uLocal_363 = func_155(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x8F827BB0F6ED7AA8(uLocal_363, 269);
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
			Global_25180 = 1;
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
		if (!Global_25182)
		{
			func_157("CULT_BLIP_HELP", -1);
			Global_25182 = 1;
		}
	}
}

void func_157(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_158()
{
	if (Global_98931.f_29444.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_159(bool bParam0)
{
	if (unk_0x7404950238A154C2(iLocal_90, 0) && !unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
			}
			if (unk_0xFBACB273AA628CC5(uLocal_359))
			{
				unk_0x0A8175F24237A3D4(&uLocal_359);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_360))
			{
				unk_0x0A8175F24237A3D4(&uLocal_360);
			}
		}
		else
		{
			if (unk_0xFBACB273AA628CC5(uLocal_361))
			{
				unk_0x0A8175F24237A3D4(&uLocal_361);
			}
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_360))
				{
					uLocal_360 = func_160(iLocal_90, 0, 0);
				}
			}
			if (!unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_359))
				{
					uLocal_359 = func_174(iLocal_85, 0, 145);
				}
			}
			else if (unk_0xFBACB273AA628CC5(uLocal_359))
			{
				unk_0x0A8175F24237A3D4(&uLocal_359);
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
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_51(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_51(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_51(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x59D35AC211D17FAB(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0xBEB00EB4ADDC2A33(iParam0, iVar2))
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
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		if (unk_0xBEB00EB4ADDC2A33(iParam0, -1))
		{
			return 1;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 0))
		{
			return 1;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 1))
		{
			return 1;
		}
		if (unk_0xBEB00EB4ADDC2A33(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	if (unk_0x6914EFE7823C0640(iParam0, unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63())))
	{
		if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x6EC15FE0ADD3E99C(iParam0);
		}
		return 1;
	}
	else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xABED360AB1F46D3D(iParam0, unk_0xC80D3C64CC2CE6A3(unk_0x1329891157A54C63()));
	}
	return 0;
}

void func_166()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x7404950238A154C2(iLocal_90, 0))
	{
		if (!unk_0x04C377C10639B842(iLocal_85, iLocal_90, 1))
		{
			if (unk_0xFA1212DE7C455679(iLocal_85, -1794415470) != 1)
			{
				unk_0x3C3A95141D01773E(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 2f, 8388608, 0);
			}
		}
		if ((unk_0x86CCCD2FAE9D5E65(func_64()) && unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_85, 1), unk_0xB6AE0DAE06D56288(func_64(), 1)) < 100f) && (unk_0xA04824262F150982(iLocal_90) < 5f || !unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iLocal_90))))
		{
			if (bLocal_367)
			{
				if (!unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x58A69336FE7307D8(iLocal_85, iLocal_90))
				{
					unk_0x31C1393E4ACFD794(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x58A69336FE7307D8(iLocal_85, iLocal_90))
			{
				unk_0x31C1393E4ACFD794(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x0BAE7BE122182FA8(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x58A69336FE7307D8(iLocal_85, iLocal_90))
		{
			unk_0x27CC98B7C879C320(iLocal_85);
		}
		switch (iLocal_368)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x86CCCD2FAE9D5E65(func_64()) && !unk_0x5FEB513A4402FD59(func_64()))
					{
						func_18(&Local_394, 4);
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_48 = 2;
					func_101();
					if (func_5(&Local_394, cLocal_371, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x5B6D37392F5991C3(0.2f);
						unk_0x1D15D99A10A15334(iLocal_85, 1);
						unk_0xF8E77F310A5B6EAB(1, uLocal_68, joaat("player"));
						iLocal_357 = unk_0xF364195A57BB7AE3(joaat("prop_ld_test_01"), Local_86, 1, 1, 0);
						unk_0x5CEA5F12775261F2(iLocal_357, 0, 0);
						unk_0xABA9860C0161F3CD(iLocal_357, 0);
						unk_0xA8F22633ACC22189(iLocal_357, 1);
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				func_168();
				if (!unk_0xD1FFD959917D4ED8(iLocal_85, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_368++;
					iLocal_369 = unk_0x48E480685981C7D4();
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_667)
				{
					if (((((iLocal_669 != 1 && iLocal_669 != 3) && iLocal_669 != 6) && iLocal_669 != 9) && iLocal_669 != 11) && iLocal_669 != 13)
					{
						bLocal_668 = false;
						if (unk_0x86CCCD2FAE9D5E65(func_64()) && unk_0x8D28631AAAEFC957(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
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
					if (unk_0x86CCCD2FAE9D5E65(func_64()))
					{
						if (!unk_0x8D28631AAAEFC957(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
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
									iLocal_670 = unk_0x48E480685981C7D4();
									iLocal_669++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
									iLocal_669++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 6000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
								}
							}
							break;
						
						case 5:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
								}
							}
							break;
						
						case 6:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
								}
							}
							break;
						
						case 7:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
									iLocal_669++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x48E480685981C7D4();
									iLocal_669++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x48E480685981C7D4() - iLocal_670) > 8000)
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
				if (!unk_0x86CCCD2FAE9D5E65(func_64()))
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
					if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_48 = 4;
						iLocal_84 = unk_0x48E480685981C7D4();
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
	if ((unk_0x48E480685981C7D4() - iLocal_665) > 5000)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_90) && unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 1))
			{
				if (iVar0 != -1 && (unk_0x48E480685981C7D4() - Local_203[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_665 = unk_0x48E480685981C7D4();
						return 1;
					}
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_665 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

void func_168()
{
	int iVar0;
	
	if ((unk_0x48E480685981C7D4() - iLocal_563) > iLocal_564)
	{
		if ((!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x86CCCD2FAE9D5E65(func_64())) && !unk_0x5FEB513A4402FD59(func_64()))
		{
			if (unk_0x0D6E79537424BACE(Local_62, unk_0xB6AE0DAE06D56288(func_64(), 1), 1) < 8f)
			{
				iVar0 = unk_0x2E0A9E3291F398E3(0, 5);
				func_18(&Local_394, 4);
				func_18(&Local_394, 5);
				func_18(&Local_394, 6);
				func_18(&Local_394, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x86CCCD2FAE9D5E65(Local_394[4 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
								iLocal_564 = unk_0x2E0A9E3291F398E3(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x86CCCD2FAE9D5E65(Local_394[4 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
								iLocal_564 = unk_0x2E0A9E3291F398E3(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_394, 5, func_64(), "PAP2", 0, 1);
						if (unk_0x86CCCD2FAE9D5E65(Local_394[5 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[5 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
								iLocal_564 = unk_0x2E0A9E3291F398E3(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_394, 6, func_64(), "PAP3", 0, 1);
						if (unk_0x86CCCD2FAE9D5E65(Local_394[6 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[6 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
								iLocal_564 = unk_0x2E0A9E3291F398E3(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_394, 7, func_64(), "PAP4", 0, 1);
						if (unk_0x86CCCD2FAE9D5E65(Local_394[7 /*10*/]) && !unk_0x5FEB513A4402FD59(Local_394[7 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x48E480685981C7D4();
								iLocal_564 = unk_0x2E0A9E3291F398E3(2000, 3000);
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
	
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_359))
		{
			unk_0x3C8D013C840ADA0A(uLocal_359, iLocal_663);
		}
		switch (iLocal_368)
		{
			case 0:
				unk_0x295DC04FC13E025B("random@paparazzi@peek");
				unk_0x295DC04FC13E025B("random@paparazzi@trans");
				unk_0x295DC04FC13E025B("random@paparazzi@wait");
				if ((unk_0x8E8B546E1A81D27F("random@paparazzi@peek") && unk_0x8E8B546E1A81D27F("random@paparazzi@trans")) && unk_0x8E8B546E1A81D27F("random@paparazzi@wait"))
				{
					uLocal_624 = unk_0x59C061A719024602(Local_652, Local_655, 2);
					unk_0x58BEA8B2364F8C48(iLocal_85, uLocal_624, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0xAF625598EDA64AD3(iLocal_85, unk_0x81873881071CD9FE(), -1, 4, 4);
					sLocal_625[0] = "peek_a";
					sLocal_625[1] = "peek_b";
					sLocal_625[2] = "peek_c";
					unk_0x5B6D37392F5991C3(0.2f);
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
				if (unk_0x236D8AD7EE179F46(iLocal_659, 0))
				{
					if (!unk_0x236D8AD7EE179F46(iLocal_659, 1))
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_659, 1);
					}
					else
					{
						iLocal_659 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_638, Local_641, fLocal_644, 0, 1, 0);
				bVar1 = unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_631, Local_634, fLocal_637, 0, 1, 0);
				if (unk_0xD994929E13CC1ED5(sLocal_630, "right_"))
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
				if ((unk_0xDD7720E17AF5FE17(uLocal_624) && unk_0xF855C83E3A17514B(uLocal_624) > 0.9f) || iVar2)
				{
					if (iLocal_659 == 0)
					{
						unk_0x27CC98B7C879C320(iLocal_85);
						iLocal_629++;
						if (iLocal_629 >= 3)
						{
							iLocal_629 = 0;
						}
						StringCopy(&cVar3, sLocal_630, 24);
						StringConCat(&cVar3, sLocal_625[iLocal_629], 24);
						uLocal_624 = unk_0x59C061A719024602(Local_652, Local_655, 2);
						unk_0x58BEA8B2364F8C48(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xF3148AAF69AF9CBC(&iLocal_659, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_660 <= 20f)
					{
						fLocal_660 = (fLocal_660 + unk_0x8D51D24D214E2FF2());
					}
					if ((unk_0x48E480685981C7D4() - iLocal_623) > 5000 && iLocal_659 == 0)
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
								func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_394, cLocal_371, sVar9, 4, 0, 0, 0))
							{
								iLocal_661 = 1;
								if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_85, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x27CC98B7C879C320(iLocal_85);
									StringCopy(&cVar10, sLocal_630, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_624 = unk_0x59C061A719024602(Local_652, Local_655, 2);
									unk_0x58BEA8B2364F8C48(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xF3148AAF69AF9CBC(&iLocal_659, 0);
								}
								iLocal_623 = unk_0x48E480685981C7D4();
							}
						}
					}
				}
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_645, Local_648, fLocal_651, 0, 1, 0) && iLocal_659 == 0)
				{
					if (unk_0xFBACB273AA628CC5(uLocal_358))
					{
						unk_0x0A8175F24237A3D4(&uLocal_358);
						if (!unk_0xFBACB273AA628CC5(uLocal_359))
						{
							uLocal_359 = func_174(iLocal_85, 0, 145);
						}
					}
					unk_0x27CC98B7C879C320(iLocal_85);
					uLocal_624 = unk_0x59C061A719024602(Local_652, Local_655, 2);
					if (bVar1)
					{
						unk_0x58BEA8B2364F8C48(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x58BEA8B2364F8C48(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xF3148AAF69AF9CBC(&iLocal_659, 0);
					iLocal_368++;
				}
				break;
			
			case 2:
				if (unk_0xDD7720E17AF5FE17(uLocal_624) && unk_0xF855C83E3A17514B(uLocal_624) > 0.9f)
				{
					if (unk_0xFA1212DE7C455679(iLocal_85, 242628503) != 1)
					{
						unk_0x27CC98B7C879C320(iLocal_85);
						unk_0x31C1393E4ACFD794(iLocal_85, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_620 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_368++;
				}
				break;
			
			case 3:
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (func_171())
					{
						unk_0xE0913C01F5C0CC3D(&iLocal_90);
						iLocal_90 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						unk_0xD768713E73165208(iLocal_90, 1, 1);
						unk_0x55E6058CA305144A(iLocal_90, 0, 0);
						unk_0xC390A6485FB80923(iLocal_90, 1);
						bLocal_367 = true;
					}
				}
				if (!bLocal_367)
				{
					unk_0xC390A6485FB80923(iLocal_90, 1);
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
				if (unk_0x7404950238A154C2(iLocal_90, 0))
				{
					if (unk_0x8D28631AAAEFC957(iLocal_90, iLocal_85, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_367)
					{
						if (unk_0xFA1212DE7C455679(iLocal_85, 242628503) != 1 && !iLocal_658)
						{
							unk_0xEAD984C2869B8B7C(&uVar16);
							unk_0xD91194CE3D1E1D77(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
							unk_0x56D9ED1541046AF6(uVar16);
							unk_0xC65002CAA1212AF9(iLocal_85, uVar16);
							unk_0x95BE9BA77CA91710(iLocal_85, 0, 0);
							unk_0xA3561415EB3DA3A3(&uVar16);
							iLocal_658 = 1;
						}
						else
						{
							unk_0x99E525B7A12DCDBE(iLocal_85, 1f);
							func_170(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_170(Local_86, 1);
					}
					if (!bLocal_367)
					{
						if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
						{
							if (unk_0xFBACB273AA628CC5(uLocal_360))
							{
								unk_0x0A8175F24237A3D4(&uLocal_360);
							}
							if (!unk_0xFBACB273AA628CC5(uLocal_359))
							{
								uLocal_359 = func_174(iLocal_85, 0, 145);
							}
						}
					}
					if ((unk_0x8D28631AAAEFC957(iLocal_90, iLocal_85, Global_19, 0, 1, 0) && func_164(iLocal_90)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_367))
					{
						if (!iLocal_622)
						{
							func_101();
							if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
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
							unk_0x27CC98B7C879C320(iLocal_85);
							unk_0x3C3A95141D01773E(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 1f, 8388608, 0);
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
				if (unk_0x7404950238A154C2(iLocal_90, 0))
				{
					if (func_147(iLocal_90, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_368 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0x7404950238A154C2(iLocal_90, 0))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
					{
						if (unk_0xFBACB273AA628CC5(uLocal_359))
						{
							unk_0x0A8175F24237A3D4(&uLocal_359);
						}
						unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
						func_172(1);
					}
					else
					{
						if (!Global_3 && !bLocal_69)
						{
							if ((unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0) && !unk_0x04C377C10639B842(iLocal_85, iLocal_90, 1)) && !unk_0xD1FFD959917D4ED8(iLocal_90, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_367)
								{
									unk_0x7F5F0D37173E518C(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_GUP";
									func_172(6);
								}
								else
								{
									unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
									unk_0x7F5F0D37173E518C(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_CP";
									func_172(6);
								}
							}
						}
						if (!unk_0x04C377C10639B842(iLocal_85, iLocal_90, 0))
						{
							if (unk_0xFA1212DE7C455679(iLocal_85, -1794415470) != 1)
							{
								unk_0x27CC98B7C879C320(iLocal_85);
								unk_0x3C3A95141D01773E(iLocal_85, iLocal_90, -1, func_162(iLocal_90), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_62, unk_0xB07F27EC3B05E4EA(iLocal_90, 1f, 0f, 0f)) < 1f)
							{
								unk_0x99E525B7A12DCDBE(iLocal_85, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0x7404950238A154C2(iLocal_90, 0))
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
				if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 49f && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 3f)
					{
						fLocal_664 = (fLocal_664 + unk_0x8D51D24D214E2FF2());
					}
					else
					{
						fLocal_664 = (fLocal_664 - (unk_0x8D51D24D214E2FF2() * 2f));
					}
					if (fLocal_664 > 10f)
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_664 = 0f;
						}
					}
				}
				if (unk_0x7404950238A154C2(iLocal_90, 0))
				{
					if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0) && func_171())
					{
						bLocal_367 = true;
						iLocal_73 = 1;
						iLocal_90 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						unk_0xD768713E73165208(iLocal_90, 1, 1);
					}
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_90, 0))
					{
						if (unk_0xFBACB273AA628CC5(uLocal_360))
						{
							unk_0x0A8175F24237A3D4(&uLocal_360);
						}
						if (!unk_0xFBACB273AA628CC5(uLocal_359))
						{
							uLocal_359 = func_174(iLocal_85, 0, 145);
						}
					}
					else
					{
						if (unk_0xFBACB273AA628CC5(uLocal_359))
						{
							unk_0x0A8175F24237A3D4(&uLocal_359);
						}
						if (!unk_0xFBACB273AA628CC5(uLocal_360))
						{
							uLocal_360 = func_160(iLocal_90, 0, 0);
						}
					}
					if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), iLocal_90))
					{
						if (unk_0xFBACB273AA628CC5(uLocal_360))
						{
							unk_0x0A8175F24237A3D4(&uLocal_360);
						}
						if (!unk_0xFBACB273AA628CC5(uLocal_359))
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
			if (unk_0x7404950238A154C2(iLocal_90, 0))
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
			if (!unk_0x7404950238A154C2(iLocal_90, 0))
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
						if (unk_0x4DC6EF945236C0F7(iLocal_90) < iLocal_82)
						{
							if (unk_0xBBEF8270CE27C0EE(iLocal_90, unk_0x81873881071CD9FE(), 1))
							{
								iLocal_83 = (iLocal_83 + (iLocal_82 - unk_0x4DC6EF945236C0F7(iLocal_90)));
							}
							unk_0xD24EA1F9FB501BB5(iLocal_90);
						}
						if (iLocal_83 > 250)
						{
							if (unk_0x246F0F22FE99F17E(iLocal_85, iLocal_90) && unk_0x2A488C176D52CCA5(Local_62, Local_65) < 25f)
							{
								func_172(5);
							}
						}
					}
				}
				iLocal_82 = unk_0x4DC6EF945236C0F7(iLocal_90);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_85))
		{
			if (unk_0x5EF53977B76418E5(iLocal_85))
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
		if (unk_0xFA1212DE7C455679(iLocal_85, 713668775) != 1)
		{
			unk_0xD91194CE3D1E1D77(iLocal_85, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xFA1212DE7C455679(iLocal_85, 713668775) != 1)
	{
		func_132(bParam3);
		unk_0xAF625598EDA64AD3(iLocal_85, unk_0x81873881071CD9FE(), -1, 16, 2);
	}
}

bool func_171()
{
	return (((((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0)) && (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0))) || unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0))))) && unk_0x59D35AC211D17FAB(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) > 0) && func_164(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0))) && !Global_97978);
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
		if (!unk_0xD994929E13CC1ED5(iLocal_559[iVar0], sParam0))
		{
			if (unk_0x12F24A1A22BF90A7(iLocal_559[iVar0]))
			{
				unk_0x0C22E352114F699C(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (unk_0xD994929E13CC1ED5(iLocal_559[iVar0], sParam0))
		{
			if (!unk_0x12F24A1A22BF90A7(iLocal_559[iVar0]))
			{
				unk_0xF2A6D4C99549CA85(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_174(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_161(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_175(int iParam0)
{
	if (func_178())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_87(Global_98920))
		{
			func_176(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_87(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
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
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_157(func_177(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_157(func_177(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_157(func_177(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
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
	switch (func_179(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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
		if (Global_88620.f_44 == 1)
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
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
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
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
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
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_181(int iParam0)
{
	return func_182(iParam0, Global_35443);
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
	if (Global_35443 == 15)
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
	
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		unk_0x7F5F0D37173E518C(iLocal_85, 2, 0);
		unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (!unk_0x5FEB513A4402FD59(Local_203[iVar0 /*18*/]))
		{
			unk_0x754376E2234CBB4A(Local_203[iVar0 /*18*/], unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
			unk_0x506A601663C5417C(Local_203[iVar0 /*18*/], -2065892691);
			unk_0x1D15D99A10A15334(Local_203[iVar0 /*18*/], 0);
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
		if (unk_0x86CCCD2FAE9D5E65(Local_203[iVar1 /*18*/]) && !unk_0x5FEB513A4402FD59(Local_203[iVar1 /*18*/]))
		{
			if (unk_0x1DB417C2D78C2390(Local_203[iVar1 /*18*/]))
			{
				if (((unk_0x544121698BDAB87E(Local_203[iVar1 /*18*/].f_6, 5f, 1) || unk_0xF46EAA2C25D08B6F(-1, Local_203[iVar1 /*18*/].f_6, 10f)) || unk_0x5EF53977B76418E5(Local_203[iVar1 /*18*/])) || (iLocal_385[iVar1] > 10 && iLocal_46 == 0))
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
		if (unk_0x86CCCD2FAE9D5E65(Local_130[iVar1 /*18*/]))
		{
			if (unk_0x7404950238A154C2(Local_130[iVar1 /*18*/], 0) && unk_0x1DB417C2D78C2390(Local_130[iVar1 /*18*/]))
			{
				if (unk_0x2D2289DC6C760F31(Local_130[iVar1 /*18*/]))
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_197())
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_92();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_188(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
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
	return Global_98649 > 0;
}

int func_195()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_197()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
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
	func_200(44, 1);
	uLocal_358 = func_199(Local_86);
	iLocal_85 = unk_0x206897C6DBC12488(26, joaat("a_f_y_bevhills_03"), Local_86, fLocal_89, 1, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_85, 1, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_85, 17, 1);
	unk_0x7F5F0D37173E518C(iLocal_85, 128, 1);
	unk_0x6CB332CB31E9FA96(iLocal_85, 1);
	unk_0xE41981FA07A67E46(iLocal_85, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 0, 0, 1, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 2, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 3, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 4, 0, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 7, 1, 0, 0);
	unk_0x03F73D35E5AC583A(iLocal_85, 8, 0, 0, 0);
	unk_0x47BB782E50EFEDF2(iLocal_85, 1);
	unk_0x1D15D99A10A15334(iLocal_85, 1);
	unk_0x33B1E568CEF14B0D(iLocal_85, 0);
	unk_0xEF1A2C5B3EE83E3E(iLocal_85, "LACEY");
	if (Global_3 || bLocal_69)
	{
		unk_0x210A4A0B257F8433(iLocal_85, 1);
	}
	if (unk_0x4865E80F793024CE("CELEBRITY", &uLocal_68))
	{
		unk_0x506A601663C5417C(iLocal_85, uLocal_68);
	}
	iLocal_90 = unk_0xE00F8DEA9778FC87(joaat("surano"), Local_91, fLocal_94, 1, 1);
	unk_0xB901CB880393ADF7(iLocal_90, Local_91, 0, 0, 1);
	unk_0x5D6F89F6DD9B0781(iLocal_90, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x55E6058CA305144A(iLocal_90, 0, 0);
	unk_0xED1544041E75AE1E(iLocal_90, 10);
	unk_0x5CC9D6711FE01F0D(iLocal_90);
	unk_0xC390A6485FB80923(iLocal_90, 3);
	unk_0x558304695AB738EE(iLocal_90, 1);
	unk_0x39AD461928A70C5A(iLocal_90, 1);
	unk_0xD578599BB87169AA(iLocal_90, unk_0x41899D9898B4EEE4(1));
	if (func_19() == 1)
	{
		func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_394, 1, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
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
	unk_0xB5A91586385F755B(joaat("vader"), 1);
	unk_0xB5A91586385F755B(joaat("surano"), 1);
	unk_0xB5A91586385F755B(joaat("cavalcade2"), 1);
}

var func_199(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0x9DA87A96BDB876EC(uVar0, 0);
	unk_0x885CCA7D7CA0FAE3(uVar0, 0);
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
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_82() == 0)
		{
			uVar0 = func_204(func_205(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_202(func_205(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
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
	uVar0 = Global_2459767[iParam0 /*5*/][func_203(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

void func_206(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_82() == 0)
		{
			uVar0 = func_204(func_205(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_202(func_205(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_207(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_82() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_204(func_205(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
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
	unk_0x295DC04FC13E025B("random@escape_paparazzi@standing@");
	unk_0x295DC04FC13E025B("random@paparazzi@pap_anims");
	unk_0x295DC04FC13E025B("random@paparazzi@peek");
	unk_0x295DC04FC13E025B("random@paparazzi@trans");
	unk_0x295DC04FC13E025B("random@paparazzi@wait");
	unk_0x295DC04FC13E025B("veh@std@ps@idle_panic");
	unk_0x295DC04FC13E025B("veh@low@front_ps@idle_panic");
	unk_0x295DC04FC13E025B(sLocal_373);
	unk_0x86B83C54AF71BD12("ESCPAP", 0);
	if (((((((((unk_0x8E8B546E1A81D27F("random@escape_paparazzi@standing@") && unk_0x8E8B546E1A81D27F("random@paparazzi@pap_anims")) && unk_0x8E8B546E1A81D27F("random@paparazzi@peek")) && unk_0x8E8B546E1A81D27F("random@paparazzi@trans")) && unk_0x8E8B546E1A81D27F("random@paparazzi@wait")) && unk_0x8E8B546E1A81D27F("veh@std@ps@idle_panic")) && unk_0x8E8B546E1A81D27F("veh@low@front_ps@idle_panic")) && unk_0x8E8B546E1A81D27F(sLocal_373)) && unk_0xCD8DA898314F3016(0)) && unk_0x9D2B95F4020E5347("Distant_Camera_Flash", false))
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0x236D8AD7EE179F46(iParam0, 30))
	{
		if (unk_0x236D8AD7EE179F46(iParam0, 29))
		{
			switch (func_212(iParam0))
			{
				case 0:
					return unk_0x33ACB874CECA2D4B(uParam2);
					break;
				
				case 1:
					return unk_0x8E8B546E1A81D27F(sParam1);
					break;
				
				case 2:
					return unk_0xDBB20E5B224C075C(sParam1);
					break;
				
				case 3:
					return unk_0x682001A921A80123(sParam1);
					break;
				
				case 4:
					return unk_0x498998F33897432E(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x0F7866B4F5BE7CD4(sParam1);
					break;
				
				case 6:
					return unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(iParam0, 27));
					break;
				
				case 7:
					return unk_0x55D66FAE859776D2(iParam2);
					break;
				
				case 8:
					return unk_0xCD8DA898314F3016(iParam2);
					break;
				
				case 9:
					return unk_0x7A74065A1435C8AB();
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
		if (unk_0x236D8AD7EE179F46(iParam0, iVar0))
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*2*/], iParam1);
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*2*/], 30);
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
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_197())
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
	if ((Global_98920 == func_96() && unk_0x9284F36E422CA571()) && Global_98921)
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
		if ((unk_0x5CE96B2C9C8B727F() >= (uParam0->f_32 + uParam0->f_33) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 2)) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 29))
					{
						func_220(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x5CE96B2C9C8B727F();
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
	if (unk_0x236D8AD7EE179F46(*uParam0, 30))
	{
		switch (func_212(*uParam0))
		{
			case 0:
				unk_0x32A12757CBF48A33(uParam2);
				break;
			
			case 1:
				unk_0x295DC04FC13E025B(sParam1);
				break;
			
			case 2:
				unk_0xF147E5A343BAF150(sParam1);
				break;
			
			case 3:
				unk_0xB711FC19ADBD3C70(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 28));
				break;
			
			case 4:
				unk_0x995DCDA796A47049(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2D148CBB17A2B0C7(sParam1);
				break;
			
			case 6:
				unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0A3E2A43DEA2DB9D(iParam2);
				break;
			
			case 8:
				unk_0x86B83C54AF71BD12(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x18C8823792832C78();
				break;
			
			default:
				break;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 29);
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
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_223();
}

void func_223()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_224(int iParam0)
{
	Global_98920 = iParam0;
}

int func_225(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_197())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
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
		if (Global_98920 != -1)
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
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
		if (!func_261(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
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
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
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
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_250(0, 0))
		{
			return 0;
		}
		if (Global_25092)
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
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_249(iVar8))
				{
					if (func_227(iVar4))
					{
						if (!func_226(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_239(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
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
	
	func_248(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_247(&uVar0, unk_0x25B31B877207A3A9());
	func_246(&uVar0, unk_0x0C937048CF6952B5());
	func_245(&uVar0, unk_0x8B6B3DD84CE74978());
	func_244(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_243(&uVar0, unk_0x57E483B654EDD986());
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
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_259()) || Global_97978) || Global_24948) || func_258()) || func_14(8, -1)) || func_257()) || func_256()) || func_255()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_259()) || Global_24948) || func_258()) || func_14(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_259()) || Global_97978) || Global_24948) || func_258()) || func_14(8, -1)) || func_255()) || func_257()) || func_256()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_259()) || Global_97978) || Global_24948) || func_258()) || func_14(8, -1)) || func_257()) || func_256()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_259() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_14(8, -1)) || func_254()) || func_253()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_257()) || func_256()) || func_253()) || func_252())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_259()) || Global_24948) || func_258()) || func_14(8, -1)) || func_256()) || func_255()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_259()) || func_256()) || Global_97978) || Global_24948) || func_258()) || Global_36493) || func_14(8, -1)) || func_255()) || func_253()) || func_254()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_259()) || Global_97978) || Global_24948) || func_258()) || func_14(8, -1)) || func_255()) || func_253()) || func_257()) || func_256()) || func_254())
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
	return Global_90848.f_1;
}

int func_253()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_254()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_256()
{
	return Global_90861.f_297 > 0;
}

bool func_257()
{
	return Global_90861.f_296 > 0;
}

var func_258()
{
	return Global_1315892;
}

int func_259()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
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
	return Global_98931.f_6302.f_919[iParam0];
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
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_265()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
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
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
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
	unk_0xFEA6E2B6E5CAFC2E(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_281(&uLocal_96, 0);
	unk_0xD8323B49BAE93D80("random@escape_paparazzi@standing@");
	unk_0xD8323B49BAE93D80("random@paparazzi@pap_anims");
	unk_0xD8323B49BAE93D80("random@paparazzi@peek");
	unk_0xD8323B49BAE93D80("random@paparazzi@trans");
	unk_0xD8323B49BAE93D80("random@paparazzi@wait");
	unk_0xD8323B49BAE93D80("veh@std@ps@idle_panic");
	unk_0xD8323B49BAE93D80("veh@low@front_ps@idle_panic");
	unk_0xD8323B49BAE93D80(sLocal_373);
	unk_0xABF33AFE6B2877A8();
	if (func_218())
	{
		unk_0x5B6D37392F5991C3(1f);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_85) && !unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (unk_0xCD67A1A6022640ED(iLocal_85))
		{
			unk_0x6EC15FE0ADD3E99C(iLocal_85);
		}
		if (unk_0xE5AB05962FA1FF3F(iLocal_85, 1))
		{
			if (!unk_0x5EF53977B76418E5(iLocal_85))
			{
				unk_0x98046F3D16B9CF76(iLocal_85, 0, 0);
			}
		}
	}
	func_270(-1);
	unk_0x169327598E00BC8A();
	unk_0xD327B3F9D26CFBBC(0);
	unk_0xB5A91586385F755B(joaat("vader"), 0);
	unk_0xB5A91586385F755B(joaat("surano"), 0);
	unk_0xB5A91586385F755B(joaat("cavalcade2"), 0);
	unk_0xE91F714E010C7127(uLocal_364, 0);
	unk_0xE91F714E010C7127(uLocal_365, 0);
	unk_0xE91F714E010C7127(uLocal_366, 0);
	unk_0x3DD1ED742E99F292(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_25184)
	{
		unk_0x80650551CC58C784("AC_STOP");
	}
	func_269();
	unk_0xC23A229F78DAD92A();
}

void func_269()
{
	Global_25180 = 0;
	Global_25181 = 0;
	Global_25183 = 0;
	Global_25184 = 0;
	Global_25185 = 0;
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
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_273(30000);
		StringCopy(&cVar0, func_272(Global_98920, 1), 64);
		if (func_95(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_271(&Global_25005);
	Global_98921 = 0;
	func_224(-1);
}

void func_271(var uParam0)
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
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
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
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
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
	func_244(uParam0, iParam5);
	func_245(uParam0, iParam4);
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
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		switch (func_212(iParam0))
		{
			case 0:
				unk_0x887F4488DA99FD21(uParam2);
				break;
			
			case 1:
				unk_0xD8323B49BAE93D80(sParam1);
				break;
			
			case 2:
				unk_0x89A95366100690C0(sParam1);
				break;
			
			case 3:
				unk_0x9B331DCFDFC55491(sParam1);
				break;
			
			case 4:
				unk_0x4855165A2773595C(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x010ACF5A865CA942(sParam1);
				break;
			
			case 6:
				unk_0xABF33AFE6B2877A8();
				break;
			
			case 7:
				unk_0xEDEECB22A033000E(uParam2);
				break;
			
			case 8:
				unk_0xBEE99C97A1B87F95(uParam2, unk_0x236D8AD7EE179F46(iParam0, 26));
				break;
			
			case 9:
				unk_0x954FB3FC1E04A7A9();
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
	while (iVar0 < 45)
	{
		func_200(iVar0, bParam0);
		iVar0++;
	}
}

