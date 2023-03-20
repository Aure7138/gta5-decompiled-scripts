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
	char* sLocal_18[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_32[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	char* sLocal_47[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char cLocal_144[16] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
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
	iLocal_58 = 1;
	bLocal_61 = true;
	bLocal_62 = true;
	fLocal_72 = 0f;
	fLocal_73 = 172f;
	fLocal_76 = 0.7f;
	iLocal_136 = 1200;
	iLocal_137 = 1200;
	iLocal_138 = 166;
	fLocal_156 = 0.5f;
	fLocal_157 = 0.85f;
	fLocal_158 = 0.5f;
	fLocal_159 = -0.25f;
	fLocal_160 = 0.25f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.075f;
	unk_0x15378F974E08496E();
	if (unk_0x45EDE682E0EE8FDF() == 0)
	{
		fLocal_76 = 1f;
	}
	else
	{
		fLocal_76 = 0.7f;
	}
	if (!func_135())
	{
		Global_2549101 = 99;
		Global_2549102 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2549101 = 0;
		Global_2549102 = 0;
	}
	sLocal_18[0] = "No_Filter";
	sLocal_18[1] = "phone_cam1";
	sLocal_18[2] = "phone_cam2";
	sLocal_18[3] = "phone_cam3";
	sLocal_18[4] = "phone_cam4";
	sLocal_18[5] = "phone_cam5";
	sLocal_18[6] = "phone_cam6";
	sLocal_18[7] = "phone_cam7";
	sLocal_18[8] = "phone_cam8";
	sLocal_18[9] = "phone_cam9";
	sLocal_18[10] = "phone_cam10";
	sLocal_18[11] = "phone_cam11";
	sLocal_18[12] = "phone_cam12";
	sLocal_32[0] = "No_Border";
	sLocal_32[1] = "frame1";
	sLocal_32[2] = "frame2";
	sLocal_32[3] = "frame3";
	sLocal_32[4] = "frame4";
	sLocal_32[5] = "frame5";
	sLocal_32[6] = "frame6";
	sLocal_32[7] = "frame7";
	sLocal_32[8] = "frame8";
	sLocal_32[9] = "frame9";
	sLocal_32[10] = "frame10";
	sLocal_32[11] = "frame11";
	sLocal_32[12] = "frame12";
	sLocal_47[0] = "No_Expression";
	sLocal_47[1] = "mood_Aiming_1";
	sLocal_47[2] = "mood_Happy_1";
	sLocal_47[3] = "mood_smug_1";
	sLocal_47[4] = "mood_Injured_1";
	sLocal_47[5] = "mood_sulk_1";
	sLocal_47[6] = "mood_Angry_1";
	func_134();
	if (func_133(1, 1, !iLocal_63, 1))
	{
		iLocal_63 = 1;
	}
	func_132();
	iLocal_111 = unk_0xEDDCCC3D357A50F8();
	if (Global_14339 == 0)
	{
		fLocal_95 = 0.207f;
		fLocal_96 = 0.158f;
		fLocal_97 = 0.207f;
		fLocal_98 = 0.335f;
	}
	else
	{
		fLocal_95 = 0.24f;
		fLocal_96 = 0.258f;
		fLocal_97 = 0.24f;
		fLocal_98 = 0.435f;
	}
	Global_16726 = 0;
	Global_16727 = 0;
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0x0BA4361CA0E455FD(unk_0x81873881071CD9FE()))
		{
			Global_16726 = 1;
		}
		if (unk_0xBE8B8ED1A547F61D())
		{
			Global_16726 = 1;
		}
		if (unk_0x7404950238A154C2(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
		{
			Global_16726 = 1;
		}
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
		{
			Global_16726 = 1;
		}
		if (unk_0x193403916286AA4E(unk_0x81873881071CD9FE()))
		{
			Global_16726 = 1;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16726 = 1;
			}
			uLocal_148 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if ((unk_0x14B7103DBD149FFE(uLocal_148) == joaat("rhino") || unk_0x14B7103DBD149FFE(iLocal_148) == joaat("cutter")) || unk_0x14B7103DBD149FFE(iLocal_148) == joaat("submersible"))
			{
				Global_16726 = 1;
			}
			else if (unk_0xB0B9E53CEFDB16AA(iLocal_148, -1) == unk_0x81873881071CD9FE())
			{
				if (unk_0xCADEFB8A5B164C68(iLocal_148) > 0f)
				{
					if (!Global_69020)
					{
						if (!func_131())
						{
							unk_0xDBB92112C80D7254(unk_0x81873881071CD9FE(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69020)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x4840077BEC3BAAF9(unk_0x1329891157A54C63(), 0);
		}
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 21);
	func_130(0);
	unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
	if (Global_14336 == 0)
	{
		func_129();
	}
	else
	{
		uLocal_139 = unk_0x95EF972E3A07B525("camera_gallery");
		uLocal_140 = unk_0x95EF972E3A07B525("instructional_buttons");
		while (!unk_0xCC8E3BAC62A29F42(uLocal_139) || !unk_0xCC8E3BAC62A29F42(uLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF4753D4FA13FFE6E();
			unk_0xDE1125A413AF241C(0, 25, 1);
		}
		if (Global_69020)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_128())
			{
				case 0:
					iLocal_143 = 2;
					break;
				
				case 2:
					iLocal_143 = 2;
					break;
				
				case 3:
					iLocal_143 = 2;
					break;
				}
		}
		func_127(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		func_126(uLocal_139, "CLOSE_SHUTTER");
		unk_0x21ED0FC9B5CC748B(Global_14375, "DISPLAY_VIEW");
		unk_0xBD0C54D89298454E(16);
		unk_0xBA9BA6181F2B6111();
	}
	Local_77 = { Global_14354 };
	Local_80 = { Global_14347[Global_14339 /*3*/] };
	Global_16727 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		unk_0xC69E84EBBD7166E6(&Global_2266, 3);
	}
	func_124();
	unk_0x7F3AA121397DEEC9(4);
	if (unk_0xA8ED8430BE54BEDF())
	{
	}
	if (Global_1607808.f_77120)
	{
	}
	if (Global_1607808.f_77122 == 1)
	{
		iLocal_155 = 1;
	}
	if (iLocal_155 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xF4753D4FA13FFE6E();
		unk_0xDE1125A413AF241C(0, 25, 1);
		unk_0xDE1125A413AF241C(0, 0, 1);
		if (!Global_98931.f_12665.f_81)
		{
			if (!unk_0x236D8AD7EE179F46(Global_2550377, 13))
			{
				if (!unk_0xA83A609D74168B30())
				{
					if (!unk_0x236D8AD7EE179F46(Global_2265, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0xF3148AAF69AF9CBC(&Global_2550377, 13);
							Global_98931.f_12665.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xDB10DED5ABC4AA20())
		{
			if (Global_1607808.f_77119 == 0 && Global_1607808.f_77120 == 0)
			{
				unk_0xD43E234447A65E08(15, 0f, -0.0375f);
			}
			unk_0xC9A352663D97EFC3(7);
			func_122();
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 200, 1);
			}
			unk_0xDE1125A413AF241C(0, 44, 1);
			unk_0xDE1125A413AF241C(0, 47, 1);
			unk_0xDE1125A413AF241C(0, 91, 1);
			unk_0xDE1125A413AF241C(0, 92, 1);
			unk_0xDE1125A413AF241C(0, 68, 1);
			if (iLocal_149 == 0)
			{
				unk_0x89086B596828ACBE(0, Global_14367);
			}
			unk_0x89086B596828ACBE(0, Global_14364);
			if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
			{
				iLocal_129 = 1;
				Global_14394.f_1 = 3;
				unk_0xD338B0444EFB8C65(0);
			}
			if (unk_0xFA93A31A91EA0392())
			{
				Global_14394.f_1 = 3;
				unk_0xD338B0444EFB8C65(0);
			}
			if (unk_0x236D8AD7EE179F46(Global_2265, 3))
			{
				Global_14394.f_1 = 3;
				unk_0xD338B0444EFB8C65(0);
			}
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (func_111())
				{
					Global_14394.f_1 = 3;
					unk_0xD338B0444EFB8C65(0);
				}
			}
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
				{
					Global_14394.f_1 = 3;
					unk_0xD338B0444EFB8C65(0);
				}
				if ((unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xC4F63EDDAFD0C636(unk_0x1329891157A54C63()))
				{
					if (func_110())
					{
					}
					else
					{
						Global_14394.f_1 = 3;
						unk_0xD338B0444EFB8C65(0);
					}
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					if (Global_69020 == 1)
					{
						Global_14394.f_1 = 3;
					}
				}
				if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
				{
					if (unk_0xD964710E8A8DDECA(unk_0x81873881071CD9FE()) > 0.3f)
					{
						Global_14394.f_1 = 3;
					}
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					func_109();
					iLocal_148 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0xCADEFB8A5B164C68(iLocal_148) < 0f)
					{
						func_107(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0x396192247F231834())
							{
								func_107(0);
							}
						}
						else if (!unk_0x396192247F231834())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xF4753D4FA13FFE6E();
						}
					}
				}
				else if (Global_69020 == 0)
				{
					if (unk_0x236D8AD7EE179F46(Global_2264, 18))
					{
						func_106();
						if ((Global_14394 == 0 || Global_14394 == 1) || Global_14394 == 2)
						{
							if (!unk_0xDA3121434A61AE41(unk_0x81873881071CD9FE()))
							{
								if (unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
								{
								}
								else
								{
									Global_14394.f_1 = 3;
									unk_0xD338B0444EFB8C65(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_105();
			}
			if (Global_14394.f_1 < 4)
			{
			}
			if (iLocal_152 == 0)
			{
				if (iLocal_102 == 0)
				{
					if (iLocal_103 == 0)
					{
						if (iLocal_110 == 0)
						{
							if (Global_14394.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_103();
									if (Global_16731 == 0 && Global_16728 == 6)
									{
										unk_0x88BC2C534DB4793B(0, 1);
										unk_0x81B3DBD3862D4A7D();
										iLocal_149 = 0;
										func_102();
										if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
										{
											Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
										}
										func_101();
										iLocal_108++;
										if (func_135())
										{
											func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_100();
									}
									if (Global_16728 == 0)
									{
										iLocal_149 = 0;
										unk_0x81B3DBD3862D4A7D();
										if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
										{
											Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
										}
										func_99();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_100();
										if (func_135())
										{
											if (Global_2549102 == 0)
											{
												if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
												{
													func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
										{
											func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14394.f_1 != 9)
								{
									if (Global_16727 == 1)
									{
										if (Global_16726 == 0)
										{
											func_96();
										}
									}
									else if ((Global_2872 - Global_2871) > Global_2873)
									{
										if (func_95(2, Global_14362, 0))
										{
											if (func_94() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												unk_0xD338B0444EFB8C65(0);
												unk_0x98A5E5B909F1B162(iLocal_111);
												iLocal_142 = 0;
												if (Global_16726 == 0)
												{
													func_101();
													Global_16726 = 1;
													unk_0x88BC2C534DB4793B(0, 1);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_93(0, 0);
													func_97(0);
													iLocal_114 = 0;
													func_92();
													iLocal_141 = 0;
													func_90(0, 1);
													func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (unk_0xA83A609D74168B30())
										{
											func_89();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0xA83A609D74168B30())
									{
										func_89();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x236D8AD7EE179F46(Global_2264, 28))
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x236D8AD7EE179F46(Global_2264, 28))
									{
										func_89();
										iLocal_101 = 0;
									}
									if (Global_16726 == 1)
									{
										func_82();
									}
									else if (Global_14394.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_78();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_99();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
												{
													if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
													{
														func_126(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0x48E480685981C7D4();
														while (unk_0x48E480685981C7D4() < (iLocal_134 + iLocal_136) && Global_14394.f_1 > 3)
														{
															func_122();
															func_105();
															func_77();
															unk_0xF4753D4FA13FFE6E();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2549102 == 0)
													{
														if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
														{
															func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
												{
													func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_105();
												func_122();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_100();
												iLocal_135 = 0;
												func_126(uLocal_139, "OPEN_SHUTTER");
											}
											func_98();
											func_97(1);
											func_76();
										}
									}
									if (iLocal_142 == 1)
									{
										func_73();
									}
									if (iLocal_128)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											unk_0xF3148AAF69AF9CBC(&Global_2264, 18);
											if (Global_16726 == 0)
											{
												func_90(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16726 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16729 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_77();
										}
									}
									else if (iLocal_123 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14394.f_1 > 3)
					{
						if (Global_16727 == 1)
						{
							if (Global_16726 == 0)
							{
								func_96();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_154 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_151, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 7)
				{
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x913B1C01C1BA6C6F())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_151, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_154 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_151, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 5)
				{
					iVar0 = unk_0xECB7CB2D21C7B211();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_154 == 0)
				{
				}
				if (iLocal_154 == 2 || iLocal_154 == 3)
				{
					if (unk_0x093DEAE9A023FAA0(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_90(0, 1);
					}
					if (unk_0x093DEAE9A023FAA0(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0xB93E207B3C65F1B1(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_90(0, 1);
							iLocal_153 = 0;
							unk_0x7C08DE0920B33A91("Gallery");
							unk_0xFB464689652F0216();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0xEC209B562C5EFDB2())
					{
						if (unk_0x093DEAE9A023FAA0(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_90(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0x093DEAE9A023FAA0(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_90(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0xEC209B562C5EFDB2())
					{
						if (unk_0x093DEAE9A023FAA0(2, Global_14366))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_90(0, 1);
							if (unk_0x236D8AD7EE179F46(Global_2265, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0x48E480685981C7D4();
							unk_0xE45B577D7E33E804(1);
						}
					}
				}
				else if (unk_0x093DEAE9A023FAA0(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_107 = unk_0x48E480685981C7D4();
		if (func_3() || iLocal_129)
		{
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_114 = 0;
			func_92();
			Global_16726 = 0;
			Global_16727 = 0;
			Global_16729 = 0;
			unk_0x4B6F01DE8CCE643E(&uLocal_139);
			unk_0x4B6F01DE8CCE643E(&uLocal_140);
			unk_0xD338B0444EFB8C65(0);
			if (Global_14554 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			unk_0x88BC2C534DB4793B(0, 1);
			unk_0x4840077BEC3BAAF9(unk_0x1329891157A54C63(), 1);
			unk_0xC69E84EBBD7166E6(&Global_2266, 3);
			unk_0xC69E84EBBD7166E6(&Global_2550377, 3);
			unk_0x5547446287DE314B(15);
			Global_16730 = 1;
			unk_0x98A5E5B909F1B162(iLocal_111);
			unk_0x54206B7CE6FF2360(iLocal_111);
			unk_0x81B3DBD3862D4A7D();
			func_92();
			unk_0x556EAA62E8081219(0);
			unk_0xC84FF0CCAD3DA347(0);
			unk_0x578A1DE3F51B581A(1f);
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), "Mood_Normal_1", 0);
				unk_0xCAEF57FEF56247F2(unk_0x81873881071CD9FE());
			}
			if (Global_2549102 > 0 && Global_2549102 < 13)
			{
				unk_0x9B331DCFDFC55491(sLocal_32[Global_2549102]);
			}
			unk_0xC69E84EBBD7166E6(&Global_2264, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_63, 1))
			{
				iLocal_63 = 0;
			}
			unk_0xC23A229F78DAD92A();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x17F7090F4754BE37(1);
		}
		else if (Global_14394.f_1 > 3)
		{
			unk_0x17F7090F4754BE37(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2550579 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_105 = unk_0x2DF17A04AAA2B5C3(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x9462CA6E2EEB227C();
			iLocal_109 = unk_0x9C2B788D4DE33500();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0xCC8E3BAC62A29F42(uLocal_139))
					{
						if (func_135())
						{
							if (Global_2549102 == 0)
							{
								if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
								{
									func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
							{
								func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xCC8E3BAC62A29F42(uLocal_139))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0x81B3DBD3862D4A7D();
			break;
		
		case 1:
			if (!unk_0xEC3146FEA2F31366())
			{
				unk_0x91418342B226A788("CELL_SPINNER2");
				unk_0x15F4C49B01222ABB(1);
			}
			break;
		
		case 2:
			if (unk_0x236D8AD7EE179F46(Global_2265, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14394.f_1 = 3;
				Global_16730 = 1;
			}
			unk_0x81B3DBD3862D4A7D();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14363, 0))
	{
		func_1(0);
		if (unk_0x236D8AD7EE179F46(Global_2265, 28))
		{
			unk_0xD338B0444EFB8C65(0);
			unk_0x5AE11BC36633DE4E(0);
			func_102();
			iLocal_126 = 0;
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			}
			func_101();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0x236D8AD7EE179F46(Global_2265, 14))
			{
				func_123("CELL_299", -1);
			}
			else
			{
				func_101();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			func_90(1, 1);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2264, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_122();
			unk_0xF4753D4FA13FFE6E();
			func_77();
			func_109();
			func_105();
		}
		unk_0xD338B0444EFB8C65(0);
		func_102();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14367, 0))
	{
		func_1(0);
		if (func_94() || unk_0x236D8AD7EE179F46(Global_2265, 28))
		{
		}
		else
		{
			unk_0xD338B0444EFB8C65(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_102();
			iLocal_126 = 0;
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			}
			func_101();
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2264, 28))
	{
		if (func_95(2, Global_14366, 0))
		{
			func_1(0);
			unk_0xD338B0444EFB8C65(0);
			unk_0xA83C089540B6E947(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF4753D4FA13FFE6E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF4753D4FA13FFE6E();
			func_122();
			unk_0xA8FBCDFA4FF2F963();
			unk_0xA493449248079310();
			Global_16730 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_90(0, 1);
			Global_16726 = 1;
			unk_0x88BC2C534DB4793B(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_114 = 0;
			func_92();
			unk_0xF3148AAF69AF9CBC(&Global_2264, 9);
			iLocal_141 = 0;
			func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Accept", &Global_14383, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xFFC5C53467CD6DB5(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16731 = 1;
	unk_0x88BC2C534DB4793B(0, 1);
}

int func_9()
{
	if (iLocal_106 == iLocal_107)
	{
		if (iLocal_104)
		{
			iLocal_104 = 1;
		}
	}
	if (Global_14394.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_108 == iLocal_109 || iLocal_108 > iLocal_109)
	{
		iLocal_154 = 1;
		iLocal_151 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x3D6272A8E1C449E9(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_130)
	{
		func_68();
		func_64();
		func_63();
		fLocal_72 = unk_0xF1F61ABE1EC59487();
		fLocal_73 = unk_0xF83F09E63ACCDCB2();
		if (iLocal_132 == 0)
		{
			if (unk_0xCAD9951C953F5B2D(2, iVar0) && !unk_0xCAD9951C953F5B2D(2, iVar1))
			{
				iLocal_132 = 1;
				func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x236D8AD7EE179F46(Global_2264, 28))
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
					func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_280");
					func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
				unk_0x518198639630AE08(fLocal_76);
				unk_0xBA9BA6181F2B6111();
				func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xCAD9951C953F5B2D(2, iVar0) || unk_0xCAD9951C953F5B2D(2, iVar1))
		{
			iLocal_132 = 0;
			func_100();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0xCAD9951C953F5B2D(2, iVar1) && !unk_0xCAD9951C953F5B2D(2, iVar0))
			{
				iLocal_133 = 1;
				func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x236D8AD7EE179F46(Global_2264, 28))
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
					func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_280");
					func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
				unk_0x518198639630AE08(fLocal_76);
				unk_0xBA9BA6181F2B6111();
				func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xCAD9951C953F5B2D(2, iVar1) || unk_0xCAD9951C953F5B2D(2, iVar0))
		{
			iLocal_133 = 0;
			func_100();
		}
	}
	else
	{
		unk_0xF333CEFDC2923B24(0, 2, 1);
		unk_0xF333CEFDC2923B24(0, 1, 1);
	}
	if (unk_0x34C16363C251572E(2))
	{
		func_100();
	}
	func_109();
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 200, 1);
	}
	if (unk_0x093DEAE9A023FAA0(2, 183) && iLocal_155 == 0)
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
			{
				if (unk_0x236D8AD7EE179F46(Global_2550377, 2))
				{
					unk_0xC69E84EBBD7166E6(&Global_2550377, 2);
					if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
					{
						func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF3148AAF69AF9CBC(&Global_2550377, 2);
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			unk_0x21ED0FC9B5CC748B(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x75A2A42ADE12FD0E(0);
			func_58("CELL_FOCUS");
			unk_0x75A2A42ADE12FD0E(1);
			unk_0xBA9BA6181F2B6111();
		}
		if (!func_57(14))
		{
			if (unk_0x236D8AD7EE179F46(Global_2550377, 10))
			{
				if ((Global_69020 == 0 && unk_0x968BF1C2C695B61A(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x21ED0FC9B5CC748B(uLocal_139, "SET_FOCUS_LOCK");
					unk_0x75A2A42ADE12FD0E(1);
					unk_0x6CE839BF5D87A428("CELL_ACTTL");
					unk_0x6222A57F463E8EE7(unk_0x46E7F5908F815DDC(&Global_2551073));
					unk_0xC3822F70D0E7940B();
					unk_0x75A2A42ADE12FD0E(0);
					unk_0xBA9BA6181F2B6111();
					unk_0xC69E84EBBD7166E6(&Global_2550377, 10);
				}
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_2550377, 10))
		{
			unk_0xC69E84EBBD7166E6(&Global_2550377, 10);
		}
		iLocal_65 = unk_0x48E480685981C7D4();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Local_69 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				if (unk_0x0D6E79537424BACE(Local_69, Local_66, 1) > 5f)
				{
					Global_14394.f_1 = 3;
					unk_0xD338B0444EFB8C65(0);
				}
				iLocal_64 = unk_0x48E480685981C7D4();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0xCAD9951C953F5B2D(0, 182))
		{
			unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
			iLocal_131 = 0;
			unk_0x21ED0FC9B5CC748B(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x75A2A42ADE12FD0E(0);
			func_58("CELL_FOCUS");
			unk_0x75A2A42ADE12FD0E(1);
			unk_0xBA9BA6181F2B6111();
		}
	}
	else if (unk_0xCAD9951C953F5B2D(0, 182))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
		iLocal_131 = 1;
		if (!func_57(14))
		{
			unk_0x21ED0FC9B5CC748B(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x75A2A42ADE12FD0E(1);
			func_58("CELL_FOCUS");
			unk_0x75A2A42ADE12FD0E(1);
			unk_0xBA9BA6181F2B6111();
		}
	}
	if (func_135())
	{
		if (unk_0x093DEAE9A023FAA0(2, 186) && iLocal_155 == 0)
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
						unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), "Mood_Normal_1", 0);
						unk_0xCAEF57FEF56247F2(unk_0x81873881071CD9FE());
						if (Global_14394 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x0F7FE22229DBD748(unk_0x81873881071CD9FE(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x0F7FE22229DBD748(unk_0x81873881071CD9FE(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_56 == 2 || iLocal_56 == 3) || iLocal_56 == 4) || iLocal_56 == 8) || iLocal_56 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_56 == 3)
										{
											unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), "Mood_Normal_1", 0);
						unk_0xCAEF57FEF56247F2(unk_0x81873881071CD9FE());
						unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
					}
				}
			}
		}
		if (unk_0x093DEAE9A023FAA0(2, 185) && iLocal_155 == 0)
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						iLocal_59 = 1;
						if (unk_0xD994929E13CC1ED5(sLocal_18[Global_2549101], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x556EAA62E8081219(1);
							unk_0xC84FF0CCAD3DA347(1);
						}
					}
					else
					{
						iLocal_60 = 0;
						iLocal_59 = 0;
						unk_0x556EAA62E8081219(0);
						unk_0xC84FF0CCAD3DA347(0);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
					iLocal_60 = 1;
					unk_0x556EAA62E8081219(1);
					unk_0xC84FF0CCAD3DA347(1);
				}
				else
				{
					iLocal_59 = 0;
					iLocal_60 = 0;
					unk_0x556EAA62E8081219(0);
					unk_0xC84FF0CCAD3DA347(0);
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0x093DEAE9A023FAA0(0, 172) && iLocal_155 == 0)
		{
			if (func_135())
			{
				Global_2549102++;
				unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
			}
			if (Global_2549102 == 13)
			{
				func_97(0);
				unk_0x578A1DE3F51B581A(1f);
				unk_0x9B331DCFDFC55491(sLocal_32[(Global_2549102 - 1)]);
				Global_2549102 = 0;
				func_55();
				if (iLocal_46 == 1)
				{
					unk_0xC69E84EBBD7166E6(&Global_2550377, 2);
					iLocal_46 = 0;
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2549102 > 0 && Global_2549102 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0xB711FC19ADBD3C70(sLocal_32[Global_2549102], 0);
			}
		}
	}
	if (Global_2549102 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0x682001A921A80123(sLocal_32[Global_2549102]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0xD5E9356EFEA62A9E())
				{
					func_97(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0xF3148AAF69AF9CBC(&Global_2550377, 2);
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x578A1DE3F51B581A(0.25f);
				unk_0x2D2E181BDA90DA66(sLocal_32[Global_2549102], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2549102 == 1 || Global_2549102 == 3)
			{
			}
			if (Global_2549102 == 2 || Global_2549102 == 4)
			{
			}
		}
	}
	if (unk_0x093DEAE9A023FAA0(0, 173) && iLocal_155 == 0)
	{
		if (func_135())
		{
			func_92();
			Global_2549101++;
			unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
		}
		if (Global_2549101 == 13)
		{
			Global_2549101 = 0;
		}
		if (Global_2549101 == 0)
		{
			if (func_135())
			{
				func_92();
			}
		}
		else
		{
			func_98();
		}
		func_54();
	}
	if (unk_0x5BD35B90C0693406(0, 184) && iLocal_155 == 0)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
			{
				Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0x48E480685981C7D4();
				while (unk_0x48E480685981C7D4() < (iLocal_134 + iLocal_138) && Global_14394.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xF4753D4FA13FFE6E();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					unk_0x98A5E5B909F1B162(iLocal_111);
					iLocal_130 = 1;
					func_53(1);
					func_52();
					unk_0xF3148AAF69AF9CBC(&Global_2266, 3);
					iLocal_64 = unk_0x48E480685981C7D4();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_53(0);
					iLocal_130 = 0;
					unk_0xC69E84EBBD7166E6(&Global_2266, 3);
				}
				iLocal_134 = unk_0x48E480685981C7D4();
				while (unk_0x48E480685981C7D4() < (iLocal_134 + iLocal_136) && Global_14394.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xF4753D4FA13FFE6E();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_126(uLocal_139, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2549102 == 0)
					{
						if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
						{
							func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (unk_0x236D8AD7EE179F46(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_50();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_130 == 0)
	{
		if (iLocal_112 == 0)
		{
			if (unk_0x093DEAE9A023FAA0(0, 40) || unk_0x093DEAE9A023FAA0(0, 41))
			{
				fLocal_113 = unk_0x3644517188B7BA2E();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0xBDC7EB9D855C9610(iLocal_111))
					{
						unk_0x35D7948F61AA3FEC(iLocal_111, "Camera_Zoom", &Global_14383, 1);
					}
				}
				else
				{
					unk_0x98A5E5B909F1B162(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0xCAD9951C953F5B2D(0, 40) || unk_0xCAD9951C953F5B2D(0, 41))
		{
			fLocal_113 = unk_0x3644517188B7BA2E();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0xBDC7EB9D855C9610(iLocal_111))
				{
					unk_0x35D7948F61AA3FEC(iLocal_111, "Camera_Zoom", &Global_14383, 1);
				}
			}
			else
			{
				unk_0x98A5E5B909F1B162(iLocal_111);
			}
		}
		else
		{
			unk_0x98A5E5B909F1B162(iLocal_111);
		}
	}
	if (func_95(2, Global_14363, 0))
	{
		fLocal_74 = unk_0xF1F61ABE1EC59487();
		fLocal_75 = unk_0xF83F09E63ACCDCB2();
		unk_0xA83C089540B6E947(0, 0);
		unk_0xF3148AAF69AF9CBC(&Global_2264, 21);
		unk_0x98A5E5B909F1B162(iLocal_111);
		iLocal_126 = 1;
		func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x35D7948F61AA3FEC(-1, "Camera_Shoot", &Global_14383, 1);
		func_126(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0xA1D5DA13E8B9FEED(Local_83, 0);
		if (!func_135())
		{
			func_92();
		}
		Global_16729 = 1;
		unk_0x88BC2C534DB4793B(0, 1);
		while (Global_16728 < 6 && Global_14394.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			func_109();
			unk_0xF4753D4FA13FFE6E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x02FA139D19E0091E(0, 0);
		if (Global_14336)
		{
			func_1(1);
		}
		iLocal_134 = unk_0x48E480685981C7D4();
		while (unk_0x48E480685981C7D4() < (iLocal_134 + iLocal_137) && Global_14394.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			unk_0xF4753D4FA13FFE6E();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_126(uLocal_139, "OPEN_SHUTTER");
		unk_0xC69E84EBBD7166E6(&Global_2264, 21);
		func_100();
		if (Global_14394.f_1 > 3)
		{
			if (Global_69020)
			{
				func_20(1076, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0xBC5CB8ACC4EE71EB(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xBC5CB8ACC4EE71EB(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xBC5CB8ACC4EE71EB(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (unk_0x236D8AD7EE179F46(Global_2264, 28))
	{
		if (func_95(2, Global_14366, 0))
		{
			unk_0xA83C089540B6E947(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF4753D4FA13FFE6E();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF4753D4FA13FFE6E();
			func_122();
			unk_0xA8FBCDFA4FF2F963();
			unk_0xA493449248079310();
			Global_16730 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16726 = 1;
			unk_0x88BC2C534DB4793B(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_114 = 0;
			func_92();
			unk_0xF3148AAF69AF9CBC(&Global_2264, 9);
			unk_0xD338B0444EFB8C65(0);
			iLocal_141 = 0;
			func_127(Global_14375, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_15(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_14(unk_0x81873881071CD9FE());
			if (func_13(iVar0) && (!func_57(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_13(Global_98931.f_1750.f_539.f_3549))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	Global_14331 = { Global_14347[Global_14339 /*3*/] };
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_114 = 0;
	func_92();
	if (!unk_0x236D8AD7EE179F46(Global_2265, 28))
	{
		if (unk_0xA8ED8430BE54BEDF() == 0)
		{
			if (unk_0x9800AF1CCAFA4639())
			{
				if (iLocal_116 == 0)
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_25(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_25(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_25(uParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_25(uParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_25(uParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_25(uParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_25(uParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_25(uParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_25(uParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

var func_26()
{
	return Global_1312729;
}

void func_27()
{
	if (iLocal_155 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
				{
					if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69020 == 0 && unk_0x968BF1C2C695B61A(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
					func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_61(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_61(uLocal_140, "SET_DATA_SLOT", 7f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
			{
				if (!unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
					func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
					func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					func_61(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
		unk_0x518198639630AE08(fLocal_76);
		unk_0xBA9BA6181F2B6111();
		func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x2576ED87DB06844F(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_44(Global_2480938, Global_2480939))
		{
			if (iParam0 == 0 || !func_30(Global_2480938, Global_2480939, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x81873881071CD9FE(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = 2;
	uVar3 = 2;
	uVar6 = 3;
	if (iParam1 == 0)
	{
		iVar13 = 3;
	}
	else if (bParam3)
	{
		iVar13 = 1;
	}
	else if (bParam4)
	{
		iVar13 = 2;
	}
	else
	{
		iVar13 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar3, &uVar6, iVar13, bParam5);
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0x14B7103DBD149FFE(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar10 = func_38(iParam0);
			if (!iVar10 == -1)
			{
				if (func_37(&uVar0, iVar10))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar11 = func_36(iParam0);
			if (!iVar11 == -1)
			{
				if (func_34(&uVar3, iVar11))
				{
					return 1;
				}
			}
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			iVar12 = func_33(iParam0);
			if (!iVar12 == 0)
			{
				if (func_32(&uVar6, iVar12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	return unk_0x1CFC95A2D6BABBA2(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0F7FE22229DBD748(iParam0, 0);
	if (iVar0 >= 57)
	{
	}
	return iVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0F7FE22229DBD748(iParam0, 0);
	if (iVar0 >= 57)
	{
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 5, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 7, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 33, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 10:
					func_40(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 4, 1);
						func_43(uParam3, 6, 1);
						func_43(uParam3, 10, 1);
						func_43(uParam3, 54, 1);
						func_43(uParam3, 55, 1);
						func_43(uParam3, 56, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 39, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 9, 1);
						func_41(uParam2, 10, 1);
						func_41(uParam2, 53, 1);
						func_41(uParam2, 56, 1);
						func_41(uParam2, 55, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 55, 1);
					}
					func_40(uParam4, 2, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 6, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 32, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_43(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_40(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 8, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_43(uParam3, 3, 1);
						func_43(uParam3, 7, 1);
						func_43(uParam3, 0, 1);
						func_43(uParam3, 12, 1);
						func_43(uParam3, 13, 1);
						func_43(uParam3, 15, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 48, 1);
						func_43(uParam3, 49, 1);
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 50, 1);
						func_43(uParam3, 51, 1);
						func_43(uParam3, 52, 1);
						func_43(uParam3, 53, 1);
						func_43(uParam3, 38, 1);
						func_43(uParam3, 47, 1);
						func_43(uParam3, 20, 1);
						func_43(uParam3, 21, 1);
						func_43(uParam3, 25, 1);
						func_43(uParam3, 26, 1);
						func_43(uParam3, 27, 1);
						func_43(uParam3, 30, 1);
						func_43(uParam3, 31, 1);
						func_43(uParam3, 32, 1);
						func_43(uParam3, 33, 1);
						func_43(uParam3, 39, 1);
						func_43(uParam3, 37, 1);
						func_43(uParam3, 55, 1);
						func_41(uParam2, 0, 1);
						func_41(uParam2, 2, 1);
						func_41(uParam2, 3, 1);
						func_41(uParam2, 4, 1);
						func_41(uParam2, 6, 1);
						func_41(uParam2, 7, 1);
						func_41(uParam2, 8, 1);
						func_41(uParam2, 11, 1);
						func_41(uParam2, 13, 1);
						func_41(uParam2, 15, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 47, 1);
						func_41(uParam2, 48, 1);
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 49, 1);
						func_41(uParam2, 50, 1);
						func_41(uParam2, 51, 1);
						func_41(uParam2, 52, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 46, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
						func_41(uParam2, 54, 1);
						func_41(uParam2, 24, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 30, 1);
						func_41(uParam2, 31, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 38, 1);
						func_41(uParam2, 36, 1);
					}
					func_40(uParam4, 3, 1);
					func_40(uParam4, 3, 1);
					func_40(uParam4, 4, 1);
					func_40(uParam4, 14, 1);
					func_40(uParam4, 15, 1);
					func_40(uParam4, 16, 1);
					func_40(uParam4, 8, 1);
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
					func_40(uParam4, 59, 1);
					func_40(uParam4, 60, 1);
					func_40(uParam4, 61, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 62, 1);
					func_40(uParam4, 63, 1);
					func_40(uParam4, 64, 1);
					func_40(uParam4, 65, 1);
					func_40(uParam4, 66, 1);
					func_40(uParam4, 67, 1);
					func_40(uParam4, 68, 1);
					func_40(uParam4, 69, 1);
					func_40(uParam4, 70, 1);
					func_40(uParam4, 71, 1);
					func_40(uParam4, 72, 1);
					func_40(uParam4, 21, 1);
					func_40(uParam4, 22, 1);
					func_40(uParam4, 23, 1);
					func_40(uParam4, 24, 1);
					func_40(uParam4, 25, 1);
					func_40(uParam4, 26, 1);
					func_40(uParam4, 36, 1);
					func_40(uParam4, 46, 1);
					func_40(uParam4, 38, 1);
					func_40(uParam4, 29, 1);
					func_40(uParam4, 28, 1);
					func_40(uParam4, 31, 1);
					func_40(uParam4, 33, 1);
					func_40(uParam4, 34, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 31, 1);
							break;
					}
					break;
				
				case 5:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 43, 1);
							func_40(uParam4, 29, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							break;
					}
					break;
				
				case 26:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
					}
					break;
				
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 6, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 19, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 55, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 32, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 4, 1);
							break;
						
						case 1:
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
						
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 5, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_43(uParam3, 37, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 36, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 1:
							func_43(uParam3, 3, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 7, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 1, 1);
							func_43(uParam3, 3, 1);
							func_43(uParam3, 4, 1);
							func_43(uParam3, 5, 1);
							func_43(uParam3, 7, 1);
							func_43(uParam3, 10, 1);
							func_43(uParam3, 54, 1);
							func_43(uParam3, 55, 1);
							func_43(uParam3, 56, 1);
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 48, 1);
							func_43(uParam3, 49, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 50, 1);
							func_43(uParam3, 51, 1);
							func_43(uParam3, 52, 1);
							func_43(uParam3, 53, 1);
							func_43(uParam3, 38, 1);
							func_43(uParam3, 47, 1);
							func_43(uParam3, 20, 1);
							func_43(uParam3, 21, 1);
							func_43(uParam3, 25, 1);
							func_43(uParam3, 26, 1);
							func_43(uParam3, 27, 1);
							func_43(uParam3, 30, 1);
							func_43(uParam3, 31, 1);
							func_43(uParam3, 32, 1);
							func_43(uParam3, 33, 1);
							func_43(uParam3, 37, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 0, 1);
							func_41(uParam2, 1, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 3, 1);
							func_41(uParam2, 4, 1);
							func_41(uParam2, 5, 1);
							func_41(uParam2, 6, 1);
							func_41(uParam2, 7, 1);
							func_41(uParam2, 8, 1);
							func_41(uParam2, 9, 1);
							func_41(uParam2, 10, 1);
							func_41(uParam2, 53, 1);
							func_41(uParam2, 56, 1);
							func_41(uParam2, 55, 1);
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 47, 1);
							func_41(uParam2, 48, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 49, 1);
							func_41(uParam2, 50, 1);
							func_41(uParam2, 51, 1);
							func_41(uParam2, 52, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 46, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 54, 1);
							func_41(uParam2, 23, 1);
							func_41(uParam2, 24, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 29, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 33, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
							func_41(uParam2, 55, 1);
							func_40(uParam4, 1, 1);
							func_40(uParam4, 2, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 3, 1);
							func_40(uParam4, 4, 1);
							func_40(uParam4, 14, 1);
							func_40(uParam4, 15, 1);
							func_40(uParam4, 16, 1);
							func_40(uParam4, 6, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
							func_40(uParam4, 59, 1);
							func_40(uParam4, 60, 1);
							func_40(uParam4, 61, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 62, 1);
							func_40(uParam4, 63, 1);
							func_40(uParam4, 64, 1);
							func_40(uParam4, 65, 1);
							func_40(uParam4, 66, 1);
							func_40(uParam4, 67, 1);
							func_40(uParam4, 68, 1);
							func_40(uParam4, 69, 1);
							func_40(uParam4, 70, 1);
							func_40(uParam4, 71, 1);
							func_40(uParam4, 72, 1);
							func_40(uParam4, 21, 1);
							func_40(uParam4, 22, 1);
							func_40(uParam4, 23, 1);
							func_40(uParam4, 24, 1);
							func_40(uParam4, 25, 1);
							func_40(uParam4, 26, 1);
							func_40(uParam4, 36, 1);
							func_40(uParam4, 46, 1);
							func_40(uParam4, 38, 1);
							func_40(uParam4, 29, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 34, 1);
							func_40(uParam4, 32, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 26, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 27, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xC69E84EBBD7166E6(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xC69E84EBBD7166E6(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	func_42(uParam0, iParam1, bParam2);
}

int func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_45(float fParam0)
{
	func_61(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x2576ED87DB06844F(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1708460 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x2576ED87DB06844F(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 183, 1), "CELL_GRID");
	func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69020 == 0 && unk_0x968BF1C2C695B61A(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x21ED0FC9B5CC748B(uLocal_139, "SET_FOCUS_LOCK");
			unk_0x75A2A42ADE12FD0E(1);
			unk_0x6CE839BF5D87A428("CELL_ACTTL");
			unk_0x6222A57F463E8EE7(unk_0x46E7F5908F815DDC(&Global_2551073));
			unk_0xC3822F70D0E7940B();
			unk_0x75A2A42ADE12FD0E(0);
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_140, "SET_DATA_SLOT", fParam0, unk_0x2576ED87DB06844F(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
	func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
	func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
	func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_280");
	unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
	unk_0x518198639630AE08(fLocal_76);
	unk_0xBA9BA6181F2B6111();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()
{
	if (iLocal_155 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
		func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
				{
					if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69020 == 0 && unk_0x968BF1C2C695B61A(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
					func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_61(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_61(uLocal_140, "SET_DATA_SLOT", 7f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
			{
				if (!unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
					func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_140, "SET_DATA_SLOT", 8f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
			{
				if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2576ED87DB06844F(2, 183, 1), "CELL_GRID");
				func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
				func_61(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
				if (func_135())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_140, "SET_DATA_SLOT", 9f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x2576ED87DB06844F(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
		unk_0x518198639630AE08(fLocal_76);
		unk_0xBA9BA6181F2B6111();
		func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_284");
	func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_285");
	func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
	func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 177, 1), "CELL_281");
	unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
	unk_0x518198639630AE08(fLocal_76);
	unk_0xBA9BA6181F2B6111();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_130)
	{
		unk_0xEAB527164AD92BF3(fLocal_72, 1065353216);
		unk_0x270066FDBAF3A458(fLocal_73);
	}
}

void func_53(int iParam0)
{
	if (iLocal_155 == 1)
	{
		return;
	}
	if (Global_1607808.f_77119 == 1)
	{
	}
	else if (Global_1607808.f_77120 == 1)
	{
	}
	else
	{
		unk_0x027772555F442892(iParam0);
	}
}

void func_54()
{
	if (iLocal_60 == 1)
	{
		if (unk_0xD994929E13CC1ED5(sLocal_18[Global_2549101], "phone_cam12DUMMY"))
		{
			unk_0x556EAA62E8081219(0);
			unk_0xC84FF0CCAD3DA347(0);
		}
		else
		{
			unk_0x556EAA62E8081219(1);
			unk_0xC84FF0CCAD3DA347(1);
		}
	}
}

void func_55()
{
	func_127(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		if (Global_1708460 == 0)
		{
			unk_0xE0BB456359144BD6("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if ((unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/] || unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/]) || unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
	return 1;
}

bool func_57(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_59()
{
	if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0x3D6272A8E1C449E9(2))
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0x3D6272A8E1C449E9(2) || unk_0xEC209B562C5EFDB2())
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 3f, unk_0x2576ED87DB06844F(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_140, "SET_DATA_SLOT", 4f, unk_0x2ABE9D86108310D2(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 5f, unk_0x2576ED87DB06844F(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_140, "SET_DATA_SLOT", 6f, unk_0x2576ED87DB06844F(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xB318FDA0D1ABDB20(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		func_58(sParam4);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_62(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

void func_63()
{
	if (Global_69020)
	{
		switch (Global_16810)
		{
			case 0:
				if (unk_0x3D6272A8E1C449E9(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16810++;
				break;
			
			case 1:
				if (!unk_0xA83A609D74168B30())
				{
					if (unk_0x3D6272A8E1C449E9(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16810++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0x3D6272A8E1C449E9(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!unk_0xA83A609D74168B30())
				{
					if (unk_0x3D6272A8E1C449E9(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x3D6272A8E1C449E9(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xCAD9951C953F5B2D(2, iVar10) && !unk_0xCAD9951C953F5B2D(2, iVar9))
	{
		unk_0xDE1125A413AF241C(0, 2, 1);
		unk_0xDE1125A413AF241C(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 2)) * 127;
		if (unk_0x3D6272A8E1C449E9(2))
		{
			if (unk_0x013F97B9D88B92CA(iVar0) > 28 || unk_0x013F97B9D88B92CA(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_163);
			}
		}
		else if (unk_0x013F97B9D88B92CA(iVar2) > 28 || unk_0x013F97B9D88B92CA(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_163);
		}
		if (unk_0x3D6272A8E1C449E9(2))
		{
			fVar7 = unk_0xE52CA3DD00C4F1F4(0, 290);
			fVar8 = unk_0xE52CA3DD00C4F1F4(0, 291);
			if (unk_0x22E66F762F5AE39B())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x013F97B9D88B92CA(iVar0) > 28 || unk_0x013F97B9D88B92CA(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_163);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_163);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0xCAD9951C953F5B2D(2, iVar9))
	{
		unk_0xF333CEFDC2923B24(0, 2, 1);
		unk_0xF333CEFDC2923B24(0, 1, 1);
	}
}

void func_65(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0x8421BE2955EBF558(fLocal_160);
}

void func_66(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0xDB513F9A2BD6177C(fLocal_161);
}

void func_67(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0x63594E43DB7F9B98(fLocal_162);
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x3D6272A8E1C449E9(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xCAD9951C953F5B2D(2, iVar10))
		{
			if (unk_0x093DEAE9A023FAA0(2, 178))
			{
				unk_0xB647DF0474492B8E(0.5f);
				unk_0x5AD060E0F6114BB0(0.85f);
				unk_0x1BB2A0D7C94ADF08(0.5f);
				unk_0x98C350F66282A7E3(-0.25f);
				fLocal_156 = 0.5f;
				fLocal_157 = 0.85f;
				fLocal_158 = 0.5f;
				fLocal_159 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xCAD9951C953F5B2D(2, iVar10) && !unk_0xCAD9951C953F5B2D(2, iVar11))
	{
		if (unk_0x093DEAE9A023FAA0(2, 178))
		{
			unk_0xB647DF0474492B8E(0.5f);
			unk_0x5AD060E0F6114BB0(0.85f);
			unk_0x1BB2A0D7C94ADF08(0.5f);
			unk_0x98C350F66282A7E3(-0.25f);
			fLocal_156 = 0.5f;
			fLocal_157 = 0.85f;
			fLocal_158 = 0.5f;
			fLocal_159 = -0.25f;
		}
		unk_0xDE1125A413AF241C(0, 2, 1);
		unk_0xDE1125A413AF241C(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 2)) * 127;
		if (unk_0x3D6272A8E1C449E9(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 39)) * 127;
			fVar8 = unk_0xE52CA3DD00C4F1F4(0, 290);
			fVar9 = unk_0xE52CA3DD00C4F1F4(0, 291);
			if (unk_0x22E66F762F5AE39B())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x013F97B9D88B92CA(iVar2) > 15 || unk_0x013F97B9D88B92CA(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_163);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_163);
		}
		if (unk_0x013F97B9D88B92CA(iVar0) > 28 || unk_0x013F97B9D88B92CA(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_163);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_163);
		}
		func_72(fVar6);
		func_71(fVar7);
		func_70(fVar4);
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
	else if (!unk_0x70A79CA636F98FA5(2, iVar11))
	{
		unk_0xF333CEFDC2923B24(0, 2, 1);
		unk_0xF333CEFDC2923B24(0, 1, 1);
	}
	if (!unk_0x70A79CA636F98FA5(2, iVar10) && !unk_0x70A79CA636F98FA5(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xE52CA3DD00C4F1F4(0, 293)) * 127;
		if (unk_0x013F97B9D88B92CA(iVar2) > 28 || unk_0x013F97B9D88B92CA(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_163);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_163);
		}
		if (unk_0x013F97B9D88B92CA(iVar0) > 28 || unk_0x013F97B9D88B92CA(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_163);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_163);
		}
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
}

void func_69(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < 0f)
	{
		fLocal_158 = 0f;
	}
	unk_0x1BB2A0D7C94ADF08(fLocal_158);
}

void func_70(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	unk_0x98C350F66282A7E3(fLocal_159);
}

void func_71(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1.5f)
	{
		fLocal_157 = 1.5f;
	}
	else if (fLocal_157 < 0.5f)
	{
		fLocal_157 = 0.5f;
	}
	unk_0x5AD060E0F6114BB0(fLocal_157);
}

void func_72(float fParam0)
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 2f)
	{
		fLocal_156 = 2f;
	}
	else if (fLocal_156 < -1.7f)
	{
		fLocal_156 = -1.7f;
	}
	unk_0xB647DF0474492B8E(fLocal_156);
}

void func_73()
{
	if (Global_69280 || Global_69281)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1607808.f_77119 == 0 && Global_1607808.f_77120 == 0)
			{
				unk_0x88188CE25DF2572C(uLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14336)
		{
			if (Global_14552)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14394.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_75(255, 255, 255, 255);
			func_74(0.059f, 0.644f, "CELL_284", 0);
			func_75(255, 255, 255, 255);
			func_74(0.165f, 0.644f, "CELL_285", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.75f, "CELL_280", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14336)
	{
	}
	else
	{
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.75f, "CELL_287", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.79f, "CELL_286", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_74(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x834054753F171911(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x73984E9D23C977BA(0.4f, 0.4f);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(1, 0, 0, 0, 205);
	unk_0x29FEA2DD69665985(1);
	unk_0x992C39DBBED35AE3(0);
	unk_0x00793A77639A3BAC(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0xEAB527164AD92BF3(fLocal_74, 1065353216);
	unk_0x270066FDBAF3A458(fLocal_75);
}

void func_77()
{
	unk_0xDE1125A413AF241C(0, 25, 1);
	unk_0xDE1125A413AF241C(0, 44, 1);
	unk_0xDE1125A413AF241C(0, 3, 1);
	unk_0xDE1125A413AF241C(0, 4, 1);
	unk_0xDE1125A413AF241C(0, 5, 1);
	unk_0xDE1125A413AF241C(0, 6, 1);
	unk_0xDE1125A413AF241C(0, 1, 1);
	unk_0xDE1125A413AF241C(0, 2, 1);
	unk_0xDE1125A413AF241C(0, 39, 1);
	unk_0xDE1125A413AF241C(0, 47, 1);
	unk_0xDE1125A413AF241C(0, 56, 1);
}

void func_78()
{
	Local_86 = { Global_14347[Global_14339 /*3*/] };
	if (Global_14336)
	{
		if (func_81())
		{
			unk_0x2B4380FBF49E1B71(&Local_92);
			Local_86 = { Local_92 };
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		func_1(1);
		if (iLocal_120)
		{
			Local_80.f_0 = (Local_80.f_0 + 12f);
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (unk_0x236D8AD7EE179F46(Global_2266, 4))
		{
			if (Local_80.f_1 < (Local_86.f_1 + 15f) || Local_80.f_1 == (Local_86.f_1 + 15f))
			{
				Local_80.f_1 = (Local_86.f_1 + 15f);
				iLocal_121 = 0;
			}
		}
		else if (Local_80.f_1 < (Local_86.f_1 + 10f) || Local_80.f_1 == (Local_86.f_1 + 10f))
		{
			Local_80.f_1 = (Local_86.f_1 + 10f);
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (func_81() == 0)
		{
			if (unk_0x236D8AD7EE179F46(Global_2266, 4))
			{
				Local_86.f_1 = (Local_86.f_1 + 15f);
			}
			else
			{
				Local_86.f_1 = (Local_86.f_1 + 10f);
			}
			Local_86.f_0 = (Local_86.f_0 - 14f);
		}
		else
		{
			Local_86 = { Global_14340[Global_14339 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		unk_0xB30AC22133A50DEE(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0xA1D5DA13E8B9FEED(Local_83, 0);
			if (!unk_0x236D8AD7EE179F46(Global_2264, 22))
			{
				if (unk_0x236D8AD7EE179F46(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_79();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_79()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x236D8AD7EE179F46(Global_2265, 28))
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 178, 1), "CELL_277");
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
	unk_0x518198639630AE08(fLocal_76);
	unk_0xBA9BA6181F2B6111();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_127(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x236D8AD7EE179F46(Global_2265, 28))
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_140, "SET_DATA_SLOT", 2f, unk_0x2576ED87DB06844F(2, 179, 1), "CELL_287");
		func_61(uLocal_140, "SET_DATA_SLOT", 1f, unk_0x2576ED87DB06844F(2, 178, 1), "CELL_277");
		func_61(uLocal_140, "SET_DATA_SLOT", 0f, unk_0x2576ED87DB06844F(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x21ED0FC9B5CC748B(uLocal_140, "SET_MAX_WIDTH");
	unk_0x518198639630AE08(fLocal_76);
	unk_0xBA9BA6181F2B6111();
	func_127(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (Global_15693 != 2)
						{
						}
					}
				}
			}
		}
		if (func_57(14))
		{
			return 0;
		}
		if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0xA29EEE4B2ABE7AE0())
			{
				if (unk_0x2C237D28F05F0008(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xD496D3841112DF95(unk_0x81873881071CD9FE()) || unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE())) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xE6A0905BBE55E98F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		if (Global_97979)
		{
			return 0;
		}
	}
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA29EEE4B2ABE7AE0()))
	{
		iVar2 = 1;
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if ((((((((unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iVar3)) || unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iVar3))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(iVar3))) || unk_0x14B7103DBD149FFE(iVar3) == joaat("seashark")) || unk_0x14B7103DBD149FFE(iVar3) == joaat("seashark2")) || unk_0x14B7103DBD149FFE(iVar3) == joaat("rhino")) || unk_0x14B7103DBD149FFE(iVar3) == joaat("submersible")) || unk_0x14B7103DBD149FFE(iVar3) == joaat("submersible2")) || unk_0x14B7103DBD149FFE(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2550579 || iVar2 == 1)
	{
		if (unk_0x968BF1C2C695B61A(joaat("apptrackify")) > 0 || Global_98931.f_12665.f_89)
		{
			if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	unk_0xDE1125A413AF241C(0, 47, 1);
	unk_0x89086B596828ACBE(0, Global_14364);
	Local_83 = { Global_14354 };
	Local_86 = { Global_14347[Global_14339 /*3*/] };
	if (func_81())
	{
		unk_0xB62270025DC65D38(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0x2B4380FBF49E1B71(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14336)
	{
		func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_130 = 0;
		if (unk_0x236D8AD7EE179F46(Global_2264, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_83();
		}
		if (iLocal_120)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 9))
			{
				Local_80.f_0 = (Local_80.f_0 + 2f);
			}
			else
			{
				Local_80.f_0 = (Local_80.f_0 + 12f);
			}
		}
		if (Local_80.f_0 > Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
		{
			Local_80.f_0 = Local_86.f_0;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (Local_80.f_1 < Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
		{
			Local_80.f_1 = Local_86.f_1;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (iLocal_122 == 0)
		{
			if (iLocal_117)
			{
				Local_77.f_0 = (Local_77.f_0 + 1f);
			}
			if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
			{
				Local_77.f_0 = Local_83.f_0;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_77.f_1 = (Local_77.f_1 - 2f);
			}
			if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
			{
				Local_77.f_1 = Local_83.f_1;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_77.f_2 = (Local_77.f_2 - 14f);
			}
			if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
			{
				Local_77.f_2 = Local_83.f_2;
				iLocal_119 = 0;
			}
		}
		if (iLocal_125)
		{
			Local_77 = { Local_83 };
			Local_80 = { Local_86 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			if (func_81() == 0)
			{
				unk_0xA1D5DA13E8B9FEED(Local_77, 0);
				unk_0xB30AC22133A50DEE(Local_80);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0xA1D5DA13E8B9FEED(Local_77, 0);
			unk_0xB30AC22133A50DEE(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_83();
		}
	}
	else
	{
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 + 1f);
		}
		if (Local_77.f_0 > Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 2f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 - 7f);
		}
		if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_83();
		}
	}
	unk_0xA1D5DA13E8B9FEED(Local_77, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 30))
		{
			unk_0xB30AC22133A50DEE(Global_14340[Global_14339 /*3*/]);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14347[Global_14339 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0xA1D5DA13E8B9FEED(Local_77, 0);
	}
	Global_16726 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_114 = 0;
	func_92();
	Global_14381 = 1;
	Global_16729 = 0;
	if (Global_14394.f_1 > 4)
	{
		Global_14394.f_1 = 6;
		Global_14372 = 1;
		func_84();
	}
	if (unk_0xCC8E3BAC62A29F42(uLocal_139))
	{
		func_126(uLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xF4753D4FA13FFE6E();
	unk_0x4B6F01DE8CCE643E(&uLocal_140);
	unk_0x4B6F01DE8CCE643E(&uLocal_139);
	if (Global_14554 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 17);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 18);
	unk_0xC69E84EBBD7166E6(&Global_2264, 21);
	unk_0x88BC2C534DB4793B(0, 1);
	unk_0xC69E84EBBD7166E6(&Global_2266, 3);
	unk_0xC69E84EBBD7166E6(&Global_2550377, 3);
	unk_0xD338B0444EFB8C65(0);
	unk_0x4840077BEC3BAAF9(unk_0x1329891157A54C63(), 1);
	unk_0x5547446287DE314B(15);
	Global_16730 = 1;
	unk_0x98A5E5B909F1B162(iLocal_111);
	unk_0x54206B7CE6FF2360(iLocal_111);
	unk_0x81B3DBD3862D4A7D();
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0xEB9703C490E987A4(unk_0x81873881071CD9FE(), "Mood_Normal_1", 0);
		unk_0xCAEF57FEF56247F2(unk_0x81873881071CD9FE());
	}
	func_92();
	unk_0x556EAA62E8081219(0);
	unk_0xC84FF0CCAD3DA347(0);
	unk_0x578A1DE3F51B581A(1f);
	if (Global_2549102 > 0 && Global_2549102 < 13)
	{
		unk_0x9B331DCFDFC55491(sLocal_32[Global_2549102]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_63, 1))
	{
		iLocal_63 = 0;
	}
	unk_0xC23A229F78DAD92A();
}

void func_84()
{
	struct<3> Var0;
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2869);
			if (Global_2869 == 1)
			{
				func_127(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_127(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (Global_69020)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_87(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_87(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_87(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_87(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_86();
				func_127(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0xBA9BA6181F2B6111();
				}
				else if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_217", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
				func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_127(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0xBA9BA6181F2B6111();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), &Var0, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
		else
		{
			func_87(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_86()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2550577)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_58(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_57(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_58(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_87(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_89()
{
	switch (iLocal_99)
	{
		case 1:
			unk_0x88BC2C534DB4793B(0, 1);
			if (unk_0x236D8AD7EE179F46(Global_2264, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_2264, 22))
			{
				unk_0x88BC2C534DB4793B(0, 1);
				if (unk_0x236D8AD7EE179F46(Global_2264, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_79();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_90(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_91(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if ((Global_1607808.f_77119 == 0 && Global_1607808.f_77120 == 0) && Global_1708460 == 0)
	{
		unk_0x89D15E63F65D1047();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1607808.f_77119 == 1)
	{
	}
	else if (Global_1607808.f_77120 == 1)
	{
	}
	else
	{
		unk_0x02FA139D19E0091E(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0x236D8AD7EE179F46(Global_2264, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, uParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, iParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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

void func_96()
{
	if (Global_14336)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_81())
		{
			unk_0xB62270025DC65D38(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0x2B4380FBF49E1B71(&Local_92);
			Local_86 = { Local_92 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		if (iLocal_119 == 0)
		{
			if (iLocal_120)
			{
				Local_80.f_0 = (Local_80.f_0 - 14f);
			}
			if (Local_80.f_0 < Local_86.f_0 || Local_80.f_0 == Local_86.f_0)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_80.f_1 = (Local_80.f_1 + 7f);
			}
			if (Local_80.f_1 > Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_80.f_2 = (Local_80.f_2 + 12f);
			}
			if (Local_80.f_2 > Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
			{
				iLocal_122 = 0;
			}
		}
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			Local_77.f_0 = Local_83.f_0;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 0.5f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			Local_77.f_1 = Local_83.f_1;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 11f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			Local_77.f_2 = Local_83.f_2;
			iLocal_119 = 0;
		}
		if (func_81() == 0)
		{
			unk_0xA1D5DA13E8B9FEED(Local_77, 0);
			unk_0xB30AC22133A50DEE(Local_80);
		}
	}
	else
	{
		Local_83 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_117)
		{
			Local_77.f_0 = (Local_77.f_0 - 1f);
		}
		if (Local_77.f_0 < Local_83.f_0 || Local_77.f_0 == Local_83.f_0)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 + 2f);
		}
		if (Local_77.f_1 > Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 7f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		unk_0xA1D5DA13E8B9FEED(Local_77, 0);
	}
	if (Global_14336)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_81())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				unk_0xA1D5DA13E8B9FEED(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0xB30AC22133A50DEE(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16727 = 0;
				func_93(1, 1);
				iLocal_114 = 1;
				func_97(1);
				func_55();
				func_98();
				func_53(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_105();
				func_127(uLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
				{
					func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		unk_0xA1D5DA13E8B9FEED(Local_77, 0);
		Global_16727 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_135())
	{
		if (bParam0)
		{
			if (!unk_0xD5E9356EFEA62A9E())
			{
				unk_0xA84AB62F4FA7C252(1);
				if (Global_2549102 > 0 && Global_2549102 < 99)
				{
					unk_0x2D2E181BDA90DA66(sLocal_32[Global_2549102], 0);
					unk_0x578A1DE3F51B581A(0.25f);
				}
			}
		}
		else if (unk_0xD5E9356EFEA62A9E())
		{
			unk_0xA84AB62F4FA7C252(0);
		}
	}
}

void func_98()
{
	if (Global_2549101 > 0 && Global_2549101 < 99)
	{
		if (Global_1708460 == 0)
		{
			unk_0xE0BB456359144BD6(sLocal_18[Global_2549101]);
		}
	}
}

void func_99()
{
	if (Global_14336)
	{
		iLocal_124 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_114 = 1;
		Global_16730 = 1;
	}
}

void func_100()
{
	if (iLocal_126 == 0)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0xD994929E13CC1ED5(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}

void func_101()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Back", &Global_14383, 1);
	}
}

void func_102()
{
	unk_0xA83C089540B6E947(0, 0);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_103()
{
	func_104();
}

void func_104()
{
	if (iLocal_150)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_150 = 0;
		}
	}
	if (iLocal_150 == 0)
	{
	}
}

void func_105()
{
	if (Global_14394.f_1 > 3)
	{
		if (!unk_0xDB10DED5ABC4AA20())
		{
			unk_0xD45896EF84BD41C8(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_106()
{
	if (func_57(14))
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
		Global_14394 = func_11();
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

void func_107(int iParam0)
{
	if (Global_14552)
	{
		func_90(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_108())
	{
		Global_14394.f_1 = 3;
	}
}

int func_108()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	unk_0xDE1125A413AF241C(0, 0, 1);
	unk_0xDE1125A413AF241C(0, 56, 1);
	if (iLocal_149 == 0)
	{
		unk_0x89086B596828ACBE(0, Global_14367);
		unk_0x89086B596828ACBE(0, Global_14364);
		unk_0xDE1125A413AF241C(0, 278, 1);
		unk_0xDE1125A413AF241C(0, 279, 1);
		unk_0xDE1125A413AF241C(0, 280, 1);
		unk_0xDE1125A413AF241C(0, 281, 1);
		unk_0xDE1125A413AF241C(0, 282, 1);
		unk_0xDE1125A413AF241C(0, 282, 1);
		unk_0xDE1125A413AF241C(0, 284, 1);
		unk_0xDE1125A413AF241C(0, 285, 1);
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 114, 1);
		unk_0xDE1125A413AF241C(0, 71, 1);
		unk_0xDE1125A413AF241C(0, 72, 1);
		unk_0xDE1125A413AF241C(0, 74, 1);
		unk_0xDE1125A413AF241C(0, 75, 1);
		unk_0xDE1125A413AF241C(0, 76, 1);
		unk_0xDE1125A413AF241C(0, 73, 1);
		unk_0xDE1125A413AF241C(0, 77, 1);
		unk_0xDE1125A413AF241C(0, 78, 1);
		unk_0xDE1125A413AF241C(0, 286, 1);
		unk_0xDE1125A413AF241C(0, 287, 1);
		unk_0xDE1125A413AF241C(0, 79, 1);
		unk_0xDE1125A413AF241C(0, 80, 1);
		unk_0xDE1125A413AF241C(0, 81, 1);
		unk_0xDE1125A413AF241C(0, 82, 1);
		unk_0xDE1125A413AF241C(0, 86, 1);
		unk_0xDE1125A413AF241C(0, 59, 1);
		unk_0xDE1125A413AF241C(0, 60, 1);
		unk_0xDE1125A413AF241C(0, 61, 1);
		unk_0xDE1125A413AF241C(0, 62, 1);
		unk_0xDE1125A413AF241C(0, 63, 1);
		unk_0xDE1125A413AF241C(0, 64, 1);
		unk_0xDE1125A413AF241C(0, 87, 1);
		unk_0xDE1125A413AF241C(0, 88, 1);
		unk_0xDE1125A413AF241C(0, 89, 1);
		unk_0xDE1125A413AF241C(0, 90, 1);
		unk_0xDE1125A413AF241C(0, 107, 1);
		unk_0xDE1125A413AF241C(0, 108, 1);
		unk_0xDE1125A413AF241C(0, 109, 1);
		unk_0xDE1125A413AF241C(0, 110, 1);
		unk_0xDE1125A413AF241C(0, 111, 1);
		unk_0xDE1125A413AF241C(0, 112, 1);
		unk_0xDE1125A413AF241C(0, 113, 1);
		unk_0xDE1125A413AF241C(0, 114, 1);
		unk_0xDE1125A413AF241C(0, 91, 1);
		unk_0xDE1125A413AF241C(0, 92, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
		unk_0xDE1125A413AF241C(0, 102, 1);
		unk_0xDE1125A413AF241C(0, 136, 1);
		unk_0xDE1125A413AF241C(0, 137, 1);
		unk_0xDE1125A413AF241C(0, 138, 1);
		unk_0xDE1125A413AF241C(0, 139, 1);
		unk_0xDE1125A413AF241C(0, 102, 1);
	}
}

int func_110()
{
	var uVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0xBEB00EB4ADDC2A33(uVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xB0B9E53CEFDB16AA(uVar0, -1) == unk_0x81873881071CD9FE())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111()
{
	bool bVar0;
	
	func_118(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_112()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()
{
	switch (func_113())
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

int func_113()
{
	return Global_24946;
}

bool func_114()
{
	return Global_2428865.f_573;
}

int func_115(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2436988;
}

bool func_117()
{
	return Global_2428865.f_568;
}

void func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_119(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_121(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(iVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					iVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(iVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_120(iVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xA89AE5060232966A(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_122()
{
	if (iLocal_155 == 1)
	{
		unk_0xC9A352663D97EFC3(7);
		unk_0xC9A352663D97EFC3(1);
		unk_0xC9A352663D97EFC3(3);
		unk_0xC9A352663D97EFC3(4);
		unk_0xC9A352663D97EFC3(6);
		unk_0xC9A352663D97EFC3(8);
		unk_0xC9A352663D97EFC3(9);
		unk_0xC9A352663D97EFC3(2);
	}
	else
	{
		unk_0xD61D5795530D0627();
	}
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_124()
{
	if (func_125())
	{
		unk_0x90A9820101725170();
		if (unk_0xF38543B560B70CE2(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16730 = 1;
			Global_14394.f_1 = 3;
			unk_0x81B3DBD3862D4A7D();
		}
	}
	else
	{
		iLocal_108 = 0;
		iLocal_109 = 0;
		if (iLocal_103 == 1)
		{
			if (iLocal_126 == 0)
			{
				if (unk_0xCC8E3BAC62A29F42(uLocal_139))
				{
					if (func_135())
					{
						if (Global_2549102 == 0)
						{
							if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
							{
								func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(Global_2550377, 2))
						{
							func_127(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xCC8E3BAC62A29F42(uLocal_139))
			{
				func_127(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0x81B3DBD3862D4A7D();
	}
}

int func_125()
{
	if (Global_1607808.f_77119 == 1)
	{
		if (Global_69020)
		{
			return 0;
		}
	}
	if (Global_1607808.f_77120 == 1)
	{
		if (Global_69020)
		{
			return 0;
		}
	}
	if (unk_0x9800AF1CCAFA4639() || unk_0x211AF631627DE2C5())
	{
		if (unk_0x236D8AD7EE179F46(Global_2265, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

int func_128()
{
	if (Global_69020)
	{
		Global_14394 = 3;
	}
	else
	{
		Global_14394 = func_11();
	}
	if (Global_14394 > 3)
	{
		Global_14394 = 3;
	}
	return Global_98931.f_12665[Global_14394 /*20*/].f_7;
}

void func_129()
{
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 8;
	}
	Global_16729 = 0;
	iLocal_126 = 0;
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		Local_66 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (Global_14336)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_105();
			func_77();
			unk_0xF4753D4FA13FFE6E();
		}
		func_126(uLocal_139, "OPEN_SHUTTER");
		func_122();
		func_100();
		iLocal_128 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_93(1, 1);
		func_97(1);
		func_55();
		func_98();
		func_53(0);
		iLocal_114 = 1;
	}
}

void func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 15);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 15);
	}
}

bool func_131()
{
	return Global_1315867;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && bParam2)
		{
			unk_0xCC69602716E0A325(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0x603F76C0CB05572F(unk_0x81873881071CD9FE()))
		{
			unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
			unk_0xB647DF0474492B8E(fLocal_156);
			unk_0x5AD060E0F6114BB0(fLocal_157);
			unk_0x1BB2A0D7C94ADF08(fLocal_158);
		}
		else
		{
			unk_0xB647DF0474492B8E(fLocal_156);
			unk_0x5AD060E0F6114BB0(fLocal_157);
			unk_0x1BB2A0D7C94ADF08(fLocal_158);
		}
	}
	unk_0x98C350F66282A7E3(fLocal_159);
	unk_0x8421BE2955EBF558(fLocal_160);
	unk_0xDB513F9A2BD6177C(fLocal_161);
	unk_0x63594E43DB7F9B98(fLocal_162);
	func_52();
}

int func_135()
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}

