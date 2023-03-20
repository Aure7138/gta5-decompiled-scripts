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
	int iLocal_139 = 0;
	int iLocal_140 = 0;
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
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
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
	fLocal_76 = 1f;
	iLocal_136 = 1200;
	iLocal_137 = 1200;
	iLocal_138 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	unk_0x9243BAC96D64C050();
	if (!func_132())
	{
		Global_2542262 = 99;
		Global_2542263 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2542262 = 0;
		Global_2542263 = 0;
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
	func_131();
	if (func_130(1, 1, !iLocal_63))
	{
		iLocal_63 = 1;
	}
	func_129();
	iLocal_111 = unk_0x430386FE9BF80B45();
	if (Global_14338 == 0)
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
	Global_16725 = 0;
	Global_16726 = 0;
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x460BC76A0E10655E(unk_0xD80958FC74E988A6()))
		{
			Global_16725 = 1;
		}
		if (unk_0x2202A3F42C8E5F79())
		{
			Global_16725 = 1;
		}
		if (unk_0x4C241E39B23DF959(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()), false))
		{
			Global_16725 = 1;
		}
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
		{
			Global_16725 = 1;
		}
		if (unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6()))
		{
			Global_16725 = 1;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (iLocal_130 == 1)
			{
				Global_16725 = 1;
			}
			iLocal_148 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if ((unk_0x9F47B058362C84B5(iLocal_148) == joaat("rhino") || unk_0x9F47B058362C84B5(iLocal_148) == joaat("cutter")) || unk_0x9F47B058362C84B5(iLocal_148) == joaat("submersible"))
			{
				Global_16725 = 1;
			}
			else if (unk_0xBB40DD2270B65366(iLocal_148, -1) == unk_0xD80958FC74E988A6())
			{
				if (unk_0x95EED5A694951F9F(iLocal_148) > 0f)
				{
					if (!Global_68067)
					{
						if (!func_128())
						{
							unk_0xC429DCEEB339E129(unk_0xD80958FC74E988A6(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68067)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), false);
		}
	}
	unk_0xE80492A9AC099A93(&Global_2263, 21);
	func_127(0);
	unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
	if (Global_14335 == 0)
	{
		func_126();
	}
	else
	{
		iLocal_139 = unk_0x11FE353CF9733E6F("camera_gallery");
		iLocal_140 = unk_0x11FE353CF9733E6F("instructional_buttons");
		while (!unk_0x85F01B8D5B90570E(iLocal_139) || !unk_0x85F01B8D5B90570E(iLocal_140))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0xFE99B66D079CF6BC(0, 25, true);
		}
		if (Global_68067)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_125())
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
		func_124(iLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		func_123(iLocal_139, "CLOSE_SHUTTER");
		unk_0xF6E48914C7A8694E(Global_14374, "DISPLAY_VIEW");
		unk_0xC3D0841A0CC546A6(16);
		unk_0xC6796A8FFA375E53();
	}
	Local_77 = { Global_14353 };
	Local_80 = { Global_14346[Global_14338 /*3*/] };
	Global_16726 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		unk_0xE80492A9AC099A93(&Global_2265, 3);
	}
	func_121();
	unk_0x61BB1D9B3A95D802(4);
	if (unk_0x76BF03FADBF154F5())
	{
	}
	if (Global_1601761.f_68109)
	{
	}
	if (unk_0x30CF4BDA4FCB1905())
	{
		fLocal_76 = 1f;
	}
	else
	{
		fLocal_76 = 1f;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xEB2D525B57F42B40();
		unk_0xFE99B66D079CF6BC(0, 25, true);
		unk_0xFE99B66D079CF6BC(0, 0, true);
		if (!Global_97173.f_12272.f_81)
		{
			if (!unk_0xA921AA820C25702F(Global_2543537, 13))
			{
				if (!unk_0x4D79439A6B55AC67())
				{
					if (!unk_0xA921AA820C25702F(Global_2264, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							unk_0x933D6A9EEC1BACD0(&Global_2543537, 13);
							Global_97173.f_12272.f_81 = 1;
							func_120("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xB0034A223497FFCB())
		{
			if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
			}
			unk_0x6806C51AD12B83B8(7);
			unk_0x719FF505F097FD20();
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 200, true);
			}
			unk_0xFE99B66D079CF6BC(0, 44, true);
			unk_0xFE99B66D079CF6BC(0, 47, true);
			unk_0xFE99B66D079CF6BC(0, 91, true);
			unk_0xFE99B66D079CF6BC(0, 92, true);
			if (iLocal_149 == 0)
			{
				unk_0xEDE476E5EE29EDB1(0, Global_14366);
			}
			unk_0xEDE476E5EE29EDB1(0, Global_14363);
			if (unk_0xB16FCE9DDC7BA182() || unk_0x797AC7CB535BA28F())
			{
				iLocal_129 = 1;
				Global_14393.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (unk_0x7A3F19700A4D0525())
			{
				Global_14393.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (unk_0xA921AA820C25702F(Global_2264, 3))
			{
				Global_14393.f_1 = 3;
				unk_0x577D1284D6873711(false);
			}
			if (unk_0x10FAB35428CCC9D7())
			{
				if (func_109())
				{
					Global_14393.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
				{
					Global_14393.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
				if ((unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_14393.f_1 = 3;
						unk_0x577D1284D6873711(false);
					}
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					if (Global_68067 == 1)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xE81AFC1BC4CC41CE(unk_0xD80958FC74E988A6()) > 0.3f)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					func_107();
					iLocal_148 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x95EED5A694951F9F(iLocal_148) < 0f)
					{
						func_105(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!unk_0x1F2300CB7FA7B7F6())
							{
								func_105(0);
							}
						}
						else if (!unk_0x1F2300CB7FA7B7F6())
						{
							iLocal_115 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_68067 == 0)
				{
					if (unk_0xA921AA820C25702F(Global_2263, 18))
					{
						func_104();
						if ((Global_14393 == 0 || Global_14393 == 1) || Global_14393 == 2)
						{
							if (!unk_0x2AFE52F782F25775(unk_0xD80958FC74E988A6()))
							{
								if (unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
								{
								}
								else
								{
									Global_14393.f_1 = 3;
									unk_0x577D1284D6873711(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_103();
			}
			if (Global_14393.f_1 < 4)
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
							if (Global_14393.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_101();
									if (Global_16730 == 0 && Global_16727 == 6)
									{
										unk_0x50085246ABD3FEFA(0, true);
										unk_0x10D373323E5B9C0D();
										iLocal_149 = 0;
										func_100();
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
										{
											Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
										}
										func_99();
										iLocal_108++;
										if (func_132())
										{
											func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
									}
									if (Global_16727 == 0)
									{
										iLocal_149 = 0;
										unk_0x10D373323E5B9C0D();
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
										{
											Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
										}
										func_97();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
										if (func_132())
										{
											if (Global_2542263 == 0)
											{
												if (!unk_0xA921AA820C25702F(Global_2543537, 2))
												{
													func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xA921AA820C25702F(Global_2543537, 2))
										{
											func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_96();
										func_95(1);
									}
								}
								else if (Global_14393.f_1 != 9)
								{
									if (Global_16726 == 1)
									{
										if (Global_16725 == 0)
										{
											func_94();
										}
									}
									else if ((Global_2871 - Global_2870) > Global_2872)
									{
										if (func_93(2, Global_14361, 0))
										{
											if (func_92() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												unk_0x577D1284D6873711(false);
												unk_0xA3B0C41BA5CC0BB5(iLocal_111);
												iLocal_142 = 0;
												if (Global_16725 == 0)
												{
													func_99();
													Global_16725 = 1;
													unk_0x50085246ABD3FEFA(0, true);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_91(0, 0);
													func_95(0);
													iLocal_114 = 0;
													func_90();
													iLocal_141 = 0;
													func_88(0, 1);
													func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (unk_0x4D79439A6B55AC67())
										{
											func_87();
											iLocal_100 = 1;
										}
									}
									else if (!unk_0x4D79439A6B55AC67())
									{
										func_87();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (unk_0xA921AA820C25702F(Global_2263, 28))
										{
											func_87();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0xA921AA820C25702F(Global_2263, 28))
									{
										func_87();
										iLocal_101 = 0;
									}
									if (Global_16725 == 1)
									{
										func_80();
									}
									else if (Global_14393.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_76();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_97();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
												{
													if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
													{
														func_123(iLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = unk_0x9CD27B0045628463();
														while (unk_0x9CD27B0045628463() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
														{
															unk_0x719FF505F097FD20();
															func_103();
															func_75();
															unk_0xEB2D525B57F42B40();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_2542263 == 0)
													{
														if (!unk_0xA921AA820C25702F(Global_2543537, 2))
														{
															func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xA921AA820C25702F(Global_2543537, 2))
												{
													func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												unk_0x719FF505F097FD20();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_98();
												iLocal_135 = 0;
												func_123(iLocal_139, "OPEN_SHUTTER");
											}
											func_96();
											func_95(1);
											func_74();
										}
									}
									if (iLocal_142 == 1)
									{
										func_71();
									}
									if (iLocal_128)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											unk_0x933D6A9EEC1BACD0(&Global_2263, 18);
											if (Global_16725 == 0)
											{
												func_88(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16725 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16728 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_75();
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
					if (Global_14393.f_1 > 3)
					{
						if (Global_16726 == 1)
						{
							if (Global_16725 == 0)
							{
								func_94();
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
					if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (unk_0x48AF36444B965238())
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
					iVar0 = unk_0x9614B71F8ADB982B();
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
					if (unk_0x580417101DDB492F(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
					}
					if (unk_0x580417101DDB492F(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (unk_0x50F940259D3841E6(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_153 = 0;
							unk_0x9E778248D6685FE0("Gallery");
							unk_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (unk_0xA72BC0B675B1519E())
					{
						if (unk_0x580417101DDB492F(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (unk_0x580417101DDB492F(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						func_88(0, 1);
						iLocal_110 = 0;
					}
					if (!unk_0xA72BC0B675B1519E())
					{
						if (unk_0x580417101DDB492F(2, Global_14365))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							func_88(0, 1);
							if (unk_0xA921AA820C25702F(Global_2264, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = unk_0x9CD27B0045628463();
							unk_0x94DD7888C10A979E(true);
						}
					}
				}
				else if (unk_0x580417101DDB492F(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					func_88(0, 1);
				}
			}
		}
		iLocal_107 = unk_0x9CD27B0045628463();
		if (func_3() || iLocal_129)
		{
			func_1(0);
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			Global_16725 = 0;
			Global_16726 = 0;
			Global_16728 = 0;
			unk_0x1D132D614DD86811(&iLocal_139);
			unk_0x1D132D614DD86811(&iLocal_140);
			unk_0x577D1284D6873711(false);
			if (Global_14553 == 1)
			{
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
			}
			else
			{
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			unk_0x50085246ABD3FEFA(0, true);
			unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xE80492A9AC099A93(&Global_2265, 3);
			unk_0xE80492A9AC099A93(&Global_2543537, 3);
			unk_0x450930E616475D0D(15);
			Global_16729 = 1;
			unk_0xA3B0C41BA5CC0BB5(iLocal_111);
			unk_0x353FC880830B88FA(iLocal_111);
			unk_0x10D373323E5B9C0D();
			func_90();
			unk_0xA2CCBE62CD4C91A4(false);
			unk_0x1B0B4AEED5B9B41C(1f);
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
				unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
			}
			if (Global_2542263 > 0 && Global_2542263 < 13)
			{
				unk_0xBE2CACCF5A8AA805(sLocal_32[Global_2542263]);
			}
			unk_0xE80492A9AC099A93(&Global_2263, 18);
			func_88(0, 1);
			if (func_130(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			unk_0x1090044AD1DA76FA();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x44E44169EF70138E(true);
		}
		else if (Global_14393.f_1 > 3)
		{
			unk_0x44E44169EF70138E(false);
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2543736 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_105 = unk_0xF5BED327CEA362B1(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = unk_0x473151EBC762C6DA();
			iLocal_109 = unk_0xDC54A7AF8B3A14EF();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (unk_0x85F01B8D5B90570E(iLocal_139))
					{
						if (func_132())
						{
							if (Global_2542263 == 0)
							{
								if (!unk_0xA921AA820C25702F(Global_2543537, 2))
								{
									func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xA921AA820C25702F(Global_2543537, 2))
							{
								func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x85F01B8D5B90570E(iLocal_139))
				{
					func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			unk_0x10D373323E5B9C0D();
			break;
		
		case 1:
			if (!unk_0xD422FCC5F239A915())
			{
				unk_0xABA17D7CE615ADBF("CELL_SPINNER2");
				unk_0xBD12F8228410D9B4(1);
			}
			break;
		
		case 2:
			if (unk_0xA921AA820C25702F(Global_2264, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14393.f_1 = 3;
				Global_16729 = 1;
			}
			unk_0x10D373323E5B9C0D();
			break;
	}
}

void func_5()
{
	if (func_93(2, Global_14362, 0))
	{
		func_1(0);
		if (unk_0xA921AA820C25702F(Global_2264, 28))
		{
			unk_0x577D1284D6873711(false);
			unk_0x5AE11BC36633DE4E(0);
			func_100();
			iLocal_126 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_99();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (unk_0xA921AA820C25702F(Global_2264, 14))
			{
				func_120("CELL_299", -1);
			}
			else
			{
				func_99();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			func_88(1, 1);
		}
	}
	if (unk_0xA921AA820C25702F(Global_2263, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x719FF505F097FD20();
			unk_0xEB2D525B57F42B40();
			func_75();
			func_107();
			func_103();
		}
		unk_0x577D1284D6873711(false);
		func_100();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_126 = 0;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
		}
		func_98();
		func_99();
	}
	if (func_93(2, Global_14366, 0))
	{
		func_1(0);
		if (func_92() || unk_0xA921AA820C25702F(Global_2264, 28))
		{
		}
		else
		{
			unk_0x577D1284D6873711(false);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_135 = 1;
			func_100();
			iLocal_126 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_99();
		}
	}
	if (unk_0xA921AA820C25702F(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			func_1(0);
			unk_0x577D1284D6873711(false);
			unk_0x1072F115DAB0717E(false, false);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0x719FF505F097FD20();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0x719FF505F097FD20();
			unk_0xD801CC02177FA3F1();
			unk_0x6A12D88881435DCA();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			func_88(0, 1);
			Global_16725 = 1;
			unk_0x50085246ABD3FEFA(0, true);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0x933D6A9EEC1BACD0(&Global_2263, 9);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Accept", &Global_14382, true);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0x95C9E72F3D7DEC9B(5);
	}
}

void func_8()
{
	iLocal_149 = 1;
	Global_16730 = 1;
	unk_0x50085246ABD3FEFA(0, true);
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
	if (Global_14393.f_1 < 4)
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
	
	if (unk_0xA571D46727E2B718(2))
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
		func_66();
		func_62();
		func_61();
		fLocal_72 = unk_0x3A6867B4845BEDA2();
		fLocal_73 = unk_0x743607648ADD4587();
		if (iLocal_132 == 0)
		{
			if (unk_0xF3A21BCD95725A4A(2, iVar0) && !unk_0xF3A21BCD95725A4A(2, iVar1))
			{
				iLocal_132 = 1;
				func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xA921AA820C25702F(Global_2263, 28))
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), "CELL_287");
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
					func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_58();
				unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
				unk_0xD69736AAE04DB51A(fLocal_76);
				unk_0xC6796A8FFA375E53();
				func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF3A21BCD95725A4A(2, iVar0) || unk_0xF3A21BCD95725A4A(2, iVar1))
		{
			iLocal_132 = 0;
			func_98();
		}
		if (iLocal_133 == 0)
		{
			if (unk_0xF3A21BCD95725A4A(2, iVar1) && !unk_0xF3A21BCD95725A4A(2, iVar0))
			{
				iLocal_133 = 1;
				func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xA921AA820C25702F(Global_2263, 28))
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
					func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), "CELL_287");
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
					func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
				}
				func_57();
				unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
				unk_0xD69736AAE04DB51A(fLocal_76);
				unk_0xC6796A8FFA375E53();
				func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0xF3A21BCD95725A4A(2, iVar1) || unk_0xF3A21BCD95725A4A(2, iVar0))
		{
			iLocal_133 = 0;
			func_98();
		}
	}
	else
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
	if (unk_0x6CD79468A1E595C6(2))
	{
		func_98();
	}
	func_107();
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 200, true);
	}
	if (unk_0x580417101DDB492F(2, 183))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (unk_0xA921AA820C25702F(Global_2543537, 2))
				{
					unk_0xE80492A9AC099A93(&Global_2543537, 2);
					if (!unk_0xA921AA820C25702F(Global_2543537, 2))
					{
						func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0x933D6A9EEC1BACD0(&Global_2543537, 2);
					func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			unk_0xF6E48914C7A8694E(iLocal_139, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(false);
			func_56("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
		if (!func_55(14))
		{
			if (unk_0xA921AA820C25702F(Global_2543537, 10))
			{
				if ((Global_68067 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_54())
				{
					unk_0xF6E48914C7A8694E(iLocal_139, "SET_FOCUS_LOCK");
					unk_0xC58424BA936EB458(true);
					unk_0x80338406F3475E55("CELL_ACTTL");
					unk_0x6C188BE134E074AA(unk_0x7B5280EBA9840C72(&Global_2544225));
					unk_0x362E2D3FE93A9959();
					unk_0xC58424BA936EB458(false);
					unk_0xC6796A8FFA375E53();
					unk_0xE80492A9AC099A93(&Global_2543537, 10);
				}
			}
		}
		else if (unk_0xA921AA820C25702F(Global_2543537, 10))
		{
			unk_0xE80492A9AC099A93(&Global_2543537, 10);
		}
		iLocal_65 = unk_0x9CD27B0045628463();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Local_69 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				if (unk_0xF1B760881820C952(Local_69, Local_66, true) > 5f)
				{
					Global_14393.f_1 = 3;
					unk_0x577D1284D6873711(false);
				}
				iLocal_64 = unk_0x9CD27B0045628463();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!unk_0xF3A21BCD95725A4A(0, 182))
		{
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
			iLocal_131 = 0;
			unk_0xF6E48914C7A8694E(iLocal_139, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(false);
			func_56("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
	}
	else if (unk_0xF3A21BCD95725A4A(0, 182))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
		iLocal_131 = 1;
		if (!func_55(14))
		{
			unk_0xF6E48914C7A8694E(iLocal_139, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(true);
			func_56("CELL_FOCUS");
			unk_0xC58424BA936EB458(true);
			unk_0xC6796A8FFA375E53();
		}
	}
	if (func_132())
	{
		if (unk_0x580417101DDB492F(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
					{
						unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
						unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
						unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
						if (Global_14393 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x898CC20EA75BACD8(unk_0xD80958FC74E988A6(), 1);
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
											unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
					{
						unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
						unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
						unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
					}
				}
			}
		}
		if (unk_0x580417101DDB492F(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						if (unk_0x0C515FAB3FF9EA92(sLocal_18[Global_2542262], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xA2CCBE62CD4C91A4(true);
						}
					}
					else
					{
						iLocal_60 = 0;
						unk_0xA2CCBE62CD4C91A4(false);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
				}
				else
				{
					iLocal_59 = 0;
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (unk_0x580417101DDB492F(0, 172))
		{
			if (func_132())
			{
				Global_2542263++;
				unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
			}
			if (Global_2542263 == 13)
			{
				func_95(0);
				unk_0x1B0B4AEED5B9B41C(1f);
				unk_0xBE2CACCF5A8AA805(sLocal_32[(Global_2542263 - 1)]);
				Global_2542263 = 0;
				func_53();
				if (iLocal_46 == 1)
				{
					unk_0xE80492A9AC099A93(&Global_2543537, 2);
					iLocal_46 = 0;
					func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2542263 > 0 && Global_2542263 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				unk_0xDFA2EF8E04127DD5(sLocal_32[Global_2542263], false);
			}
		}
	}
	if (Global_2542263 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (unk_0x0145F696AAAAD2E4(sLocal_32[Global_2542263]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!unk_0xBCEDB009461DA156())
				{
					func_95(1);
				}
				if (iLocal_46 == 0)
				{
					if (!unk_0xA921AA820C25702F(Global_2543537, 2))
					{
						iLocal_46 = 1;
					}
				}
				unk_0x933D6A9EEC1BACD0(&Global_2543537, 2);
				func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x1B0B4AEED5B9B41C(0.25f);
				unk_0x27FEB5254759CDE3(sLocal_32[Global_2542263], false);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2542263 == 1 || Global_2542263 == 3)
			{
			}
			if (Global_2542263 == 2 || Global_2542263 == 4)
			{
			}
		}
	}
	if (unk_0x580417101DDB492F(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_2542262++;
			unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
		}
		if (Global_2542262 == 13)
		{
			Global_2542262 = 0;
		}
		if (Global_2542262 == 0)
		{
			if (func_132())
			{
				func_90();
			}
		}
		else
		{
			func_96();
		}
		func_52();
	}
	if (unk_0x91AEF906BCA88877(0, 184))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
				unk_0x67C540AA08E4A6F5(-1, "Menu_Navigate", &Global_14382, true);
				func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_123(iLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = unk_0x9CD27B0045628463();
				while (unk_0x9CD27B0045628463() < (iLocal_134 + iLocal_138) && Global_14393.f_1 > 3)
				{
					unk_0x719FF505F097FD20();
					func_103();
					func_75();
					unk_0xEB2D525B57F42B40();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_130 == 0)
				{
					iLocal_59 = 0;
					unk_0xA3B0C41BA5CC0BB5(iLocal_111);
					iLocal_130 = 1;
					func_51(1);
					func_50();
					unk_0x933D6A9EEC1BACD0(&Global_2265, 3);
					iLocal_64 = unk_0x9CD27B0045628463();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_51(0);
					iLocal_130 = 0;
					unk_0xE80492A9AC099A93(&Global_2265, 3);
				}
				iLocal_134 = unk_0x9CD27B0045628463();
				while (unk_0x9CD27B0045628463() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
				{
					unk_0x719FF505F097FD20();
					func_103();
					func_75();
					unk_0xEB2D525B57F42B40();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_123(iLocal_139, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_2542263 == 0)
					{
						if (!unk_0xA921AA820C25702F(Global_2543537, 2))
						{
							func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xA921AA820C25702F(Global_2543537, 2))
				{
					func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				unk_0x719FF505F097FD20();
				if (unk_0xA921AA820C25702F(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_49();
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
			if (unk_0x580417101DDB492F(0, 40) || unk_0x580417101DDB492F(0, 41))
			{
				fLocal_113 = unk_0x7EC52CC40597D170();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (unk_0xFCBDCE714A7C88E5(iLocal_111))
					{
						unk_0x67C540AA08E4A6F5(iLocal_111, "Camera_Zoom", &Global_14382, true);
					}
				}
				else
				{
					unk_0xA3B0C41BA5CC0BB5(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (unk_0xF3A21BCD95725A4A(0, 40) || unk_0xF3A21BCD95725A4A(0, 41))
		{
			fLocal_113 = unk_0x7EC52CC40597D170();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (unk_0xFCBDCE714A7C88E5(iLocal_111))
				{
					unk_0x67C540AA08E4A6F5(iLocal_111, "Camera_Zoom", &Global_14382, true);
				}
			}
			else
			{
				unk_0xA3B0C41BA5CC0BB5(iLocal_111);
			}
		}
		else
		{
			unk_0xA3B0C41BA5CC0BB5(iLocal_111);
		}
	}
	if (func_93(2, Global_14362, 0))
	{
		fLocal_74 = unk_0x3A6867B4845BEDA2();
		fLocal_75 = unk_0x743607648ADD4587();
		unk_0x1072F115DAB0717E(false, false);
		unk_0x933D6A9EEC1BACD0(&Global_2263, 21);
		unk_0xA3B0C41BA5CC0BB5(iLocal_111);
		iLocal_126 = 1;
		func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(iLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x67C540AA08E4A6F5(-1, "Camera_Shoot", &Global_14382, true);
		func_123(iLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		unk_0xBB779C0CA917E865(Local_83, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_16728 = 1;
		unk_0x50085246ABD3FEFA(0, true);
		while (Global_16727 < 6 && Global_14393.f_1 > 3)
		{
			unk_0x719FF505F097FD20();
			func_103();
			func_75();
			func_107();
			unk_0xEB2D525B57F42B40();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFDE8F069C542D126(false, false);
		if (Global_14335)
		{
			func_1(1);
		}
		iLocal_134 = unk_0x9CD27B0045628463();
		while (unk_0x9CD27B0045628463() < (iLocal_134 + iLocal_137) && Global_14393.f_1 > 3)
		{
			unk_0x719FF505F097FD20();
			func_103();
			func_75();
			unk_0xEB2D525B57F42B40();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_123(iLocal_139, "OPEN_SHUTTER");
		unk_0xE80492A9AC099A93(&Global_2263, 21);
		func_98();
		if (Global_14393.f_1 > 3)
		{
			if (Global_68067)
			{
				func_20(1072, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x9B5A68C6489E9909(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x9B5A68C6489E9909(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x9B5A68C6489E9909(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (unk_0xA921AA820C25702F(Global_2263, 28))
	{
		if (func_93(2, Global_14365, 0))
		{
			unk_0x1072F115DAB0717E(false, false);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0x719FF505F097FD20();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xEB2D525B57F42B40();
			unk_0x719FF505F097FD20();
			unk_0xD801CC02177FA3F1();
			unk_0x6A12D88881435DCA();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16725 = 1;
			unk_0x50085246ABD3FEFA(0, true);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			func_6();
			iLocal_126 = 0;
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			unk_0x933D6A9EEC1BACD0(&Global_2263, 9);
			unk_0x577D1284D6873711(false);
			iLocal_141 = 0;
			func_124(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_14(unk_0xD80958FC74E988A6());
			if (func_13(iVar0) && (!func_55(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		Global_2434883[iVar0] = iParam0;
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
		if (Global_2434883[iVar1] == 0)
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
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14330 = { Global_14346[Global_14338 /*3*/] };
	func_88(0, 1);
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	if (!unk_0xA921AA820C25702F(Global_2264, 28))
	{
		if (unk_0x76BF03FADBF154F5() == 0)
		{
			if (unk_0xF6201B4DAF662A9D())
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

void func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 773:
			Global_1333776[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1333782[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333788[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333794[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1333752[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333758[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333764[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333770[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333728[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333734[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333740[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333746[func_25(uParam2)] = iParam1;
			break;
		
		case 743:
			Global_1333800[func_25(uParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333806[func_25(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333812[func_25(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333818[func_25(uParam2)] = iParam1;
			break;
		
		case 1288:
			Global_1333824[func_25(uParam2)] = iParam1;
			break;
		
		case 625:
			Global_1333830[func_25(uParam2)] = iParam1;
			break;
		
		case 1263:
			Global_1333836[func_25(uParam2)] = iParam1;
			break;
		
		case 1860:
			Global_2474967[0 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2249:
			Global_2474967[1 /*6*/][func_25(uParam2)] = iParam1;
			break;
		
		case 750:
			Global_1333842[func_25(uParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333848[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333854[func_25(uParam2)] = iParam1;
			break;
		
		case 1221:
			Global_1333860[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 743:
			case 744:
			case 745:
			case 746:
			case 1288:
			case 625:
			case 1263:
			case 750:
			case 751:
			case 752:
			case 1221:
			case 1860:
			case 2249:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_25(uParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312736;
}

void func_27()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_280");
		if (iLocal_130)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68067 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(iLocal_140, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(iLocal_140, "SET_DATA_SLOT", 7f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
			else
			{
				if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
				}
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_59(iLocal_140, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
		}
		unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fLocal_76);
		unk_0xC6796A8FFA375E53();
		func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_59(iLocal_140, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 174, true), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_44(Global_2475470, Global_2475471))
		{
			if (iParam0 == 0 || !func_30(Global_2475470, Global_2475471, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0xD80958FC74E988A6(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar3;
	var uVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	uVar0 = 2;
	uVar3 = 2;
	uVar6 = 2;
	if (iParam1 == 0)
	{
		iVar12 = 3;
	}
	else if (bParam3)
	{
		iVar12 = 1;
	}
	else if (bParam4)
	{
		iVar12 = 2;
	}
	else
	{
		iVar12 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar3, &uVar6, iVar12, bParam5);
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x9F47B058362C84B5(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar9 = func_38(iParam0);
			if (!iVar9 == -1)
			{
				if (func_37(&uVar0, iVar9))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar10 = func_36(iParam0);
			if (!iVar10 == -1)
			{
				if (func_34(&uVar3, iVar10))
				{
					return 1;
				}
			}
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			iVar11 = func_33(iParam0);
			if (!iVar11 == 0)
			{
				if (func_32(&uVar6, iVar11))
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
	if (unk_0xA921AA820C25702F((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	return unk_0x67F3780DD425D4FC(iParam0, 1);
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (unk_0xA921AA820C25702F((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	return unk_0x898CC20EA75BACD8(iParam0, 0);
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)
{
	return unk_0x898CC20EA75BACD8(iParam0, 0);
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
							func_41(uParam2, 37, 1);
							break;
						
						case 1:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
							break;
						
						case 2:
							func_43(uParam3, 38, 1);
							func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 12, 1);
					func_40(uParam4, 13, 1);
					func_40(uParam4, 17, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
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
						func_43(uParam3, 13, 1);
						func_43(uParam3, 16, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
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
						func_41(uParam2, 13, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 26, 1);
						func_41(uParam2, 27, 1);
						func_41(uParam2, 28, 1);
						func_41(uParam2, 32, 1);
						func_41(uParam2, 36, 1);
						func_41(uParam2, 38, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
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
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
						func_41(uParam2, 16, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
					}
					func_40(uParam4, 9, 1);
					func_40(uParam4, 10, 1);
					func_40(uParam4, 18, 1);
					func_40(uParam4, 19, 1);
					func_40(uParam4, 20, 1);
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
						func_43(uParam3, 17, 1);
						func_43(uParam3, 18, 1);
						func_43(uParam3, 38, 1);
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
						func_41(uParam2, 17, 1);
						func_41(uParam2, 18, 1);
						func_41(uParam2, 37, 1);
						func_41(uParam2, 19, 1);
						func_41(uParam2, 20, 1);
						func_41(uParam2, 21, 1);
						func_41(uParam2, 22, 1);
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
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							break;
						
						case 1:
							func_43(uParam3, 4, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 28, 1);
							func_40(uParam4, 33, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 31, 1);
							func_40(uParam4, 43, 1);
							break;
						
						case 2:
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 39, 1);
							func_41(uParam2, 2, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 13, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 8, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
				
				case 21:
					switch (iParam5)
					{
						case 0:
						case 1:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
				
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					switch (iParam5)
					{
						case 0:
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 17, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 13, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
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
							func_43(uParam3, 38, 1);
							func_43(uParam3, 19, 1);
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
							func_41(uParam2, 11, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
							func_41(uParam2, 26, 1);
							func_41(uParam2, 27, 1);
							func_41(uParam2, 28, 1);
							func_41(uParam2, 30, 1);
							func_41(uParam2, 31, 1);
							func_41(uParam2, 32, 1);
							func_41(uParam2, 36, 1);
							func_41(uParam2, 38, 1);
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
							func_43(uParam3, 39, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 38, 1);
							func_40(uParam4, 9, 1);
							func_40(uParam4, 10, 1);
							func_40(uParam4, 12, 1);
							func_40(uParam4, 18, 1);
							func_40(uParam4, 19, 1);
							func_40(uParam4, 20, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 38, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
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
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
							func_43(uParam3, 0, 1);
							func_43(uParam3, 12, 1);
							func_43(uParam3, 13, 1);
							func_43(uParam3, 15, 1);
							func_43(uParam3, 16, 1);
							func_43(uParam3, 17, 1);
							func_43(uParam3, 18, 1);
							func_43(uParam3, 38, 1);
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
							func_41(uParam2, 11, 1);
							func_41(uParam2, 12, 1);
							func_41(uParam2, 13, 1);
							func_41(uParam2, 14, 1);
							func_41(uParam2, 15, 1);
							func_41(uParam2, 16, 1);
							func_41(uParam2, 17, 1);
							func_41(uParam2, 18, 1);
							func_41(uParam2, 37, 1);
							func_41(uParam2, 19, 1);
							func_41(uParam2, 20, 1);
							func_41(uParam2, 21, 1);
							func_41(uParam2, 22, 1);
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
					func_39(2, 21, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 22, uParam2, uParam3, uParam4, 0, 0);
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
		unk_0x933D6A9EEC1BACD0(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0xE80492A9AC099A93(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
		unk_0x933D6A9EEC1BACD0(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_59(iLocal_140, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 172, true), "CELL_BORDER");
}

void func_46(float fParam0)
{
	func_59(iLocal_140, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 173, true), "CELL_FILTER");
}

void func_47()
{
	if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 183, true), "CELL_GRID");
	func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 9f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
	}
	if (!func_55(14))
	{
		if ((Global_68067 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_54())
		{
			unk_0xF6E48914C7A8694E(iLocal_139, "SET_FOCUS_LOCK");
			unk_0xC58424BA936EB458(true);
			unk_0x80338406F3475E55("CELL_ACTTL");
			unk_0x6C188BE134E074AA(unk_0x7B5280EBA9840C72(&Global_2544225));
			unk_0x362E2D3FE93A9959();
			unk_0xC58424BA936EB458(false);
			unk_0xC6796A8FFA375E53();
		}
	}
}

void func_48(float fParam0)
{
	func_59(iLocal_140, "SET_DATA_SLOT", fParam0, unk_0x0499D7B09FC9B407(0, 175, true), "CELL_ACCYC");
}

void func_49()
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 177, true), "CELL_281");
		func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), "CELL_287");
		if (iLocal_130)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_68067 == 0 && unk_0x2C83A9DA6BFFC4F9(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(iLocal_140, "SET_DATA_SLOT", 8f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(iLocal_140, "SET_DATA_SLOT", 7f, unk_0x0499D7B09FC9B407(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) || unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
					func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
						}
					}
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
			}
			else if (!unk_0x79CFD9827CC979B6(unk_0xD80958FC74E988A6()) == 2)
			{
				if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
				}
				func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x0499D7B09FC9B407(2, 183, true), "CELL_GRID");
				func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_59(iLocal_140, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 182, true), "CELL_FOCUS");
					}
				}
				else
				{
					if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_1NP_XB");
					}
					func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
					}
				}
			}
		}
		unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
		unk_0xD69736AAE04DB51A(fLocal_76);
		unk_0xC6796A8FFA375E53();
		func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()
{
	if (iLocal_130)
	{
		unk_0x6D0858B8EDFD2B7D(fLocal_72, 1f);
		unk_0xB4EC2312F4E5B1F1(fLocal_73);
	}
}

void func_51(bool bParam0)
{
	if (Global_1601761.f_68108 == 1)
	{
	}
	else if (Global_1601761.f_68109 == 1)
	{
	}
	else
	{
		unk_0x015C49A93E3E086E(bParam0);
	}
}

void func_52()
{
	if (iLocal_60 == 1)
	{
		if (unk_0x0C515FAB3FF9EA92(sLocal_18[Global_2542262], "phone_cam12DUMMY"))
		{
			unk_0xA2CCBE62CD4C91A4(false);
		}
		else
		{
			unk_0xA2CCBE62CD4C91A4(true);
		}
	}
}

void func_53()
{
	func_124(iLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		unk_0x2C933ABF17A1DF41("phone_cam");
	}
}

int func_54()
{
	if (func_55(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if ((unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/] || unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/]) || unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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

bool func_55(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_56(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_57()
{
	if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (unk_0xA571D46727E2B718(2))
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 30, true), "CELL_RT_RSTICK");
		func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 1, true), "CELL_RT_RSTICK");
		func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_58()
{
	if (unk_0xA571D46727E2B718(2) || unk_0xA72BC0B675B1519E())
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 3f, unk_0x0499D7B09FC9B407(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_59(iLocal_140, "SET_DATA_SLOT", 4f, unk_0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_55(14))
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 5f, unk_0x0499D7B09FC9B407(0, 39, true), "CELL_LT_LSTICKZ");
		func_59(iLocal_140, "SET_DATA_SLOT", 6f, unk_0x0499D7B09FC9B407(2, 30, true), "CELL_LT_LSTICK");
	}
}

void func_59(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xCA042B6957743895(sParam3))
	{
		func_60(sParam3);
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		func_56(sParam4);
	}
	unk_0xC6796A8FFA375E53();
}

void func_60(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

void func_61()
{
	if (Global_68067)
	{
		switch (Global_16809)
		{
			case 0:
				if (unk_0xA571D46727E2B718(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!unk_0x4D79439A6B55AC67())
				{
					if (unk_0xA571D46727E2B718(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16808)
		{
			case 0:
				if (unk_0xA571D46727E2B718(2))
				{
					func_120("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_120("CELL_CAM_SELFIE_0", -1);
				}
				Global_16808++;
				break;
			
			case 1:
				if (!unk_0x4D79439A6B55AC67())
				{
					if (unk_0xA571D46727E2B718(2))
					{
						func_120("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_120("CELL_CAM_SELFIE_1", -1);
					}
					Global_16808++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_62()
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
	
	if (unk_0xA571D46727E2B718(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0xF3A21BCD95725A4A(2, iVar10) && !unk_0xF3A21BCD95725A4A(2, iVar9))
	{
		unk_0xFE99B66D079CF6BC(0, 2, true);
		unk_0xFE99B66D079CF6BC(0, 1, true);
		iVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (unk_0xA571D46727E2B718(2))
		{
			if (unk_0xF0D31AD191A74F87(iVar0) > 28 || unk_0xF0D31AD191A74F87(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (unk_0xF0D31AD191A74F87(iVar2) > 28 || unk_0xF0D31AD191A74F87(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (unk_0xA571D46727E2B718(2))
		{
			fVar7 = unk_0x4F8A26A890FD62FB(0, 290);
			fVar8 = unk_0x4F8A26A890FD62FB(0, 291);
			if (unk_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xF0D31AD191A74F87(iVar0) > 28 || unk_0xF0D31AD191A74F87(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!unk_0xF3A21BCD95725A4A(2, iVar9))
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
}

void func_63(float fParam0)
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
	unk_0xD6ADE981781FCA09(fLocal_159);
}

void func_64(float fParam0)
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
	unk_0xF1E22DC13F5EEBAD(fLocal_160);
}

void func_65(float fParam0)
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
	unk_0x466DA42C89865553(fLocal_161);
}

void func_66()
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
	
	if (unk_0xA571D46727E2B718(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0xF3A21BCD95725A4A(2, iVar10))
		{
			if (unk_0x580417101DDB492F(2, 178))
			{
				unk_0x53F4892D18EC90A4(0.5f);
				unk_0x3117D84EFA60F77B(0.85f);
				unk_0xAC2890471901861C(0.5f);
				unk_0x15E69E2802C24B8D(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0xF3A21BCD95725A4A(2, iVar10) && !unk_0xF3A21BCD95725A4A(2, iVar11))
	{
		if (unk_0x580417101DDB492F(2, 178))
		{
			unk_0x53F4892D18EC90A4(0.5f);
			unk_0x3117D84EFA60F77B(0.85f);
			unk_0xAC2890471901861C(0.5f);
			unk_0x15E69E2802C24B8D(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		unk_0xFE99B66D079CF6BC(0, 2, true);
		unk_0xFE99B66D079CF6BC(0, 1, true);
		iVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (unk_0xA571D46727E2B718(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = unk_0x4F8A26A890FD62FB(0, 290);
			fVar9 = unk_0x4F8A26A890FD62FB(0, 291);
			if (unk_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xF0D31AD191A74F87(iVar2) > 15 || unk_0xF0D31AD191A74F87(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xF0D31AD191A74F87(iVar0) > 28 || unk_0xF0D31AD191A74F87(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_70(fVar6);
		func_69(fVar7);
		func_68(fVar4);
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
	else if (!unk_0xE2587F8CBBD87B1D(2, iVar11))
	{
		unk_0x351220255D64C155(0, 2, true);
		unk_0x351220255D64C155(0, 1, true);
	}
	if (!unk_0xE2587F8CBBD87B1D(2, iVar10) && !unk_0xE2587F8CBBD87B1D(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (unk_0xF0D31AD191A74F87(iVar2) > 28 || unk_0xF0D31AD191A74F87(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (unk_0xF0D31AD191A74F87(iVar0) > 28 || unk_0xF0D31AD191A74F87(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!func_55(14))
		{
			func_67(fVar5);
		}
	}
}

void func_67(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	unk_0xAC2890471901861C(fLocal_157);
}

void func_68(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	unk_0x15E69E2802C24B8D(fLocal_158);
}

void func_69(float fParam0)
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	unk_0x3117D84EFA60F77B(fLocal_156);
}

void func_70(float fParam0)
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	unk_0x53F4892D18EC90A4(fLocal_155);
}

void func_71()
{
	if (Global_68327 || Global_68328)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
			{
				unk_0x0DF606929C105BE1(iLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14335)
		{
			if (Global_14551)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14393.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_73(255, 255, 255, 255);
			func_72(0.059f, 0.644f, "CELL_284", 0);
			func_73(255, 255, 255, 255);
			func_72(0.165f, 0.644f, "CELL_285", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.75f, "CELL_280", 0);
			func_73(255, 255, 255, 255);
			func_72(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14335)
	{
	}
	else
	{
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.75f, "CELL_287", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.79f, "CELL_286", 0);
		func_73(255, 255, 255, 255);
		func_72(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_72(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x07C837F9A01C34C9(0.4f, 0.4f);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(1, 0, 0, 0, 205);
	unk_0x038C1F517D7FDCF8(true);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0xBE6B23FFA53FB442(iParam0, iParam1, iParam2, iParam3);
}

void func_74()
{
	unk_0x6D0858B8EDFD2B7D(fLocal_74, 1f);
	unk_0xB4EC2312F4E5B1F1(fLocal_75);
}

void func_75()
{
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0xFE99B66D079CF6BC(0, 44, true);
	unk_0xFE99B66D079CF6BC(0, 3, true);
	unk_0xFE99B66D079CF6BC(0, 4, true);
	unk_0xFE99B66D079CF6BC(0, 5, true);
	unk_0xFE99B66D079CF6BC(0, 6, true);
	unk_0xFE99B66D079CF6BC(0, 1, true);
	unk_0xFE99B66D079CF6BC(0, 2, true);
	unk_0xFE99B66D079CF6BC(0, 39, true);
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xFE99B66D079CF6BC(0, 56, true);
}

void func_76()
{
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (Global_14335)
	{
		if (func_79())
		{
			unk_0x584FDFDA48805B86(&Local_92);
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
		if (unk_0xA921AA820C25702F(Global_2265, 4))
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
		if (func_79() == 0)
		{
			if (unk_0xA921AA820C25702F(Global_2265, 4))
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
			Local_86 = { Global_14339[Global_14338 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		unk_0x693A5C6D6734085B(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			unk_0xBB779C0CA917E865(Local_83, 0);
			if (!unk_0xA921AA820C25702F(Global_2263, 22))
			{
				if (unk_0xA921AA820C25702F(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_77()
{
	func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xA921AA820C25702F(Global_2264, 28))
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_286");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_277");
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_GALSAVE");
	}
	unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_76);
	unk_0xC6796A8FFA375E53();
	func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()
{
	func_124(iLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_124(iLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xA921AA820C25702F(Global_2264, 28))
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 179, true), "CELL_287");
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_286");
	}
	else
	{
		func_59(iLocal_140, "SET_DATA_SLOT", 2f, unk_0x0499D7B09FC9B407(2, 179, true), "CELL_287");
		func_59(iLocal_140, "SET_DATA_SLOT", 1f, unk_0x0499D7B09FC9B407(2, 178, true), "CELL_277");
		func_59(iLocal_140, "SET_DATA_SLOT", 0f, unk_0x0499D7B09FC9B407(0, 176, true), "CELL_GALSAVE");
	}
	unk_0xF6E48914C7A8694E(iLocal_140, "SET_MAX_WIDTH");
	unk_0xD69736AAE04DB51A(fLocal_76);
	unk_0xC6796A8FFA375E53();
	func_124(iLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (func_55(14))
		{
			return 0;
		}
		if (unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false))
		{
			return 0;
		}
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!unk_0x4F32C0D5A90A9B40())
			{
				if (unk_0xCFB0A0D8EDD145A3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6()) || unk_0xC024869A53992F34(unk_0xD80958FC74E988A6())) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x1C86D8AEF8254B78(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		if (Global_96221)
		{
			return 0;
		}
	}
	if (Global_68067)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x19CAFA3C87F7C2FF();
	iVar1 = unk_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (((((((unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar3)) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iVar3))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(iVar3))) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark")) || unk_0x9F47B058362C84B5(iVar3) == joaat("seashark2")) || unk_0x9F47B058362C84B5(iVar3) == joaat("rhino")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible")) || unk_0x9F47B058362C84B5(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2543736 || iVar2 == 1)
	{
		if (unk_0x2C83A9DA6BFFC4F9(joaat("apptrackify")) > 0 || Global_97173.f_12272.f_89)
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
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

void func_80()
{
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xEDE476E5EE29EDB1(0, Global_14363);
	Local_83 = { Global_14353 };
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (func_79())
	{
		unk_0x1CEFB61F193070AE(&Local_89, 0);
		Local_83 = { Local_89 };
		unk_0x584FDFDA48805B86(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14335)
	{
		func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_51(0);
		iLocal_130 = 0;
		if (unk_0xA921AA820C25702F(Global_2263, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_81();
		}
		if (iLocal_120)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 9))
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
			if (func_79() == 0)
			{
				unk_0xBB779C0CA917E865(Local_77, 0);
				unk_0x693A5C6D6734085B(Local_80);
			}
			func_88(0, 1);
		}
		else if (func_79() == 0)
		{
			unk_0xBB779C0CA917E865(Local_77, 0);
			unk_0x693A5C6D6734085B(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
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
			func_81();
		}
	}
	unk_0xBB779C0CA917E865(Local_77, 0);
}

void func_81()
{
	func_1(0);
	if (func_79() == 0)
	{
		if (unk_0xA921AA820C25702F(Global_2263, 30))
		{
			unk_0x693A5C6D6734085B(Global_14339[Global_14338 /*3*/]);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14346[Global_14338 /*3*/]);
		}
		Local_77 = { Local_83 };
		unk_0xBB779C0CA917E865(Local_77, 0);
	}
	Global_16725 = 0;
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	Global_14380 = 1;
	Global_16728 = 0;
	if (Global_14393.f_1 > 4)
	{
		Global_14393.f_1 = 6;
		Global_14371 = 1;
		func_82();
	}
	if (unk_0x85F01B8D5B90570E(iLocal_139))
	{
		func_123(iLocal_139, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xEB2D525B57F42B40();
	unk_0x1D132D614DD86811(&iLocal_140);
	unk_0x1D132D614DD86811(&iLocal_139);
	if (Global_14553 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 17);
	}
	unk_0xE80492A9AC099A93(&Global_2263, 18);
	unk_0xE80492A9AC099A93(&Global_2263, 21);
	unk_0x50085246ABD3FEFA(0, true);
	unk_0xE80492A9AC099A93(&Global_2265, 3);
	unk_0xE80492A9AC099A93(&Global_2543537, 3);
	unk_0x577D1284D6873711(false);
	unk_0x6E8834B52EC20C77(unk_0x4F8644AF03D0E0D6(), true);
	unk_0x450930E616475D0D(15);
	Global_16729 = 1;
	unk_0xA3B0C41BA5CC0BB5(iLocal_111);
	unk_0x353FC880830B88FA(iLocal_111);
	unk_0x10D373323E5B9C0D();
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xFFC24B988B938B38(unk_0xD80958FC74E988A6(), "Mood_Normal_1", 0);
		unk_0x726256CC1EEB182F(unk_0xD80958FC74E988A6());
	}
	func_90();
	unk_0xA2CCBE62CD4C91A4(false);
	unk_0x1B0B4AEED5B9B41C(1f);
	if (Global_2542263 > 0 && Global_2542263 < 13)
	{
		unk_0xBE2CACCF5A8AA805(sLocal_32[Global_2542263]);
	}
	func_88(0, 1);
	if (func_130(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	unk_0x1090044AD1DA76FA();
}

void func_82()
{
	char cVar0[24];
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x85F01B8D5B90570E(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_86(Global_2868);
			if (Global_2868 == 1)
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_124(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else if (Global_68067)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xE80492A9AC099A93(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x933D6A9EEC1BACD0(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_84();
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_56("CELL_300");
					func_56("CELL_217");
					func_56("CELL_217");
					unk_0xC6796A8FFA375E53();
				}
				else if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_124(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97173.f_12272[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_84();
				if (Global_15705)
				{
					unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(4);
					unk_0xC3D0841A0CC546A6(0);
					unk_0xC3D0841A0CC546A6(2);
					unk_0x80338406F3475E55("CELL_CONDFON");
					unk_0x6C188BE134E074AA(&Global_15707);
					unk_0x362E2D3FE93A9959();
					func_56("CELL_300");
					func_56("CELL_219");
					func_56("CELL_219");
					unk_0xC6796A8FFA375E53();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_97173.f_29699[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_124(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), &(Global_97173.f_29699[Global_1578 /*29*/].f_7), &cVar0, &(Global_97173.f_29699[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_124(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_83();
			break;
		
		default:
			break;
	}
}

void func_83()
{
	if (unk_0x85F01B8D5B90570E(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
		}
		else
		{
			func_85(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_85(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xE80492A9AC099A93(&Global_2263, 17);
			if (unk_0xA921AA820C25702F(Global_2263, 20))
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_85(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_84()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97173.f_12272[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
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
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
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
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2543734)
			{
				case 1:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 0);
					break;
				
				case 2:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 1);
					break;
				
				case 3:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 2);
					break;
				
				case 4:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 3);
					break;
				
				case 5:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 4);
					break;
				
				case 6:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 5);
					break;
				
				case 7:
					unk_0x11D5F725F0E780E0(unk_0x4F8644AF03D0E0D6(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_85(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_56(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_56(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_56(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_56(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_56(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_86(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_55(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar2);
								unk_0xC6796A8FFA375E53();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97173.f_12362[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97173.f_12362[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97173.f_12362[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68067)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2542272[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2542272[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2542272[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35958;
											break;
										
										case 1:
											iVar6 = Global_35959;
											break;
										
										case 2:
											iVar6 = Global_35960;
											break;
										
										default:
											break;
									}
									func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(Global_2269);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar7);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xA921AA820C25702F(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(iVar8);
								unk_0xC6796A8FFA375E53();
							}
							else if (iVar1 == 8)
							{
								unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
								unk_0xC3D0841A0CC546A6(1);
								unk_0xC3D0841A0CC546A6(iVar0);
								unk_0xC3D0841A0CC546A6(Global_2270[iVar1 /*15*/].f_10);
								unk_0xC3D0841A0CC546A6(0);
								func_56(&(Global_2270[iVar1 /*15*/]));
								unk_0xC3D0841A0CC546A6(42);
								unk_0xC6796A8FFA375E53();
							}
							else
							{
								func_85(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_87()
{
	switch (iLocal_99)
	{
		case 1:
			unk_0x50085246ABD3FEFA(0, true);
			if (unk_0xA921AA820C25702F(Global_2263, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_49();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_2263, 22))
			{
				unk_0x50085246ABD3FEFA(0, true);
				if (unk_0xA921AA820C25702F(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_88(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (Global_1601761.f_68108 == 0 && Global_1601761.f_68109 == 0)
	{
		unk_0x0F07E7745A236711();
	}
}

void func_91(bool bParam0, bool bParam1)
{
	if (Global_1601761.f_68108 == 1)
	{
	}
	else if (Global_1601761.f_68109 == 1)
	{
	}
	else
	{
		unk_0xFDE8F069C542D126(bParam0, bParam1);
	}
}

int func_92()
{
	if (unk_0xA921AA820C25702F(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
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

void func_94()
{
	if (Global_14335)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_79())
		{
			unk_0x1CEFB61F193070AE(&Local_89, 0);
			Local_83 = { Local_89 };
			unk_0x584FDFDA48805B86(&Local_92);
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
		if (func_79() == 0)
		{
			unk_0xBB779C0CA917E865(Local_77, 0);
			unk_0x693A5C6D6734085B(Local_80);
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
		unk_0xBB779C0CA917E865(Local_77, 0);
	}
	if (Global_14335)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_79())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				unk_0xBB779C0CA917E865(Local_77, 0);
				Local_80 = { Local_86 };
				unk_0x693A5C6D6734085B(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16726 = 0;
				func_91(1, 1);
				iLocal_114 = 1;
				func_95(1);
				func_53();
				func_96();
				func_51(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_103();
				func_124(iLocal_139, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xA921AA820C25702F(Global_2543537, 2))
				{
					func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_126();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		unk_0xBB779C0CA917E865(Local_77, 0);
		Global_16726 = 0;
	}
}

void func_95(bool bParam0)
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!unk_0xBCEDB009461DA156())
			{
				unk_0x7AC24EAB6D74118D(true);
				if (Global_2542263 > 0 && Global_2542263 < 99)
				{
					unk_0x27FEB5254759CDE3(sLocal_32[Global_2542263], false);
					unk_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (unk_0xBCEDB009461DA156())
		{
			unk_0x7AC24EAB6D74118D(false);
		}
	}
}

void func_96()
{
	if (Global_2542262 > 0 && Global_2542262 < 99)
	{
		unk_0x2C933ABF17A1DF41(sLocal_18[Global_2542262]);
	}
}

void func_97()
{
	if (Global_14335)
	{
		iLocal_124 = 0;
		func_53();
		func_88(1, 1);
		func_91(1, 1);
		iLocal_114 = 1;
		Global_16729 = 1;
	}
}

void func_98()
{
	if (iLocal_126 == 0)
	{
		if (unk_0xA921AA820C25702F(Global_2263, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (unk_0x0C515FAB3FF9EA92(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}

void func_99()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

void func_100()
{
	unk_0x1072F115DAB0717E(false, false);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_101()
{
	func_102();
}

void func_102()
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

void func_103()
{
	if (Global_14393.f_1 > 3)
	{
		if (!unk_0xB0034A223497FFCB())
		{
			unk_0x54972ADAF0294A93(iLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_104()
{
	if (func_55(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_11();
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

void func_105(int iParam0)
{
	if (Global_14551)
	{
		func_88(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_106())
	{
		Global_14393.f_1 = 3;
	}
}

int func_106()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	unk_0xFE99B66D079CF6BC(0, 0, true);
	unk_0xFE99B66D079CF6BC(0, 56, true);
	if (iLocal_149 == 0)
	{
		unk_0xEDE476E5EE29EDB1(0, Global_14366);
		unk_0xEDE476E5EE29EDB1(0, Global_14363);
		unk_0xFE99B66D079CF6BC(0, 278, true);
		unk_0xFE99B66D079CF6BC(0, 279, true);
		unk_0xFE99B66D079CF6BC(0, 280, true);
		unk_0xFE99B66D079CF6BC(0, 281, true);
		unk_0xFE99B66D079CF6BC(0, 282, true);
		unk_0xFE99B66D079CF6BC(0, 282, true);
		unk_0xFE99B66D079CF6BC(0, 284, true);
		unk_0xFE99B66D079CF6BC(0, 285, true);
		unk_0xFE99B66D079CF6BC(0, 69, true);
		unk_0xFE99B66D079CF6BC(0, 70, true);
		unk_0xFE99B66D079CF6BC(0, 114, true);
		unk_0xFE99B66D079CF6BC(0, 71, true);
		unk_0xFE99B66D079CF6BC(0, 72, true);
		unk_0xFE99B66D079CF6BC(0, 74, true);
		unk_0xFE99B66D079CF6BC(0, 75, true);
		unk_0xFE99B66D079CF6BC(0, 76, true);
		unk_0xFE99B66D079CF6BC(0, 73, true);
		unk_0xFE99B66D079CF6BC(0, 77, true);
		unk_0xFE99B66D079CF6BC(0, 78, true);
		unk_0xFE99B66D079CF6BC(0, 286, true);
		unk_0xFE99B66D079CF6BC(0, 287, true);
		unk_0xFE99B66D079CF6BC(0, 79, true);
		unk_0xFE99B66D079CF6BC(0, 80, true);
		unk_0xFE99B66D079CF6BC(0, 81, true);
		unk_0xFE99B66D079CF6BC(0, 82, true);
		unk_0xFE99B66D079CF6BC(0, 86, true);
		unk_0xFE99B66D079CF6BC(0, 59, true);
		unk_0xFE99B66D079CF6BC(0, 60, true);
		unk_0xFE99B66D079CF6BC(0, 61, true);
		unk_0xFE99B66D079CF6BC(0, 62, true);
		unk_0xFE99B66D079CF6BC(0, 63, true);
		unk_0xFE99B66D079CF6BC(0, 64, true);
		unk_0xFE99B66D079CF6BC(0, 87, true);
		unk_0xFE99B66D079CF6BC(0, 88, true);
		unk_0xFE99B66D079CF6BC(0, 89, true);
		unk_0xFE99B66D079CF6BC(0, 90, true);
		unk_0xFE99B66D079CF6BC(0, 107, true);
		unk_0xFE99B66D079CF6BC(0, 108, true);
		unk_0xFE99B66D079CF6BC(0, 109, true);
		unk_0xFE99B66D079CF6BC(0, 110, true);
		unk_0xFE99B66D079CF6BC(0, 111, true);
		unk_0xFE99B66D079CF6BC(0, 112, true);
		unk_0xFE99B66D079CF6BC(0, 113, true);
		unk_0xFE99B66D079CF6BC(0, 114, true);
		unk_0xFE99B66D079CF6BC(0, 91, true);
		unk_0xFE99B66D079CF6BC(0, 92, true);
		unk_0xFE99B66D079CF6BC(0, 102, true);
		unk_0xFE99B66D079CF6BC(0, 136, true);
		unk_0xFE99B66D079CF6BC(0, 137, true);
		unk_0xFE99B66D079CF6BC(0, 138, true);
		unk_0xFE99B66D079CF6BC(0, 139, true);
		unk_0xFE99B66D079CF6BC(0, 102, true);
	}
}

int func_108()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x22AC59A870E6A669(iVar0, -1))
			{
				return 1;
			}
			else if (!unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109()
{
	bool bVar0;
	
	func_116(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_115())
	{
		return 1;
	}
	if (Global_2436713)
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (func_113(157))
	{
		if (!func_112())
		{
			return 1;
		}
	}
	if (func_113(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_110() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_110()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	switch (func_111())
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

int func_111()
{
	return Global_24444;
}

bool func_112()
{
	return Global_2427935.f_570;
}

int func_113(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_114()
{
	return Global_2434971;
}

bool func_115()
{
	return Global_2427935.f_565;
}

void func_116(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_117(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_117(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_119(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_118(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_120(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_121()
{
	if (func_122())
	{
		unk_0x4AF92ACD3141D96C();
		if (unk_0x2A893980E96B659A(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			unk_0x10D373323E5B9C0D();
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
				if (unk_0x85F01B8D5B90570E(iLocal_139))
				{
					if (func_132())
					{
						if (Global_2542263 == 0)
						{
							if (!unk_0xA921AA820C25702F(Global_2543537, 2))
							{
								func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xA921AA820C25702F(Global_2543537, 2))
						{
							func_124(iLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x85F01B8D5B90570E(iLocal_139))
			{
				func_124(iLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_124(iLocal_139, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_108), unk_0xBBDA792448DB5A89(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		unk_0x10D373323E5B9C0D();
	}
}

int func_122()
{
	if (Global_1601761.f_68108 == 1)
	{
		if (Global_68067)
		{
			return 0;
		}
	}
	if (Global_1601761.f_68109 == 1)
	{
		if (Global_68067)
		{
			return 0;
		}
	}
	if (unk_0xF6201B4DAF662A9D() || unk_0xCCA1072C29D096C2())
	{
		if (unk_0xA921AA820C25702F(Global_2264, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_123(int iParam0, char* sParam1)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC6796A8FFA375E53();
}

void func_124(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

int func_125()
{
	if (Global_68067)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = func_11();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_97173.f_12272[Global_14393 /*20*/].f_7;
}

void func_126()
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	Global_16728 = 0;
	iLocal_126 = 0;
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		Local_66 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	}
	if (Global_14335)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_136)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_103();
			func_75();
			unk_0xEB2D525B57F42B40();
		}
		func_123(iLocal_139, "OPEN_SHUTTER");
		unk_0x719FF505F097FD20();
		func_98();
		iLocal_128 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_91(1, 1);
		func_95(1);
		func_53();
		func_96();
		func_51(0);
		iLocal_114 = 1;
	}
}

void func_127(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 15);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 15);
	}
}

bool func_128()
{
	return Global_1315872;
}

void func_129()
{
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && bParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x7C2AC9CA66575FBF(unk_0xD80958FC74E988A6()))
		{
			unk_0x88CBB5CEB96B7BD2(unk_0xD80958FC74E988A6(), false, 0);
			unk_0x53F4892D18EC90A4(fLocal_155);
			unk_0x3117D84EFA60F77B(fLocal_156);
			unk_0xAC2890471901861C(fLocal_157);
		}
		else
		{
			unk_0x53F4892D18EC90A4(fLocal_155);
			unk_0x3117D84EFA60F77B(fLocal_156);
			unk_0xAC2890471901861C(fLocal_157);
		}
	}
	unk_0x15E69E2802C24B8D(fLocal_158);
	unk_0xD6ADE981781FCA09(fLocal_159);
	unk_0xF1E22DC13F5EEBAD(fLocal_160);
	unk_0x466DA42C89865553(fLocal_161);
	func_50();
}

int func_132()
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}

