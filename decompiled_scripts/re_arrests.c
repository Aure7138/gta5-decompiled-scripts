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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 16;
	var uLocal_78 = 0;
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
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	struct<3> Local_249 = { 0, 0, 0 } ;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	char* sLocal_255 = NULL;
	char* sLocal_256 = NULL;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	bool bLocal_293 = 0;
	struct<3> Local_294 = { 0, 0, 0 } ;
	bool bLocal_297 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_243 = 8000;
	iLocal_246 = 8;
	iLocal_248 = 1;
	sLocal_256 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_257 = "RANDOM@ARRESTS";
	sLocal_258 = "RANDOM@ARRESTS@BUSTED";
	iLocal_262 = 1;
	Local_64 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x8D841F1DD3FA555F(11))
	{
		bLocal_75 = true;
		func_196();
		func_164();
	}
	if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
	{
		iLocal_52 = 1;
	}
	else
	{
		iLocal_52 = 2;
	}
	if (func_121(Local_64, 15, iLocal_52, 0, 0))
	{
		func_116(15);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
		}
		switch (iLocal_47)
		{
			case 0:
				if ((unk_0x52AB115D3D6A8417() && !func_115()) && !func_102())
				{
					if (func_99())
					{
						iLocal_47 = 1;
					}
				}
				else
				{
					func_164();
				}
				break;
			
			case 1:
				if (func_95())
				{
					unk_0x0C17E2FCF3ABF5A3(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, 1, 1);
					unk_0x5B6D37392F5991C3(0f);
					func_84(1);
					iLocal_47 = 2;
				}
				else if (!func_83(200f))
				{
					func_164();
				}
				break;
			
			case 2:
				if (func_83(1128792064))
				{
					func_1();
				}
				else
				{
					func_164();
				}
				break;
		}
	}
}

void func_1()
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	
	unk_0xF3148AAF69AF9CBC(&uVar0, 3);
	unk_0xF3148AAF69AF9CBC(&uVar0, 4);
	iVar5 = 0;
	func_82();
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		unk_0x0B895A812F665A52(iLocal_54, 129, 1);
	}
	if (func_81(iLocal_54))
	{
		if (unk_0x3A5BA67B2C97F000(iLocal_54, 0))
		{
			bLocal_297 = true;
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_53) && (iLocal_48 != 2 && iLocal_48 != 1))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			switch (iLocal_51)
			{
				case 0:
					unk_0x49A7D5BE22C6B8ED("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (unk_0x83666F9FB8FEBD4B() > 10)
					{
						if (!bLocal_73)
						{
							if (unk_0xFA1212DE7C455679(iLocal_53, 1227113341) == 7)
							{
								unk_0x65C82688BA49CA39(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (!bLocal_73)
						{
							if (unk_0xFA1212DE7C455679(iLocal_54, 1805844857) == 7)
							{
								if (unk_0xFA1212DE7C455679(iLocal_54, -2017877118) == 1)
								{
									unk_0xA205836DA0B71E5E(iLocal_54, 2, 1);
								}
								unk_0x754376E2234CBB4A(iLocal_54, iLocal_53, 150f, -1, 0, 0);
							}
						}
					}
					fVar4 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_53, 1), unk_0xB6AE0DAE06D56288(iLocal_54, 1), 1);
					if (unk_0x83666F9FB8FEBD4B() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_77();
						if (iVar5 == 1)
						{
							unk_0x65C82688BA49CA39(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 30000 && fVar4 < 10f)
					{
						iVar5 = 1;
					}
					if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						if (iVar5 || iLocal_277 == 1)
						{
							if (!func_76())
							{
								if (func_66(&uLocal_77, "REARRAU", "REARR_PCUFF", 4, iLocal_253, 0, 0))
								{
								}
								bLocal_293 = (unk_0xD81BC0FD4D47CC04(iLocal_54) || unk_0xEE6F2DE3DB966195(iLocal_54));
								if (!unk_0xE27746D8DF950073(iLocal_53, joaat("weapon_pistol"), 0))
								{
									unk_0x8E4A427F5C43E416(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
								}
								unk_0x649CF94A4282A7FD(iLocal_53, joaat("weapon_pistol"), 1);
								Local_67 = { unk_0xB6AE0DAE06D56288(iLocal_54, 1) };
								unk_0x27CC98B7C879C320(iLocal_53);
								unk_0xEAD984C2869B8B7C(&uLocal_72);
								if (!bLocal_293 && fVar4 > 2f)
								{
									unk_0xEF25BC5CC730041D(0, Local_67.f_0, Local_67.f_1, (Local_67.f_2 + 4f), 1000, 1566631136);
								}
								unk_0xAF625598EDA64AD3(0, iLocal_54, -1, 2048, 2);
								unk_0xF450705EF1F7E415(0, iLocal_54, iLocal_54, 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
								unk_0xE7D69AA8A129E7D3(0, iLocal_54, 5000, 0);
								unk_0x56D9ED1541046AF6(uLocal_72);
								unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
								unk_0xA3561415EB3DA3A3(&uLocal_72);
								unk_0xD24EA1F9FB501BB5(iLocal_53);
								unk_0x6CB332CB31E9FA96(iLocal_53, 1);
								unk_0xC1B1E9A034A63A62(0);
								iLocal_245 = unk_0x48E480685981C7D4();
								if (bLocal_293)
								{
									unk_0x27CC98B7C879C320(iLocal_54);
									unk_0x20FB26F6915EA2F3(iLocal_54);
									iLocal_51 = 4;
								}
								else
								{
									iLocal_51 = 2;
								}
							}
							else if (!iLocal_277)
							{
								unk_0x65C82688BA49CA39(iLocal_53, iLocal_54, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_277 = 1;
							}
						}
						else
						{
							func_65();
						}
					}
					else
					{
						unk_0x49A7D5BE22C6B8ED("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_53) && !unk_0x930F8FBB8E9537CC(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
						{
							if (unk_0xB454AC819016CE5E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iLocal_53))
							{
								unk_0x27CC98B7C879C320(iLocal_53);
								iLocal_51 = 1;
								unk_0x52A7A8711E08087B(iLocal_53, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0xFA1212DE7C455679(iLocal_53, -982327190) == 7)
					{
						unk_0x65C82688BA49CA39(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
						iLocal_51 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x48E480685981C7D4() - iLocal_245) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0x3306AAAFE3B25098(iLocal_54) * 3f) };
						unk_0xD91194CE3D1E1D77(iLocal_54, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_51 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x48E480685981C7D4() - iLocal_245) > 4500)
					{
						iLocal_51 = 4;
					}
					break;
				
				case 4:
					bLocal_73 = true;
					unk_0xEAD984C2869B8B7C(&uLocal_72);
					unk_0x31C1393E4ACFD794(0, sLocal_257, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_72);
					unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
					unk_0xA3561415EB3DA3A3(&uLocal_72);
					unk_0xD24EA1F9FB501BB5(iLocal_54);
					unk_0x6CB332CB31E9FA96(iLocal_54, 1);
					unk_0xA7149121C1FEA65B(iLocal_54, 1);
					iLocal_51 = 5;
					break;
				
				case 5:
					if (iLocal_49 == 3)
					{
						if (unk_0xFA1212DE7C455679(iLocal_53, 242628503) == 7)
						{
							unk_0x27CC98B7C879C320(iLocal_53);
							if (!unk_0xE27746D8DF950073(iLocal_53, joaat("weapon_pistol"), 0))
							{
								unk_0x8E4A427F5C43E416(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
							}
							unk_0x649CF94A4282A7FD(iLocal_53, joaat("weapon_pistol"), 1);
							unk_0xEAD984C2869B8B7C(&uLocal_72);
							unk_0xE7D69AA8A129E7D3(0, iLocal_54, -1, 0);
							unk_0x56D9ED1541046AF6(uLocal_72);
							unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
							unk_0xA3561415EB3DA3A3(&uLocal_72);
							unk_0x6CB332CB31E9FA96(iLocal_53, 1);
							iLocal_51 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0x7404950238A154C2(iLocal_56, 0) && !unk_0x5FEB513A4402FD59(iLocal_55))
					{
						unk_0x86DF2E347C6446A5(iLocal_56, 1);
						if (unk_0xFA1212DE7C455679(iLocal_53, -2017877118) == 7)
						{
							if (unk_0xFA1212DE7C455679(iLocal_55, -1273030092) == 7)
							{
								if (unk_0xA6D65D92671E7012(iLocal_54, iLocal_56, 2, 0, 0))
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_54))
									{
										if (!unk_0x58A69336FE7307D8(iLocal_54, iLocal_56))
										{
											if (!unk_0xFB9BF178E208C231(iLocal_54, 0))
											{
												if (unk_0xFA1212DE7C455679(iLocal_54, -1794415470) == 7)
												{
													unk_0xEAD984C2869B8B7C(&uLocal_72);
													unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0x56D9ED1541046AF6(uLocal_72);
													unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
													unk_0xA3561415EB3DA3A3(&uLocal_72);
													unk_0xF8E77F310A5B6EAB(0, iLocal_71, iLocal_70);
													unk_0xF8E77F310A5B6EAB(0, iLocal_70, iLocal_71);
												}
											}
										}
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_53))
									{
										unk_0x9A87C8A5D660C29B(iLocal_53);
										if (!unk_0xFB9BF178E208C231(iLocal_53, 0))
										{
											if (unk_0x7404950238A154C2(iLocal_56, 0))
											{
												if (!func_76())
												{
													if (func_66(&uLocal_77, "REARRAU", "REARR_INCAR", 4, iLocal_253, 0, 0))
													{
														if (func_64(iLocal_53, iLocal_56) == 2)
														{
															if (unk_0x598CCC94D95857D9(iLocal_55, iLocal_54, 180f))
															{
																Local_294 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_294 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0x598CCC94D95857D9(iLocal_55, iLocal_54, 180f))
														{
															Local_294 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_294 = { -2.978f, 0.75f, 1f };
														}
														unk_0xEAD984C2869B8B7C(&uLocal_72);
														unk_0xE2585A2920C4268E(0, unk_0xB07F27EC3B05E4EA(iLocal_56, Local_294), iLocal_54, 0.75f, 0, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														unk_0xE7D69AA8A129E7D3(0, iLocal_54, -1, 0);
														unk_0x56D9ED1541046AF6(uLocal_72);
														unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
														unk_0xA3561415EB3DA3A3(&uLocal_72);
														unk_0x6CB332CB31E9FA96(iLocal_53, 1);
														unk_0x6A8A78C1DAEC9CEB(iLocal_56, 0);
														iLocal_243 = 8000;
														unk_0x5AE11BC36633DE4E(0);
														iLocal_276 = unk_0x48E480685981C7D4();
														iLocal_51 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_63();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0x5FEB513A4402FD59(iLocal_53))
					{
						if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0x48E480685981C7D4() - iLocal_276) > 8000)
							{
								if (!func_76())
								{
									unk_0xAF625598EDA64AD3(iLocal_53, unk_0x81873881071CD9FE(), 6000, 2048, 2);
									func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
									iLocal_276 = unk_0x48E480685981C7D4();
								}
							}
						}
						if (unk_0x7404950238A154C2(iLocal_56, 0))
						{
							if (iLocal_63)
							{
								if (func_64(iLocal_53, iLocal_56) == 2)
								{
									unk_0x3C3A95141D01773E(iLocal_54, iLocal_56, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0x3C3A95141D01773E(iLocal_54, iLocal_56, -1, 1, 1f, 1, 0);
								}
								iLocal_51 = 8;
							}
							else if (iLocal_62)
							{
								fVar6 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_54, 1), unk_0xB6AE0DAE06D56288(iLocal_56, 1), 1);
								if (fVar6 < 4f && iLocal_284 == 0)
								{
									unk_0xCA95D8D68983B37E(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, 1);
									iLocal_284 = 1;
								}
								else if (fVar6 < 3f)
								{
									unk_0x27CC98B7C879C320(iLocal_54);
									iLocal_63 = 1;
								}
							}
							else if (!unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "kneeling_arrest_get_up", 3))
							{
								if (func_64(iLocal_53, iLocal_56) == 2)
								{
									Local_294 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_294 = { -1.578f, -0.5f, 1f };
								}
								unk_0xCA95D8D68983B37E(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, 1);
								if (bLocal_297)
								{
									unk_0x350B20EBD616FAD8(iLocal_54, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0x350B20EBD616FAD8(iLocal_54, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_62 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x7404950238A154C2(iLocal_56, 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_55))
						{
							if (unk_0x58A69336FE7307D8(iLocal_54, iLocal_56))
							{
								if (unk_0xFBACB273AA628CC5(uLocal_57))
								{
									unk_0x0A8175F24237A3D4(&uLocal_57);
								}
								if (unk_0xFBACB273AA628CC5(uLocal_58))
								{
									unk_0x0A8175F24237A3D4(&uLocal_58);
								}
								if (unk_0x58A69336FE7307D8(iLocal_53, iLocal_56))
								{
									unk_0x2D7E8CD6F4101CAB(iLocal_55, iLocal_56, 10f, 786603);
									unk_0x6CB332CB31E9FA96(iLocal_55, 1);
									unk_0x1D15D99A10A15334(iLocal_53, 0);
									func_164();
								}
								else if (unk_0xFA1212DE7C455679(iLocal_53, -1794415470) == 7)
								{
									unk_0x27CC98B7C879C320(iLocal_53);
									unk_0x3C3A95141D01773E(iLocal_53, iLocal_56, 20000, 0, 1f, 1, 0);
									unk_0x6CB332CB31E9FA96(iLocal_53, 1);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_49();
	if (unk_0x5FEB513A4402FD59(iLocal_54))
	{
	}
	if (unk_0x5FEB513A4402FD59(iLocal_53))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (iLocal_48 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_48 == 1 || iLocal_48 == 3)
				{
					if (!func_76())
					{
						if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_54, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1) < 20f)
						{
							func_66(&uLocal_77, "REARRAU", sLocal_273, 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_72);
					unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
					unk_0x56D9ED1541046AF6(uLocal_72);
					unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
					unk_0xA3561415EB3DA3A3(&uLocal_72);
				}
				else
				{
					unk_0x754376E2234CBB4A(iLocal_54, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_54, 1);
				}
				unk_0x4EDE34FBADD967A6(0);
				if (iLocal_48 == 0)
				{
					iLocal_48 = 2;
				}
				func_164();
			}
		}
	}
	if (unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!bLocal_60)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_51 == 5 || iLocal_51 == 6)
	{
		if (!bLocal_60)
		{
			if (iLocal_48 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (unk_0x48E480685981C7D4() > iLocal_254 + 1000)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_53))
		{
			if (!unk_0x8D28631AAAEFC957(iLocal_53, unk_0x81873881071CD9FE(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (!unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_253 = 1;
		}
		else
		{
			iLocal_253 = 0;
		}
		iLocal_254 = unk_0x48E480685981C7D4();
	}
}

void func_3(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_53))
	{
		switch (iLocal_49)
		{
			case 0:
				if ((iLocal_242 == 3 || iLocal_51 == 5) || iLocal_51 == 6)
				{
					if (!func_76())
					{
						unk_0x27CC98B7C879C320(iLocal_53);
						unk_0xEAD984C2869B8B7C(&uLocal_72);
						unk_0x71D4A7422520E90F(0, unk_0xB6AE0DAE06D56288(iLocal_54, 0), 10000, 0, 2);
						unk_0x31C1393E4ACFD794(0, sLocal_257, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x31C1393E4ACFD794(0, sLocal_257, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_72);
						unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
						unk_0xA3561415EB3DA3A3(&uLocal_72);
						iLocal_49 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x0BAE7BE122182FA8(iLocal_53, sLocal_257, sVar1, 3))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_54))
					{
						if (!func_76())
						{
							if (func_66(&uLocal_77, "REARRAU", "REARR_PRAD1", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_76())
						{
							if (func_66(&uLocal_77, "REARRAU", "REARR_PRAD2", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_76())
				{
					if (func_10())
					{
						if (unk_0x7404950238A154C2(iLocal_56, 0))
						{
							unk_0x7A9B5CC15D83678A(iLocal_56, 0);
							unk_0x6A8A78C1DAEC9CEB(iLocal_56, 1);
						}
						unk_0x27CC98B7C879C320(iLocal_53);
						unk_0xEAD984C2869B8B7C(&uLocal_72);
						unk_0x31C1393E4ACFD794(0, sLocal_257, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0x56D9ED1541046AF6(uLocal_72);
						unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
						unk_0xA3561415EB3DA3A3(&uLocal_72);
						unk_0x95BE9BA77CA91710(iLocal_53, 0, 0);
						func_8();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_73)
				{
					func_7();
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_54) || !unk_0x930F8FBB8E9537CC(iLocal_54))
				{
					if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_54))
					{
						if (!func_76())
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0x13F5804ED8081B54(iLocal_53, 1, unk_0x81873881071CD9FE(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0x13F5804ED8081B54(unk_0x81873881071CD9FE(), 1, iLocal_53, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (unk_0xC9D9444186B5A374() > iLocal_243 || iLocal_261)
					{
						if (iLocal_48 == 3 || iLocal_48 == 0)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_54))
							{
								if (iLocal_243 == 8000 || iLocal_261)
								{
									if (bLocal_260)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_76())
								{
									unk_0xAF625598EDA64AD3(iLocal_53, unk_0x81873881071CD9FE(), 500, 2048, 2);
									func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
								}
							}
							else if (iLocal_243 == 8000)
							{
								if (!func_76())
								{
									func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 20000;
								}
							}
							else if (!func_76())
							{
								func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
								iLocal_243 = 8000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
						else
						{
							if (unk_0x5FEB513A4402FD59(iLocal_54))
							{
								if (!func_76())
								{
									func_66(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 30000;
								}
							}
							else if (!func_76())
							{
								unk_0xAF625598EDA64AD3(iLocal_53, unk_0x81873881071CD9FE(), 6000, 2048, 2);
								func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
								iLocal_243 = unk_0x2E0A9E3291F398E3(8, 22);
								iLocal_243 *= 30000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				if (iLocal_51 != 8)
				{
					if (unk_0x7404950238A154C2(iLocal_56, 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_54))
						{
							if (!unk_0x04C377C10639B842(iLocal_54, iLocal_56, 0))
							{
								func_63();
							}
						}
					}
					else
					{
						func_63();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_261)
	{
		switch (unk_0x2E0A9E3291F398E3(0, 3))
		{
			case 0:
				sLocal_259 = "idle_a";
				break;
			
			case 1:
				sLocal_259 = "idle_b";
				break;
			
			case 2:
				sLocal_259 = "idle_c";
				break;
		}
		unk_0xEAD984C2869B8B7C(&uLocal_72);
		unk_0x31C1393E4ACFD794(0, sLocal_258, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sLocal_258, sLocal_259, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sLocal_258, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x56D9ED1541046AF6(uLocal_72);
		unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
		unk_0xA3561415EB3DA3A3(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_258, "enter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_258, "exit", 3))
	{
	}
	else if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_258, sLocal_259, 3))
	{
		func_66(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x48E480685981C7D4() > iLocal_263 + 6000)
	{
		iLocal_263 = unk_0x48E480685981C7D4();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_261)
	{
		unk_0xEAD984C2869B8B7C(&uLocal_72);
		unk_0x31C1393E4ACFD794(0, sLocal_257, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sLocal_257, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sLocal_257, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0xE7D69AA8A129E7D3(0, iLocal_54, -1, 0);
		unk_0x56D9ED1541046AF6(uLocal_72);
		unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
		unk_0xA3561415EB3DA3A3(&uLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x0BAE7BE122182FA8(iLocal_53, sLocal_257, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_66(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x0BAE7BE122182FA8(iLocal_53, sLocal_257, "radio_exit", 3))
	{
		iLocal_262 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_50)
	{
		case 0:
			if (!bLocal_73)
			{
				if (iLocal_48 == 3)
				{
					iLocal_50 = 1;
				}
				else if (iLocal_48 == 0)
				{
					iLocal_50 = 1;
				}
				unk_0x930F8FBB8E9537CC(iLocal_53);
				unk_0x930F8FBB8E9537CC(iLocal_54);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_53) && unk_0x86CCCD2FAE9D5E65(iLocal_54))
				{
					unk_0xCA95D8D68983B37E(iLocal_53, iLocal_54, -1, 3f, 0f, 0f, 1f, 0);
				}
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
		
		case 1:
			if (unk_0xFBACB273AA628CC5(uLocal_57))
			{
				unk_0x0A8175F24237A3D4(&uLocal_57);
			}
			iLocal_50 = 2;
			iLocal_243 = 8000;
			iLocal_290 = unk_0x48E480685981C7D4();
			break;
		
		case 2:
			if (unk_0x7404950238A154C2(iLocal_56, 0))
			{
				if ((unk_0x48E480685981C7D4() - iLocal_290) > 20000)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_55))
					{
						if (unk_0xFA1212DE7C455679(iLocal_55, -1273030092) == 7)
						{
							unk_0x3C3A95141D01773E(iLocal_53, iLocal_56, -1, 0, 1f, 1, 0);
							iLocal_50 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x7404950238A154C2(iLocal_56, 0))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_55))
				{
					if (unk_0x58A69336FE7307D8(iLocal_53, iLocal_56))
					{
						unk_0x2D7E8CD6F4101CAB(iLocal_55, iLocal_56, 10f, 786603);
						unk_0x6CB332CB31E9FA96(iLocal_55, 1);
						func_164();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_260 = func_9();
	bLocal_260 = iLocal_262;
	iLocal_243 = 20000;
	iLocal_261 = 0;
}

int func_9()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	iVar12 = joaat("pranger");
	if (unk_0x7404950238A154C2(iLocal_56, 0))
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iVar12);
	if (unk_0x33ACB874CECA2D4B(iVar12))
	{
		if (unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0))
		{
			if (unk_0xB33B007FE6F38B89(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_56 = unk_0xE00F8DEA9778FC87(iVar12, Var6, 0, 1, 1);
				iLocal_55 = unk_0x4D135F3066A9BF9C(iLocal_56, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				unk_0xCE566DBDCACD245E(iLocal_55, 294, 1);
				if (!unk_0xE27746D8DF950073(iLocal_55, joaat("weapon_pistol"), 0))
				{
					unk_0x8E4A427F5C43E416(iLocal_55, joaat("weapon_pistol"), -1, 0, 1);
				}
				unk_0x649CF94A4282A7FD(iLocal_55, joaat("weapon_pistol"), 1);
				unk_0x506A601663C5417C(iLocal_55, iLocal_70);
				unk_0xC390A6485FB80923(iLocal_56, 3);
				unk_0x1D15D99A10A15334(iLocal_55, 1);
				unk_0x5CC9D6711FE01F0D(iLocal_56);
				unk_0x558304695AB738EE(iLocal_56, 1);
				unk_0x0E465BF3FB5C8001(iLocal_56, 1);
				Var0 = { unk_0xB6AE0DAE06D56288(iLocal_56, 1) };
				Var3 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - Var0 };
				unk_0xC24172029826A66F(iLocal_56, unk_0x097CA9356FED843D(Var3.f_0, Var3.f_1));
				unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(iLocal_53, 0), 1, &Var0, 1, 1077936128, 0);
				if (unk_0x0D6E79537424BACE(Var0, 2528.563f, 2639.115f, 36.9446f, 1) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0x0D6E79537424BACE(2538.71f, 2592.007f, 36.9446f, Var0, 1) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x73FD8D43B37C0615(iLocal_55, iLocal_56, Var0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0x3D24414865131CB8(iLocal_56, 4f);
				unk_0x6A8A78C1DAEC9CEB(iLocal_56, 1);
				iLocal_76 = 1;
				unk_0x92F7CFC5EAFC0661(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_48 != 3)
	{
		iLocal_242 = 3;
	}
	switch (iLocal_242)
	{
		case 0:
			if (unk_0xFA1212DE7C455679(iLocal_53, 242628503) == 7 || unk_0x48E480685981C7D4() > iLocal_245 + 15000)
			{
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_53))
					{
						unk_0x27CC98B7C879C320(iLocal_53);
						unk_0xEAD984C2869B8B7C(&uLocal_72);
						if (!unk_0x930F8FBB8E9537CC(iLocal_54))
						{
							unk_0x65C82688BA49CA39(0, iLocal_54, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 2000);
						unk_0x56D9ED1541046AF6(uLocal_72);
						unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
						unk_0xA3561415EB3DA3A3(&uLocal_72);
						iLocal_242 = 1;
					}
				}
				else
				{
					iLocal_242 = 3;
				}
			}
			break;
		
		case 1:
			if (unk_0xFA1212DE7C455679(iLocal_53, 242628503) == 1)
			{
				if (unk_0xAE5083278B0C9CDD(iLocal_53) > 0)
				{
					if (!func_76())
					{
						if (iLocal_244 < 2)
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
							if (unk_0xFBACB273AA628CC5(uLocal_57))
							{
								unk_0xD5CD0E7173F858FF(uLocal_57, 1);
							}
						}
						else
						{
							func_66(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
						}
						iLocal_242 = 2;
					}
				}
			}
			else if (!func_76())
			{
				if (iLocal_244 < 2)
				{
					func_66(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
					if (unk_0xFBACB273AA628CC5(uLocal_57))
					{
						unk_0xD5CD0E7173F858FF(uLocal_57, 1);
					}
				}
				else
				{
					func_66(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
				}
				iLocal_242 = 2;
			}
			break;
		
		case 2:
			if (!func_76())
			{
				iLocal_242 = 3;
			}
			unk_0xF88735A9354A45F3(iLocal_53, unk_0x81873881071CD9FE(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xBBEF8270CE27C0EE(iLocal_54, unk_0x81873881071CD9FE(), 1);
	bVar1 = func_48();
	if (bVar1)
	{
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_48 == 2 || bLocal_73 == 1)
				{
					switch (iLocal_246)
					{
						case 8:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0xD5CD0E7173F858FF(uLocal_58, 1);
							if (!unk_0x930F8FBB8E9537CC(iLocal_54) && unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
							{
								unk_0xEAD984C2869B8B7C(&uLocal_72);
								unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x56D9ED1541046AF6(uLocal_72);
								unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
								unk_0xA3561415EB3DA3A3(&uLocal_72);
								iLocal_246 = 9;
							}
							else
							{
								iLocal_246 = 3;
							}
							break;
						
						case 9:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 7)
							{
								iLocal_246 = 0;
							}
							break;
						
						case 0:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0xC9E1121219C75417(iLocal_54, 1);
								iLocal_246 = 3;
							}
							break;
						
						case 1:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x515B65C19A5CA9B1(iLocal_54, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								iLocal_246 = 2;
							}
							else
							{
								unk_0x27CC98B7C879C320(iLocal_54);
								unk_0xEAD984C2869B8B7C(&uLocal_72);
								unk_0x71D4A7422520E90F(0, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 1000, 0, 2);
								unk_0xD91194CE3D1E1D77(0, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x56D9ED1541046AF6(uLocal_72);
								unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
								unk_0xA3561415EB3DA3A3(&uLocal_72);
								iLocal_246 = 2;
							}
							break;
						
						case 2:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x515B65C19A5CA9B1(iLocal_54, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 4f, 4f, 3f, 0, 1, 0))
							{
								if (unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 7 || func_66(&uLocal_77, "REARRAU", sLocal_270, 4, iLocal_253, 0, 0))
								{
									iLocal_246 = 6;
								}
							}
							else if (unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 7)
							{
								unk_0xEAD984C2869B8B7C(&uLocal_72);
								unk_0x71D4A7422520E90F(0, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 1000, 0, 2);
								unk_0xD91194CE3D1E1D77(0, unk_0xB6AE0DAE06D56288(iLocal_53, 0), 2f, -1, 3f, 0, 1193033728);
								unk_0x56D9ED1541046AF6(uLocal_72);
								unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
								unk_0xA3561415EB3DA3A3(&uLocal_72);
							}
							break;
						
						case 3:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_246 = 4;
							}
							else if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_76())
								{
									unk_0x27CC98B7C879C320(iLocal_54);
									unk_0xEAD984C2869B8B7C(&uLocal_72);
									unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, 8f, 2f, 1073741824, 0);
									unk_0x56D9ED1541046AF6(uLocal_72);
									unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
									unk_0xA3561415EB3DA3A3(&uLocal_72);
									iLocal_246 = 4;
								}
							}
							else
							{
								iLocal_246 = 6;
							}
							break;
						
						case 4:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_291 = unk_0x48E480685981C7D4();
								iLocal_246 = 7;
							}
							break;
						
						case 7:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0xD6A9D2FC007C67B9(iLocal_54, unk_0x81873881071CD9FE()))
							{
								unk_0xAF625598EDA64AD3(iLocal_54, unk_0x81873881071CD9FE(), -1, 2064, 2);
							}
							if (!unk_0x598CCC94D95857D9(iLocal_54, unk_0x81873881071CD9FE(), 30f))
							{
								unk_0xF88735A9354A45F3(iLocal_54, unk_0x81873881071CD9FE(), -1);
							}
							if ((unk_0x48E480685981C7D4() - iLocal_291) > 2000)
							{
								iLocal_246 = 5;
							}
							break;
						
						case 5:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "Thanks_Male_05", 3) || unk_0xFA1212DE7C455679(iLocal_54, 242628503) == 7)
							{
								if (!func_76())
								{
									if (iLocal_244 < 2)
									{
										func_66(&uLocal_77, "REARRAU", sLocal_265, 4, iLocal_253, 0, 0);
										unk_0x31C1393E4ACFD794(iLocal_54, sLocal_257, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_66(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
									}
									func_15(func_43(), 1, 250, 0, 0);
									unk_0xF64D185C5B88AF31(iLocal_54);
									iLocal_246 = 6;
								}
							}
							break;
						
						case 6:
							unk_0x49A7D5BE22C6B8ED("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_76())
							{
								unk_0x754376E2234CBB4A(iLocal_54, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
								func_164();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_76())
				{
					func_66(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
				}
				unk_0x754376E2234CBB4A(iLocal_54, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
				func_164();
			}
		}
		else
		{
			func_13();
			unk_0x754376E2234CBB4A(iLocal_54, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_48 = 1;
			}
			if (!func_76())
			{
				func_66(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
			}
			func_164();
		}
	}
}

void func_13()
{
	Global_14559 = 0;
	func_14();
}

void func_14()
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

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_16(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
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
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_23(5))
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
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
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
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
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
	func_18(iParam0);
	if (Global_35443 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
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

void func_18(int iParam0)
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

void func_19(int iParam0)
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
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_21() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_21() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_20(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
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

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_21() /*9662*/].f_7252.f_10, iParam0);
}

int func_24(bool bParam0)
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
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
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
	if (func_36(&Global_2550589))
	{
		if (func_34(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2550589, iParam0))
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

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, (Global_2550588 - 0.5f));
}

void func_31(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_32(var uParam0, float fParam1)
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

float func_33(var uParam0)
{
	return uParam0->f_72;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)
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

bool func_36(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_37(int iParam0)
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

bool func_38(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_39(int iParam0, int iParam1)
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

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
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

void func_42()
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

int func_43()
{
	func_44();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_47(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_46(unk_0x81873881071CD9FE());
			if (func_45(iVar0) && (!func_38(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_45(Global_98931.f_1750.f_539.f_3549))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0x7404950238A154C2(iLocal_56, 0))
	{
		if (unk_0x8D28631AAAEFC957(iLocal_56, iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0x76440C1BF84E203E(unk_0xB6AE0DAE06D56288(iLocal_54, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x5FEB513A4402FD59(iVar1))
	{
		if (unk_0x14B7103DBD149FFE(iVar1) == joaat("s_f_y_cop_01") || unk_0x14B7103DBD149FFE(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0x76440C1BF84E203E(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x5FEB513A4402FD59(iVar1))
	{
		if (unk_0x14B7103DBD149FFE(iVar1) == joaat("s_f_y_cop_01") || unk_0x14B7103DBD149FFE(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0xE800E479A60822F5(unk_0xB6AE0DAE06D56288(iLocal_54, 0), fVar0, 0, 1024);
	if (unk_0x7404950238A154C2(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0xE800E479A60822F5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), fVar0, 0, 1024);
	if (unk_0x7404950238A154C2(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_49()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		bVar0 = unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_54);
		uVar1 = unk_0xBBEF8270CE27C0EE(iLocal_54, unk_0x81873881071CD9FE(), 1);
		if (((uVar1 || func_62()) || func_60()) || bVar0)
		{
			func_59();
			if (bLocal_73)
			{
				if (((bVar0 || uVar1) && !unk_0xD81BC0FD4D47CC04(iLocal_54)) && !unk_0xE5AB05962FA1FF3F(iLocal_54, 0))
				{
					unk_0x27CC98B7C879C320(iLocal_54);
					unk_0xEB392534E2AF5CA4(iLocal_54, 500, 2000, 0, 0, 0, 0);
					unk_0x492E306B5A7C779A(iLocal_54, -1);
					unk_0x6CB332CB31E9FA96(iLocal_54, 1);
				}
				else if (!unk_0xE5AB05962FA1FF3F(iLocal_54, 0) && !unk_0xD81BC0FD4D47CC04(iLocal_54))
				{
					unk_0x27CC98B7C879C320(iLocal_54);
					unk_0x492E306B5A7C779A(iLocal_54, -1);
					unk_0x6CB332CB31E9FA96(iLocal_54, 1);
				}
				func_55(0);
				if (!func_76())
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_53) && iLocal_285 == 0)
					{
						if (func_66(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0))
						{
							iLocal_285 = 1;
						}
					}
				}
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	else
	{
		if (unk_0xFBACB273AA628CC5(uLocal_58))
		{
			unk_0x0A8175F24237A3D4(&uLocal_58);
			func_54(&uLocal_77, 2);
		}
		func_59();
		if (unk_0xBBEF8270CE27C0EE(iLocal_54, unk_0x81873881071CD9FE(), 1))
		{
			if (bLocal_73)
			{
				func_55(1);
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_53))
	{
		if (bLocal_60)
		{
			if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				func_164();
			}
		}
		if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_55))
			{
				if ((unk_0xBBEF8270CE27C0EE(iLocal_55, unk_0x81873881071CD9FE(), 1) && unk_0x4DC6EF945236C0F7(iLocal_55) < 190) || (unk_0xBBEF8270CE27C0EE(iLocal_55, unk_0x81873881071CD9FE(), 1) && unk_0xD81BC0FD4D47CC04(iLocal_55)))
				{
					iVar2 = 1;
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_56) && unk_0xBBEF8270CE27C0EE(iLocal_56, unk_0x81873881071CD9FE(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1) && unk_0x4DC6EF945236C0F7(iLocal_53) < 190) || func_53()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || func_52()) || (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1) && unk_0xD81BC0FD4D47CC04(iLocal_53))) || iVar2 == 1)
		{
			func_55(1);
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
	}
	else
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1))
		{
			if (iLocal_286 == 0)
			{
				iLocal_286 = 1;
				iLocal_289 = unk_0x48E480685981C7D4();
			}
			if (iLocal_48 == 3 || iLocal_48 == 1)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			unk_0xD24EA1F9FB501BB5(iLocal_54);
		}
		if (unk_0xFBACB273AA628CC5(uLocal_57))
		{
			unk_0x0A8175F24237A3D4(&uLocal_57);
			func_54(&uLocal_77, 1);
		}
	}
	if (iLocal_286)
	{
		if ((unk_0x48E480685981C7D4() - iLocal_289) > 5000)
		{
			unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 3, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			iLocal_286 = 0;
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_53) && !unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_53, unk_0x81873881071CD9FE(), 1) && unk_0xBBEF8270CE27C0EE(iLocal_54, unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x4DC6EF945236C0F7(iLocal_53) < 190 && unk_0x4DC6EF945236C0F7(iLocal_54) < 190)
			{
				func_59();
				func_55(1);
				iLocal_48 = 1;
			}
		}
		if (!unk_0x8D28631AAAEFC957(iLocal_54, iLocal_53, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 20f, 20f, 20f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_77, "REARRAU", "REARR_PORUN", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 40f, 40f, 40f, 0, 1, 0))
			{
				func_50();
				unk_0x4EDE34FBADD967A6(0);
				func_66(&uLocal_77, "REARRAU", sLocal_266, 4, iLocal_253, 0, 0);
			}
			func_164();
		}
	}
	if (unk_0x5FEB513A4402FD59(iLocal_53) && unk_0x5FEB513A4402FD59(iLocal_54))
	{
		func_164();
	}
	if (unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_53))
		{
			if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 100f, 100f, 40f, 0, 1, 0))
			{
				func_164();
			}
		}
	}
}

void func_50()
{
	Global_14559 = 0;
	func_51();
}

void func_51()
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

bool func_52()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_53))
			{
				if (unk_0xB454AC819016CE5E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iLocal_53))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0x7404950238A154C2(iLocal_56, 0))
		{
			if (unk_0xB454AC819016CE5E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iLocal_56))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_76)
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_56, unk_0x81873881071CD9FE(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_53()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x544121698BDAB87E(unk_0xC91EFAB304EB7DE6(iLocal_53, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_54))
		{
			return 1;
		}
		else if (!unk_0x544121698BDAB87E(unk_0xC91EFAB304EB7DE6(iLocal_54, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0x7524A58D724C2495(unk_0xC91EFAB304EB7DE6(iLocal_53, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_53))
		{
			if (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_53) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_53))
			{
				if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_54) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_54))
			{
				if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar6, 1))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						if (bLocal_73)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + unk_0xC91EFAB304EB7DE6(iLocal_53, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0xC91EFAB304EB7DE6(iLocal_53, 31086, 0f, 0f, 0f) };
	if (((unk_0xF2D6F3C6E10665F2(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xF2D6F3C6E10665F2(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xF2D6F3C6E10665F2(Var3, Var0, joaat("weapon_stickybomb"), 1)) || unk_0xF2D6F3C6E10665F2(Var3, Var0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_55(int iParam0)
{
	if (!unk_0x5FEB513A4402FD59(iLocal_53))
	{
		unk_0xD24EA1F9FB501BB5(iLocal_53);
		if (!bLocal_60)
		{
			unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 2, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			unk_0x33B1E568CEF14B0D(iLocal_53, 1);
			if (unk_0xFBACB273AA628CC5(uLocal_57))
			{
				unk_0xD5CD0E7173F858FF(uLocal_57, 0);
			}
			if (iParam0 == 1)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_54))
				{
					if (unk_0xFA1212DE7C455679(iLocal_54, 1805844857) == 7)
					{
						if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0xEAD984C2869B8B7C(&uLocal_72);
							unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x754376E2234CBB4A(0, iLocal_53, 150f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_72);
							unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
							unk_0xA3561415EB3DA3A3(&uLocal_72);
							unk_0x03EB8112BA30917C(iLocal_54, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x6CB332CB31E9FA96(iLocal_54, 1);
						}
						else
						{
							unk_0x27CC98B7C879C320(iLocal_54);
							unk_0x754376E2234CBB4A(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0x930F8FBB8E9537CC(iLocal_54) && !unk_0x5FEB513A4402FD59(iLocal_54)) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iLocal_54, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1) < 20f)
					{
						if (!func_76())
						{
							func_66(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
						}
					}
				}
			}
			unk_0x27CC98B7C879C320(iLocal_53);
			unk_0xEAD984C2869B8B7C(&uLocal_72);
			unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uLocal_72);
			unk_0xC65002CAA1212AF9(iLocal_53, uLocal_72);
			unk_0xA3561415EB3DA3A3(&uLocal_72);
			unk_0x6CB332CB31E9FA96(iLocal_53, 1);
			unk_0xA0E2C72EEFBD5858(iLocal_53, 1, 0);
			if (unk_0x7404950238A154C2(iLocal_56, 0))
			{
				unk_0xC390A6485FB80923(iLocal_56, 1);
			}
			func_57();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x5FEB513A4402FD59(iLocal_53))
			{
				if (!unk_0xD81BC0FD4D47CC04(iLocal_53))
				{
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
			{
				func_56();
			}
			bLocal_60 = true;
		}
	}
}

void func_56()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_55))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_72);
			unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2048, 2);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uLocal_72);
			unk_0xC65002CAA1212AF9(iLocal_55, uLocal_72);
			unk_0xA3561415EB3DA3A3(&uLocal_72);
			unk_0x6CB332CB31E9FA96(iLocal_55, 1);
			unk_0xA0E2C72EEFBD5858(iLocal_55, 1, 0);
		}
	}
}

void func_57()
{
	Global_14559 = 0;
	func_58();
}

void func_58()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_59()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_58))
		{
			unk_0xD5CD0E7173F858FF(uLocal_58, 0);
		}
		unk_0xD24EA1F9FB501BB5(iLocal_54);
	}
}

int func_60()
{
	if (!unk_0x930F8FBB8E9537CC(iLocal_53))
	{
		if (bLocal_73)
		{
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_53))
			{
				if ((unk_0x48E480685981C7D4() - iLocal_275) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (!func_76())
	{
		if (iLocal_274 < 3)
		{
			unk_0xAF625598EDA64AD3(iLocal_53, unk_0x81873881071CD9FE(), 6000, 2048, 2);
			func_66(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
		}
	}
	iLocal_274++;
	iLocal_275 = unk_0x48E480685981C7D4();
}

int func_62()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0xB454AC819016CE5E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iLocal_54))
		{
			if (bLocal_73)
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_54, 1), Local_67) > 2.5f)
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
	}
	if (bLocal_73)
	{
		if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_54))
		{
			if (unk_0xD81BC0FD4D47CC04(iLocal_54))
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_54, 1), Local_67) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_73)
			{
				if ((unk_0x48E480685981C7D4() - iLocal_275) > 1000)
				{
					func_61();
				}
			}
		}
	}
	if (iLocal_274 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (!iLocal_74)
	{
		switch (iLocal_244)
		{
			case 0:
				if (!bLocal_60)
				{
					if (unk_0x83666F9FB8FEBD4B() > 80000)
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_53))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_54))
							{
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								func_66(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
							}
						}
						iLocal_244 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_76())
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_54))
					{
						if (unk_0x0BAE7BE122182FA8(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0xEAD984C2869B8B7C(&uLocal_72);
							unk_0x31C1393E4ACFD794(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x754376E2234CBB4A(0, iLocal_53, 150f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_72);
							unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
							unk_0xA3561415EB3DA3A3(&uLocal_72);
							unk_0x03EB8112BA30917C(iLocal_54, joaat("MotionState_Run"), 0, 0, 0);
							unk_0x6CB332CB31E9FA96(iLocal_54, 1);
						}
						else
						{
							unk_0x754376E2234CBB4A(iLocal_54, iLocal_53, 150f, -1, 0, 0);
						}
						unk_0x6CB332CB31E9FA96(iLocal_54, 1);
						unk_0x9765BF567DB87B5F(iLocal_54, 101);
						func_66(&uLocal_77, "REARRAU", sLocal_268, 4, iLocal_253, 0, 0);
						iLocal_244 = 2;
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_53))
					{
						unk_0x27CC98B7C879C320(iLocal_53);
						iLocal_244 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x5FEB513A4402FD59(iLocal_53))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_54))
					{
						unk_0xF8E77F310A5B6EAB(2, iLocal_71, iLocal_70);
						unk_0xF8E77F310A5B6EAB(2, iLocal_70, iLocal_71);
						unk_0x633A554EB6BC4E71(iLocal_53, iLocal_54, 0, 16);
					}
					else
					{
						unk_0x9AF45ACD4E9068EE(iLocal_53, 1193033728, 0);
						func_164();
					}
					unk_0x6CB332CB31E9FA96(iLocal_53, 1);
				}
				iLocal_74 = 1;
				break;
			}
	}
}

int func_64(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0xB07F27EC3B05E4EA(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0xB07F27EC3B05E4EA(iParam1, -1f, -0.5f, 0f) };
		Var12 = { Var6 - Var0 };
		if (unk_0x652D2EEEF1D3E62C(Var9) < unk_0x652D2EEEF1D3E62C(Var12))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_65()
{
	if (!func_76())
	{
		if (!iLocal_292)
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 30f, 30f, 30f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", "REARR_PSTOP", 4, iLocal_253, 0, 0);
				iLocal_292 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		else if (unk_0xC9D9444186B5A374() > 8000)
		{
			if (unk_0x2E0A9E3291F398E3(0, 99) > 50)
			{
				func_66(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_66(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else
			{
				func_66(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
		}
	}
}

bool func_66(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_67(sParam2, iParam3, 0);
}

int func_67(char* sParam0, int iParam1, bool bParam2)
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
					func_51();
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
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_73();
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
				func_72();
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
				if (func_71())
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
			if (func_70())
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
			func_69();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_68();
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
		func_51();
	}
	return 0;
}

void func_68()
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

void func_69()
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

int func_70()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_71()
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

void func_72()
{
	if (func_38(14))
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
		Global_14394 = func_43();
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

void func_73()
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

bool func_74(int iParam0, int iParam1)
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

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

int func_76()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	if (unk_0x8D28631AAAEFC957(iLocal_54, iLocal_53, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_80())
	{
		if (!func_78(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0xB68A7D348A2D9F61(unk_0xB6AE0DAE06D56288(iLocal_54, 1), &uVar0, &Var1))
	{
		if (func_79(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_79(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_80()
{
	return 0;
}

int func_81(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82()
{
	if ((unk_0x48E480685981C7D4() - iLocal_252) > 500)
	{
		if ((iLocal_48 != 1 && iLocal_48 != 3) && iLocal_48 != 2)
		{
			if (unk_0xFBACB273AA628CC5(uLocal_58))
			{
				unk_0xD5CD0E7173F858FF(uLocal_58, iLocal_247);
				if (iLocal_247 == 1)
				{
					iLocal_247 = 0;
				}
				else
				{
					iLocal_247 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		if (!bLocal_60)
		{
			if (unk_0xFBACB273AA628CC5(uLocal_57))
			{
				unk_0xD5CD0E7173F858FF(uLocal_57, iLocal_248);
				if (iLocal_248 == 1)
				{
					iLocal_248 = 0;
				}
				else
				{
					iLocal_248 = 1;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		iLocal_252 = unk_0x48E480685981C7D4();
	}
	if (!bLocal_288 == bLocal_287)
	{
		if (bLocal_287)
		{
			if (unk_0xFBACB273AA628CC5(uLocal_58))
			{
				unk_0x3C8D013C840ADA0A(uLocal_58, 1);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_57))
			{
				unk_0x3C8D013C840ADA0A(uLocal_57, 1);
			}
		}
		else
		{
			if (unk_0xFBACB273AA628CC5(uLocal_58))
			{
				unk_0x3C8D013C840ADA0A(uLocal_58, 0);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_57))
			{
				unk_0x3C8D013C840ADA0A(uLocal_57, 0);
			}
		}
		bLocal_288 = bLocal_287;
	}
}

int func_83(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_278, Local_281, 194.75f, 0, 1, 0))
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_53))
	{
		if (unk_0x8D28631AAAEFC957(iLocal_53, unk_0x81873881071CD9FE(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_54))
	{
		if (unk_0x8D28631AAAEFC957(iLocal_54, unk_0x81873881071CD9FE(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_84(int iParam0)
{
	if (func_89())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_88(Global_98920))
		{
			func_85(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_88(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_86(func_87(iParam0), -1);
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
					func_86(func_87(iParam0), -1);
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
					func_86(func_87(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

char* func_87(int iParam0)
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

int func_88(int iParam0)
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

int func_89()
{
	switch (func_90(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_90(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_94(0))
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
		if (!func_92(iParam2))
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
			func_91(uParam0, iParam4);
		}
	}
	return 2;
}

void func_91(var uParam0, int iParam1)
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

bool func_92(int iParam0)
{
	return func_93(iParam0, Global_35443);
}

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_92(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_95()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0x5FEB513A4402FD59(iLocal_53))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if ((unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_54, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Local_278, Local_281, 194.75f, 0, 1, 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_58))
				{
					uLocal_58 = func_96(iLocal_54, 0, 145);
				}
				if (!unk_0xFBACB273AA628CC5(uLocal_57))
				{
					uLocal_57 = func_96(iLocal_53, 0, 145);
				}
				unk_0x3C8D013C840ADA0A(uLocal_58, 0);
				unk_0x3C8D013C840ADA0A(uLocal_57, 0);
				unk_0xC1B1E9A034A63A62(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_53))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_57))
				{
					uLocal_57 = func_96(iLocal_53, 0, 145);
				}
			}
			if (unk_0xFBACB273AA628CC5(uLocal_58))
			{
				unk_0x0A8175F24237A3D4(&uLocal_58);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_54))
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_58))
			{
				uLocal_58 = func_96(iLocal_54, 0, 145);
			}
		}
		if (unk_0xFBACB273AA628CC5(uLocal_57))
		{
			unk_0x0A8175F24237A3D4(&uLocal_57);
		}
		return 1;
	}
	return 0;
}

var func_96(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_97(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_98(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
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
		unk_0xD6DF56BB9537BCC5(uVar0, func_98(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_98(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_98(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_99()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_52 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar8 = 218.3434f;
		Var5 = { 2431.685f, 4945.31f, 44.6996f };
		fVar9 = 220.0087f;
		Local_278 = { 2378.284f, 4863.027f, 32.50883f };
		Local_281 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_255 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_264 = "arrestcriminal";
		sLocal_265 = "REARR_CTHANK";
		sLocal_266 = "REARR_CORUN";
		sLocal_267 = "REARR_CWTF";
		sLocal_268 = "REARR_CTURN";
		sLocal_269 = "REARR_CHELP";
		sLocal_270 = "REARR_HATE";
		sLocal_271 = "REARR_CRAND";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_52 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar8 = 90.5639f;
		Var5 = { 2586.005f, 2541.41f, 31.0379f };
		fVar9 = 75.5943f;
		Local_278 = { 2543.135f, 2683.917f, 0.307461f };
		Local_281 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_255 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_264 = "arrestcriminal2";
		sLocal_265 = "REARR_THANK2";
		sLocal_266 = "REARR_CORUN2";
		sLocal_267 = "REARR_CWTF2";
		sLocal_268 = "REARR_CTURN2";
		sLocal_269 = "REARR_CHELP2";
		sLocal_270 = "REARR_HATE2";
		sLocal_271 = "REARR_CRAND2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	unk_0x32A12757CBF48A33(iVar0);
	unk_0x32A12757CBF48A33(iVar1);
	unk_0x32A12757CBF48A33(joaat("prop_ld_binbag_01"));
	unk_0x295DC04FC13E025B(sLocal_257);
	unk_0x295DC04FC13E025B(sLocal_258);
	unk_0xF147E5A343BAF150("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0xF147E5A343BAF150("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x33ACB874CECA2D4B(iVar0) && unk_0x33ACB874CECA2D4B(iVar1)) && unk_0x33ACB874CECA2D4B(joaat("prop_ld_binbag_01"))) && unk_0x8E8B546E1A81D27F(sLocal_257)) && unk_0x8E8B546E1A81D27F(sLocal_258)) && unk_0xDBB20E5B224C075C("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0xDBB20E5B224C075C("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_53 = unk_0x206897C6DBC12488(6, iVar0, Var2, fVar8, 1, 1);
		unk_0xCE566DBDCACD245E(iLocal_53, 294, 1);
		unk_0xA0E2C72EEFBD5858(iLocal_53, 1, 0);
		unk_0xA7149121C1FEA65B(iLocal_53, 1);
		unk_0x1D15D99A10A15334(iLocal_53, 1);
		func_101(&uLocal_77, 1, iLocal_53, "ArrestCop", 0, 1);
		unk_0x3B7AFF7DCE22C1CF(iLocal_53, 1);
		unk_0x632435B4905EF92E(iLocal_53, 1);
		iLocal_54 = unk_0x206897C6DBC12488(26, iVar1, Var5, fVar9, 1, 1);
		unk_0xA0E2C72EEFBD5858(iLocal_54, 1, 0);
		unk_0xCE566DBDCACD245E(iLocal_54, 42, 1);
		unk_0xCE566DBDCACD245E(iLocal_54, 281, 1);
		unk_0x1D15D99A10A15334(iLocal_54, 1);
		func_101(&uLocal_77, 2, iLocal_54, sLocal_264, 0, 1);
		unk_0x3B7AFF7DCE22C1CF(iLocal_54, 1);
		if (iLocal_52 == 1)
		{
			unk_0x03F73D35E5AC583A(iLocal_54, 0, 0, 2, 0);
			unk_0x03F73D35E5AC583A(iLocal_54, 2, 0, 0, 0);
			unk_0x03F73D35E5AC583A(iLocal_54, 3, 2, 0, 0);
			unk_0x03F73D35E5AC583A(iLocal_54, 4, 0, 0, 0);
		}
		func_100();
		if (func_43() == 0)
		{
			func_101(&uLocal_77, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
		}
		else if (func_43() == 1)
		{
			func_101(&uLocal_77, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
		}
		else if (func_43() == 2)
		{
			func_101(&uLocal_77, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
		}
		if (!unk_0xE27746D8DF950073(iLocal_53, joaat("weapon_pistol"), 0))
		{
			unk_0x8E4A427F5C43E416(iLocal_53, joaat("weapon_pistol"), -1, 0, 1);
		}
		unk_0x649CF94A4282A7FD(iLocal_53, joaat("weapon_pistol"), 1);
		uLocal_59 = unk_0xF364195A57BB7AE3(joaat("prop_ld_binbag_01"), Local_64.f_0, Local_64.f_1, (Local_64.f_2 + 100f), 1, 1, 0);
		unk_0xABA9860C0161F3CD(uLocal_59, 0);
		if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
		{
			iLocal_52 = 1;
			unk_0xEAD984C2869B8B7C(&uLocal_72);
			unk_0xB52FF4A3C1682319(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_249, 1193033728);
			unk_0x754376E2234CBB4A(0, iLocal_53, 150f, -1, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_72);
			unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
			unk_0x6CB332CB31E9FA96(iLocal_54, 1);
			unk_0xA3561415EB3DA3A3(&uLocal_72);
			unk_0x2A3474455A407EEE(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_52 = 2;
			unk_0xEAD984C2869B8B7C(&uLocal_72);
			unk_0xB52FF4A3C1682319(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_249, 1193033728);
			unk_0x754376E2234CBB4A(0, iLocal_53, 150f, -1, 0, 0);
			unk_0x56D9ED1541046AF6(uLocal_72);
			unk_0xC65002CAA1212AF9(iLocal_54, uLocal_72);
			unk_0x6CB332CB31E9FA96(iLocal_54, 1);
			unk_0xA3561415EB3DA3A3(&uLocal_72);
		}
		if (iLocal_52 == 1)
		{
		}
		unk_0x65C82688BA49CA39(iLocal_53, iLocal_54, -1, 1f, 3f, 1073741824, 0);
		unk_0x6CB332CB31E9FA96(iLocal_53, 1);
		return 1;
	}
	return 0;
}

void func_100()
{
	Local_249.f_0 = 0f;
	Local_249.f_1 = 10f;
	unk_0xA97FB3A1E6744863(iLocal_53, 2);
	unk_0x4B9FA68A3AC8C29D(iLocal_53, 13, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_53, 2, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_53, 1, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_53, 11, 0);
	unk_0x6D0DD3956DE3B78F(iLocal_53, 0);
	unk_0xA97FB3A1E6744863(iLocal_54, 3);
	unk_0x4B9FA68A3AC8C29D(iLocal_54, 17, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_54, 6, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_54, 1, 1);
	unk_0x4B9FA68A3AC8C29D(iLocal_54, 11, 0);
	unk_0x7F5F0D37173E518C(iLocal_54, 128, 1);
	unk_0x7F5F0D37173E518C(iLocal_54, 1, 0);
	unk_0x4865E80F793024CE("RE_ARREST_COP", &iLocal_70);
	unk_0x4865E80F793024CE("RE_ARREST_CRIM", &iLocal_71);
	unk_0x506A601663C5417C(iLocal_53, iLocal_70);
	unk_0x506A601663C5417C(iLocal_54, iLocal_71);
	unk_0xF8E77F310A5B6EAB(4, iLocal_71, iLocal_70);
	unk_0xF8E77F310A5B6EAB(3, iLocal_70, joaat("player"));
	unk_0xF8E77F310A5B6EAB(3, iLocal_71, joaat("player"));
	unk_0xF8E77F310A5B6EAB(4, iLocal_71, joaat("COP"));
	unk_0xEF1A2C5B3EE83E3E(iLocal_53, sLocal_256);
	unk_0xEF1A2C5B3EE83E3E(iLocal_54, sLocal_255);
}

void func_101(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_102()
{
	if (!func_92(5))
	{
		return 1;
	}
	if (func_111())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_110())
		{
			return 0;
		}
	}
	if (func_103(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_103(float fParam0, bool bParam1)
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
		if (func_45(func_43()))
		{
			iVar36 = func_109();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_104(iVar32, &Var0);
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

void func_104(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_105(uParam1, "Abigail1", func_107(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 1:
			func_105(uParam1, "Abigail2", func_107(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 2:
			func_105(uParam1, "Barry1", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 3:
			func_105(uParam1, "Barry2", func_107(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 4:
			func_105(uParam1, "Barry3", func_107(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 5:
			func_105(uParam1, "Barry3A", func_107(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 6:
			func_105(uParam1, "Barry3C", func_107(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 7:
			func_105(uParam1, "Barry4", func_107(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_106(iParam0), 0, 0);
			break;
		
		case 8:
			func_105(uParam1, "Dreyfuss1", func_107(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 9:
			func_105(uParam1, "Epsilon1", func_107(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 10:
			func_105(uParam1, "Epsilon2", func_107(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 11:
			func_105(uParam1, "Epsilon3", func_107(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 12:
			func_105(uParam1, "Epsilon4", func_107(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 13:
			func_105(uParam1, "Epsilon5", func_107(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 14:
			func_105(uParam1, "Epsilon6", func_107(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 15:
			func_105(uParam1, "Epsilon7", func_107(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 16:
			func_105(uParam1, "Epsilon8", func_107(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 17:
			func_105(uParam1, "Extreme1", func_107(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 18:
			func_105(uParam1, "Extreme2", func_107(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 19:
			func_105(uParam1, "Extreme3", func_107(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 20:
			func_105(uParam1, "Extreme4", func_107(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 21:
			func_105(uParam1, "Fanatic1", func_107(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 22:
			func_105(uParam1, "Fanatic2", func_107(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_106(iParam0), 1, 0);
			break;
		
		case 23:
			func_105(uParam1, "Fanatic3", func_107(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_106(iParam0), 0, 1);
			break;
		
		case 24:
			func_105(uParam1, "Hao1", func_107(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_106(iParam0), 0, 1);
			break;
		
		case 25:
			func_105(uParam1, "Hunting1", func_107(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 26:
			func_105(uParam1, "Hunting2", func_107(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 27:
			func_105(uParam1, "Josh1", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 28:
			func_105(uParam1, "Josh2", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 29:
			func_105(uParam1, "Josh3", func_107(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 30:
			func_105(uParam1, "Josh4", func_107(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 31:
			func_105(uParam1, "Maude1", func_107(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 32:
			func_105(uParam1, "Minute1", func_107(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 33:
			func_105(uParam1, "Minute2", func_107(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 34:
			func_105(uParam1, "Minute3", func_107(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 35:
			func_105(uParam1, "MrsPhilips1", func_107(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 36:
			func_105(uParam1, "MrsPhilips2", func_107(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 37:
			func_105(uParam1, "Nigel1", func_107(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 38:
			func_105(uParam1, "Nigel1A", func_107(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 39:
			func_105(uParam1, "Nigel1B", func_107(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 40:
			func_105(uParam1, "Nigel1C", func_107(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 41:
			func_105(uParam1, "Nigel1D", func_107(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_106(iParam0), 1, 1);
			break;
		
		case 42:
			func_105(uParam1, "Nigel2", func_107(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 43:
			func_105(uParam1, "Nigel3", func_107(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 1);
			break;
		
		case 44:
			func_105(uParam1, "Omega1", func_107(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 45:
			func_105(uParam1, "Omega2", func_107(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 46:
			func_105(uParam1, "Paparazzo1", func_107(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 47:
			func_105(uParam1, "Paparazzo2", func_107(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 48:
			func_105(uParam1, "Paparazzo3", func_107(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 49:
			func_105(uParam1, "Paparazzo3A", func_107(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 50:
			func_105(uParam1, "Paparazzo3B", func_107(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 51:
			func_105(uParam1, "Paparazzo4", func_107(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 52:
			func_105(uParam1, "Rampage1", func_107(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 54:
			func_105(uParam1, "Rampage3", func_107(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 55:
			func_105(uParam1, "Rampage4", func_107(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 56:
			func_105(uParam1, "Rampage5", func_107(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_106(iParam0), 0, 0);
			break;
		
		case 53:
			func_105(uParam1, "Rampage2", func_107(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_106(iParam0), 1, 0);
			break;
		
		case 57:
			func_105(uParam1, "TheLastOne", func_107(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 58:
			func_105(uParam1, "Tonya1", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 59:
			func_105(uParam1, "Tonya2", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 60:
			func_105(uParam1, "Tonya3", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 61:
			func_105(uParam1, "Tonya4", func_107(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		case 62:
			func_105(uParam1, "Tonya5", func_107(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_106(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_105(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_106(int iParam0)
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

struct<2> func_107(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_108(iParam0) };
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

struct<2> func_108(int iParam0)
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

int func_109()
{
	func_44();
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

int func_110()
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

int func_111()
{
	if (func_114() && !func_110())
	{
		return 1;
	}
	if (func_113() && func_112())
	{
		return 1;
	}
	return 0;
}

bool func_112()
{
	return Global_98649 > 0;
}

int func_113()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_115()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_110())
		{
			return 0;
		}
	}
	if (func_111())
	{
		return 1;
	}
	if (func_103(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_118(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_117();
}

void func_117()
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

void func_118(int iParam0)
{
	Global_98920 = iParam0;
}

int func_119()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_120(Var0);
	return uVar16;
}

int func_120(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_121(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_119();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_163())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_110())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_162(0))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_103(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_160(iParam3))
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_159(func_43()) == 4 || func_159(func_43()) == 5)
			{
				return 0;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_158(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_157(Global_98931.f_29444.f_43[iParam3]))
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
		if (func_156())
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
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_92(5))
		{
			return 0;
		}
		if (func_146(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_145(iVar8))
				{
					if (func_123(iVar4))
					{
						if (!func_122(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
							{
								if (func_43() != iVar4)
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

bool func_122(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = (func_134(iParam0) - func_134(iParam1));
		iVar3 = (func_136(iParam0) - func_136(iParam1));
		iVar4 = (func_133(iParam0) - func_133(iParam1));
		iVar5 = (func_132(iParam0) - func_132(iParam1));
		iVar6 = (func_131(iParam0) - func_131(iParam1));
		iVar7 = (func_130(iParam0) - func_130(iParam1));
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = (func_134(iParam1) - func_134(iParam0));
		iVar3 = (func_136(iParam1) - func_136(iParam0));
		iVar4 = (func_133(iParam1) - func_133(iParam0));
		iVar5 = (func_132(iParam1) - func_132(iParam0));
		iVar6 = (func_131(iParam1) - func_131(iParam0));
		iVar7 = (func_130(iParam1) - func_130(iParam0));
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
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_128(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_128(float fParam0, float fParam1, float fParam2)
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

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_131(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_132(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_133(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_134(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_135(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)
{
	return iParam0 & 15;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return 1;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	var uVar0;
	
	func_144(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_143(&uVar0, unk_0x25B31B877207A3A9());
	func_142(&uVar0, unk_0x0C937048CF6952B5());
	func_141(&uVar0, unk_0x8B6B3DD84CE74978());
	func_140(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_139(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_139(var uParam0, int iParam1)
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

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_145(int iParam0)
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
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_146(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_43();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_155()) || Global_97978) || Global_24948) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_155()) || Global_24948) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_155()) || Global_97978) || Global_24948) || func_154()) || func_74(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_155()) || Global_97978) || Global_24948) || func_154()) || func_74(8, -1)) || func_153()) || func_152()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_74(8, -1)) || func_150()) || func_149()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_74(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
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
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_155()) || Global_24948) || func_154()) || func_74(8, -1)) || func_152()) || func_151()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_155()) || func_152()) || Global_97978) || Global_24948) || func_154()) || Global_36493) || func_74(8, -1)) || func_151()) || func_149()) || func_150()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_155()) || Global_97978) || Global_24948) || func_154()) || func_74(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
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

var func_148()
{
	return Global_90848.f_1;
}

int func_149()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
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

bool func_152()
{
	return Global_90861.f_297 > 0;
}

bool func_153()
{
	return Global_90861.f_296 > 0;
}

var func_154()
{
	return Global_1315892;
}

int func_155()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	func_72();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_43();
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

int func_159(int iParam0)
{
	if (!func_45(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_163())
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

int func_161()
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

bool func_162(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_163()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF3148AAF69AF9CBC(&iVar0, 2);
				unk_0xF3148AAF69AF9CBC(&iVar0, 4);
				unk_0xF3148AAF69AF9CBC(&iVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), iVar0, 1);
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

void func_164()
{
	if (unk_0x9284F36E422CA571())
	{
		switch (iLocal_48)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_195(6);
				func_178();
				break;
			
			case 3:
				func_195(5);
				func_178();
				break;
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_54))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_54) && !unk_0x930F8FBB8E9537CC(iLocal_54))
			{
				unk_0x930F8FBB8E9537CC(iLocal_53);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
				{
					unk_0x06189C52198B2264(iLocal_54, unk_0xB6AE0DAE06D56288(iLocal_53, 1), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0x06189C52198B2264(iLocal_54, unk_0xB6AE0DAE06D56288(iLocal_54, 1), 9000f, -1, 0, 0);
				}
				unk_0x1D15D99A10A15334(iLocal_54, 0);
				unk_0x6CB332CB31E9FA96(iLocal_54, 1);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_53))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_53))
			{
				unk_0x6CB332CB31E9FA96(iLocal_53, 1);
				unk_0x1D15D99A10A15334(iLocal_53, 0);
				unk_0x4B02C172923DC989(iLocal_53, 1);
				unk_0x33B1E568CEF14B0D(iLocal_53, 1);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_55))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_55))
			{
				if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					func_56();
				}
				unk_0x1D15D99A10A15334(iLocal_55, 0);
				unk_0x4B02C172923DC989(iLocal_55, 1);
			}
		}
		if (func_177())
		{
			unk_0x5B6D37392F5991C3(1f);
			unk_0xF8E77F310A5B6EAB(2, iLocal_71, iLocal_70);
			unk_0xF8E77F310A5B6EAB(2, iLocal_70, iLocal_71);
		}
		if (iLocal_76)
		{
			unk_0x92F7CFC5EAFC0661(1);
		}
	}
	unk_0xC3A1174645E71AB9(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_286)
	{
		unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 3, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
	}
	func_165(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xC23A229F78DAD92A();
}

void func_165(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_177())
	{
		func_170(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_169(30000);
		StringCopy(&cVar0, func_168(Global_98920, 1), 64);
		if (func_167(Global_98920) > 0)
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
	func_166(&Global_25005);
	Global_98921 = 0;
	func_118(-1);
}

void func_166(var uParam0)
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

int func_167(int iParam0)
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

char* func_168(int iParam0, bool bParam1)
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

void func_169(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_170(int iParam0)
{
	func_171(iParam0, 0, func_176(iParam0));
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_174(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_173(iParam0, &uVar0);
	Var1 = { func_172(&uVar0) };
}

struct<16> func_172(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_131(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_134(*uParam0), 64);
	return Var0;
}

void func_173(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
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
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_175(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
}

int func_176(int iParam0)
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

int func_177()
{
	if ((Global_98920 == func_119() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_178()
{
	if (!bLocal_75)
	{
		func_194();
	}
	func_181(15, iLocal_52);
	func_179();
}

void func_179()
{
	func_180();
}

int func_180()
{
	if (func_162(0))
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

void func_181(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_119();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_167(iParam0))
	{
		func_193(iParam0, iParam1);
		if (!func_192(51))
		{
			func_189("RE_REWARD", 1, 0, 4000, 10000, func_109(), 0, 138, 0);
			func_188(51);
		}
		if (func_88(iParam0))
		{
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_187(iParam0, iParam1) != 322)
		{
			func_182(func_187(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_195(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
			{
				func_195(7);
			}
			else
			{
				func_195(1);
			}
		}
	}
}

void func_182(int iParam0, var uParam1, var uParam2)
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
		func_185((891 + iParam0), 1, -1, 1);
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
		func_183();
	}
}

void func_183()
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
		func_39(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_184() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_180();
				}
			}
		}
	}
}

int func_184()
{
	return Global_24946;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_186();
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

int func_186()
{
	return Global_1312729;
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0)
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

void func_189(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_190(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_190(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_191();
	}
}

void func_191()
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

int func_192(int iParam0)
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

void func_193(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
}

int func_194()
{
	return 1;
}

void func_195(int iParam0)
{
	Global_98917 = iParam0;
}

void func_196()
{
	if (!bLocal_73 && iLocal_50 == 0)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_53) && !unk_0x5FEB513A4402FD59(iLocal_54))
		{
			unk_0xCEF5C750AC257B88(iLocal_53, unk_0xB6AE0DAE06D56288(iLocal_54, 1), 3f, 20000, 1193033728, 1056964608);
			unk_0x6CB332CB31E9FA96(iLocal_53, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

