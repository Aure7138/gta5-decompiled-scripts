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
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
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
	if (unk_0xC968670BFACE42D9(11))
	{
		bLocal_75 = true;
		func_195();
		func_163();
	}
	if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
	{
		iLocal_52 = 1;
	}
	else
	{
		iLocal_52 = 2;
	}
	if (func_120(Local_64, 15, iLocal_52, 0, 0))
	{
		func_115(15);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
		}
		switch (iLocal_47)
		{
			case 0:
				if ((unk_0xC5042CC6F5E3D450() && !func_114()) && !func_101())
				{
					if (func_98())
					{
						iLocal_47 = 1;
					}
				}
				else
				{
					func_163();
				}
				break;
			
			case 1:
				if (func_94())
				{
					unk_0x1A5AA1208AF5DB59(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, false, true, true);
					unk_0x020E5F00CDA207BA(0f);
					func_83(1);
					iLocal_47 = 2;
				}
				else if (!func_82(200f))
				{
					func_163();
				}
				break;
			
			case 2:
				if (func_82(1128792064))
				{
					func_1();
				}
				else
				{
					func_163();
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
	
	unk_0x933D6A9EEC1BACD0(&uVar0, 3);
	unk_0x933D6A9EEC1BACD0(&uVar0, 4);
	iVar5 = 0;
	func_81();
	if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		unk_0xC1E8A365BF3B29F2(iLocal_54, 129, true);
	}
	if (func_80(iLocal_54))
	{
		if (unk_0x4FBACCE3B4138EE8(iLocal_54, 0))
		{
			bLocal_297 = true;
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53) && (iLocal_48 != 2 && iLocal_48 != 1))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			switch (iLocal_51)
			{
				case 0:
					unk_0xA3BB2E9555C05A8F("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (unk_0x83666F9FB8FEBD4B() > 10)
					{
						if (!bLocal_73)
						{
							if (unk_0x77F1BEB8863288D5(iLocal_53, 1227113341) == 7)
							{
								unk_0x6A071245EB0D1882(iLocal_53, iLocal_54, -1, 1f, 3f, 2f, 0);
							}
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 4000)
					{
						if (!bLocal_73)
						{
							if (unk_0x77F1BEB8863288D5(iLocal_54, 1805844857) == 7)
							{
								if (unk_0x77F1BEB8863288D5(iLocal_54, -2017877118) == 1)
								{
									unk_0xEE08C992D238C5D1(iLocal_54, 2, true);
								}
								unk_0x22B0D0E37CCB840D(iLocal_54, iLocal_53, 150f, -1, false, false);
							}
						}
					}
					fVar4 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iLocal_53, true), unk_0x3FEF770D40960D5A(iLocal_54, true), true);
					if (unk_0x83666F9FB8FEBD4B() > 8000 || fVar4 < 1.5f)
					{
						iVar5 = func_76();
						if (iVar5 == 1)
						{
							unk_0x6A071245EB0D1882(iLocal_53, iLocal_54, -1, 1f, 0.01f, 2f, 0);
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
							if (!func_75())
							{
								if (func_65(&uLocal_77, "REARRAU", "REARR_PCUFF", 4, iLocal_253, 0, 0))
								{
								}
								bLocal_293 = (unk_0x47E4E977581C5B55(iLocal_54) || unk_0x2A74E1D5F2F00EEC(iLocal_54));
								if (!unk_0x8DECB02F88F428BC(iLocal_53, joaat("weapon_pistol"), false))
								{
									unk_0xBF0FD6E56C964FCB(iLocal_53, joaat("weapon_pistol"), -1, false, true);
								}
								unk_0xADF692B254977C0C(iLocal_53, joaat("weapon_pistol"), true);
								Local_67 = { unk_0x3FEF770D40960D5A(iLocal_54, true) };
								unk_0xE1EF3C1216AFF2CD(iLocal_53);
								unk_0xE8854A4326B9E12B(&iLocal_72);
								if (!bLocal_293 && fVar4 > 2f)
								{
									unk_0x46A6CC01E0826106(0, Local_67.f_0, Local_67.f_1, (Local_67.f_2 + 4f), 1000, 1566631136);
								}
								unk_0x69F4BE8C8CC4796C(0, iLocal_54, -1, 2048, 2);
								unk_0x97465886D35210E9(0, iLocal_54, iLocal_54, 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								unk_0x9B53BB6E8943AF53(0, iLocal_54, 5000, false);
								unk_0x39E72BC99E6360CB(iLocal_72);
								unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
								unk_0x3841422E9C488D8C(&iLocal_72);
								unk_0xA72CD9CA74A5ECBA(iLocal_53);
								unk_0x971D38760FBC02EF(iLocal_53, true);
								unk_0xC1B1E9A034A63A62(0);
								iLocal_245 = unk_0x9CD27B0045628463();
								if (bLocal_293)
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_54);
									unk_0x6B7513D9966FBEC0(iLocal_54);
									iLocal_51 = 4;
								}
								else
								{
									iLocal_51 = 2;
								}
							}
							else if (!iLocal_277)
							{
								unk_0x6A071245EB0D1882(iLocal_53, iLocal_54, -1, 1f, 0.01f, 2f, 0);
								iLocal_277 = 1;
							}
						}
						else
						{
							func_64();
						}
					}
					else
					{
						unk_0xA3BB2E9555C05A8F("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_53) && !unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
						{
							if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iLocal_53))
							{
								unk_0xE1EF3C1216AFF2CD(iLocal_53);
								iLocal_51 = 1;
								unk_0x919BE13EED931959(iLocal_53, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0x77F1BEB8863288D5(iLocal_53, -982327190) == 7)
					{
						unk_0x6A071245EB0D1882(iLocal_53, iLocal_54, -1, 1f, 3f, 2f, 0);
						iLocal_51 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x9CD27B0045628463() - iLocal_245) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0xE83D4F9BA2A38914(iLocal_54) * 3f) };
						unk_0x15D3A79D4E44B913(iLocal_54, Var1, 2f, -1, 1f, 1024, 40000f);
						iLocal_51 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x9CD27B0045628463() - iLocal_245) > 4500)
					{
						iLocal_51 = 4;
					}
					break;
				
				case 4:
					bLocal_73 = true;
					unk_0xE8854A4326B9E12B(&iLocal_72);
					unk_0xEA47FE3719165B94(0, sLocal_257, "idle_2_hands_up", 2f, -8f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0f, false, false, false);
					unk_0x39E72BC99E6360CB(iLocal_72);
					unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
					unk_0x3841422E9C488D8C(&iLocal_72);
					unk_0xA72CD9CA74A5ECBA(iLocal_54);
					unk_0x971D38760FBC02EF(iLocal_54, true);
					unk_0xF25DF915FA38C5F3(iLocal_54, true);
					iLocal_51 = 5;
					break;
				
				case 5:
					if (iLocal_49 == 3)
					{
						if (unk_0x77F1BEB8863288D5(iLocal_53, 242628503) == 7)
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_53);
							if (!unk_0x8DECB02F88F428BC(iLocal_53, joaat("weapon_pistol"), false))
							{
								unk_0xBF0FD6E56C964FCB(iLocal_53, joaat("weapon_pistol"), -1, false, true);
							}
							unk_0xADF692B254977C0C(iLocal_53, joaat("weapon_pistol"), true);
							unk_0xE8854A4326B9E12B(&iLocal_72);
							unk_0x9B53BB6E8943AF53(0, iLocal_54, -1, false);
							unk_0x39E72BC99E6360CB(iLocal_72);
							unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
							unk_0x3841422E9C488D8C(&iLocal_72);
							unk_0x971D38760FBC02EF(iLocal_53, true);
							iLocal_51 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0x4C241E39B23DF959(iLocal_56, false) && !unk_0x84A2DD9AC37C35C1(iLocal_55))
					{
						unk_0xBE5C1255A1830FF5(iLocal_56, true);
						if (unk_0x77F1BEB8863288D5(iLocal_53, -2017877118) == 7)
						{
							if (unk_0x77F1BEB8863288D5(iLocal_55, -1273030092) == 7)
							{
								if (unk_0x639431E895B9AA57(iLocal_54, iLocal_56, 2, false, false))
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
									{
										if (!unk_0xA808AA1D79230FC2(iLocal_54, iLocal_56))
										{
											if (!unk_0x4859F1FC66A6278E(iLocal_54, 0))
											{
												if (unk_0x77F1BEB8863288D5(iLocal_54, -1794415470) == 7)
												{
													unk_0xE8854A4326B9E12B(&iLocal_72);
													unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0f, false, false, false);
													unk_0x39E72BC99E6360CB(iLocal_72);
													unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
													unk_0x3841422E9C488D8C(&iLocal_72);
													unk_0xBF25EB89375A37AD(0, iLocal_71, iLocal_70);
													unk_0xBF25EB89375A37AD(0, iLocal_70, iLocal_71);
												}
											}
										}
									}
									if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
									{
										unk_0x570389D1C3DE3C6B(iLocal_53);
										if (!unk_0x4859F1FC66A6278E(iLocal_53, 0))
										{
											if (unk_0x4C241E39B23DF959(iLocal_56, false))
											{
												if (!func_75())
												{
													if (func_65(&uLocal_77, "REARRAU", "REARR_INCAR", 4, iLocal_253, 0, 0))
													{
														if (func_63(iLocal_53, iLocal_56) == 2)
														{
															if (unk_0xD71649DB0A545AA3(iLocal_55, iLocal_54, 180f))
															{
																Local_294 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_294 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0xD71649DB0A545AA3(iLocal_55, iLocal_54, 180f))
														{
															Local_294 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_294 = { -2.978f, 0.75f, 1f };
														}
														unk_0xE8854A4326B9E12B(&iLocal_72);
														unk_0xB2A16444EAD9AE47(0, unk_0x1899F328B0E12848(iLocal_56, Local_294), iLocal_54, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														unk_0x9B53BB6E8943AF53(0, iLocal_54, -1, false);
														unk_0x39E72BC99E6360CB(iLocal_72);
														unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
														unk_0x3841422E9C488D8C(&iLocal_72);
														unk_0x971D38760FBC02EF(iLocal_53, true);
														unk_0xF4924635A19EB37D(iLocal_56, false);
														iLocal_243 = 8000;
														unk_0x5AE11BC36633DE4E(0);
														iLocal_276 = unk_0x9CD27B0045628463();
														iLocal_51 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_62();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 35f, 35f, 35f, false, true, 0))
						{
							if ((unk_0x9CD27B0045628463() - iLocal_276) > 8000)
							{
								if (!func_75())
								{
									unk_0x69F4BE8C8CC4796C(iLocal_53, unk_0xD80958FC74E988A6(), 6000, 2048, 2);
									func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
									iLocal_276 = unk_0x9CD27B0045628463();
								}
							}
						}
						if (unk_0x4C241E39B23DF959(iLocal_56, false))
						{
							if (iLocal_63)
							{
								if (func_63(iLocal_53, iLocal_56) == 2)
								{
									unk_0xC20E50AA46D09CA8(iLocal_54, iLocal_56, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0xC20E50AA46D09CA8(iLocal_54, iLocal_56, -1, 1, 1f, 1, 0);
								}
								iLocal_51 = 8;
							}
							else if (iLocal_62)
							{
								fVar6 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iLocal_54, true), unk_0x3FEF770D40960D5A(iLocal_56, true), true);
								if (fVar6 < 4f && iLocal_284 == 0)
								{
									unk_0x338E7EF52B6095A9(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, true);
									iLocal_284 = 1;
								}
								else if (fVar6 < 3f)
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_54);
									iLocal_63 = 1;
								}
							}
							else if (!unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "kneeling_arrest_get_up", 3))
							{
								if (func_63(iLocal_53, iLocal_56) == 2)
								{
									Local_294 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_294 = { -1.578f, -0.5f, 1f };
								}
								unk_0x338E7EF52B6095A9(iLocal_54, iLocal_56, 60000, 0.5f, Local_294.f_0, Local_294.f_1, 1f, true);
								if (bLocal_297)
								{
									unk_0xAF8A94EDE7712BEF(iLocal_54, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
								}
								else
								{
									unk_0xAF8A94EDE7712BEF(iLocal_54, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
								}
								iLocal_62 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x4C241E39B23DF959(iLocal_56, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
						{
							if (unk_0xA808AA1D79230FC2(iLocal_54, iLocal_56))
							{
								if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
								{
									unk_0x86A652570E5F25DD(&iLocal_57);
								}
								if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
								{
									unk_0x86A652570E5F25DD(&iLocal_58);
								}
								if (unk_0xA808AA1D79230FC2(iLocal_53, iLocal_56))
								{
									unk_0x480142959D337D00(iLocal_55, iLocal_56, 10f, 786603);
									unk_0x971D38760FBC02EF(iLocal_55, true);
									unk_0x9F8AA94D6D97DBF4(iLocal_53, false);
									func_163();
								}
								else if (unk_0x77F1BEB8863288D5(iLocal_53, -1794415470) == 7)
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_53);
									unk_0xC20E50AA46D09CA8(iLocal_53, iLocal_56, 20000, 0, 1f, 1, 0);
									unk_0x971D38760FBC02EF(iLocal_53, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_48();
	if (unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			if (iLocal_48 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_48 == 1 || iLocal_48 == 3)
				{
					if (!func_75())
					{
						if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iLocal_54, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) < 20f)
						{
							func_65(&uLocal_77, "REARRAU", sLocal_273, 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
				{
					unk_0xE8854A4326B9E12B(&iLocal_72);
					unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0f, false, false, false);
					unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x39E72BC99E6360CB(iLocal_72);
					unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
					unk_0x3841422E9C488D8C(&iLocal_72);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(iLocal_54, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_54, true);
				}
				unk_0x4EDE34FBADD967A6(0);
				if (iLocal_48 == 0)
				{
					iLocal_48 = 2;
				}
				func_163();
			}
		}
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_54))
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
	if (unk_0x9CD27B0045628463() > iLocal_254 + 1000)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
		{
			if (!unk_0x751B70C3D034E187(iLocal_53, unk_0xD80958FC74E988A6(), Var1, false, true, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			if (!unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), Var1, false, true, 0))
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
		iLocal_254 = unk_0x9CD27B0045628463();
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		switch (iLocal_49)
		{
			case 0:
				if ((iLocal_242 == 3 || iLocal_51 == 5) || iLocal_51 == 6)
				{
					if (!func_75())
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_53);
						unk_0xE8854A4326B9E12B(&iLocal_72);
						unk_0x6FA46612594F7973(0, unk_0x3FEF770D40960D5A(iLocal_54, false), 10000, 0, 2);
						unk_0xEA47FE3719165B94(0, sLocal_257, sVar0, 8f, -4f, -1, 0, 0f, false, false, false);
						unk_0xEA47FE3719165B94(0, sLocal_257, sVar1, 16f, -8f, -1, 1, 0f, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_72);
						unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
						unk_0x3841422E9C488D8C(&iLocal_72);
						iLocal_49 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x1F0B79228E461EC9(iLocal_53, sLocal_257, sVar1, 3))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
					{
						if (!func_75())
						{
							if (func_65(&uLocal_77, "REARRAU", "REARR_PRAD1", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_75())
						{
							if (func_65(&uLocal_77, "REARRAU", "REARR_PRAD2", 4, iLocal_253, 0, 0))
							{
								iLocal_49 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_75())
				{
					if (func_10())
					{
						if (unk_0x4C241E39B23DF959(iLocal_56, false))
						{
							unk_0xD8050E0EB60CF274(iLocal_56, false);
							unk_0xF4924635A19EB37D(iLocal_56, true);
						}
						unk_0xE1EF3C1216AFF2CD(iLocal_53);
						unk_0xE8854A4326B9E12B(&iLocal_72);
						unk_0xEA47FE3719165B94(0, sLocal_257, sVar2, 8f, -1.5f, -1, 0, 0f, false, false, false);
						unk_0x39E72BC99E6360CB(iLocal_72);
						unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
						unk_0x3841422E9C488D8C(&iLocal_72);
						unk_0x2208438012482A1A(iLocal_53, false, false);
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
				if (unk_0x7239B21A38F536BA(iLocal_54) || !unk_0x5F9532F3B5CC2551(iLocal_54))
				{
					if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_54))
					{
						if (!func_75())
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0);
						}
					}
				}
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 35f, 35f, 35f, false, true, 0))
				{
					unk_0xC32779C16FCEECD9(iLocal_53, 1, unk_0xD80958FC74E988A6(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0xC32779C16FCEECD9(unk_0xD80958FC74E988A6(), 1, iLocal_53, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (unk_0xC9D9444186B5A374() > iLocal_243 || iLocal_261)
					{
						if (iLocal_48 == 3 || iLocal_48 == 0)
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
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
								else if (!func_75())
								{
									unk_0x69F4BE8C8CC4796C(iLocal_53, unk_0xD80958FC74E988A6(), 500, 2048, 2);
									func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
									iLocal_243 = 8000;
								}
							}
							else if (iLocal_243 == 8000)
							{
								if (!func_75())
								{
									func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 20000;
								}
							}
							else if (!func_75())
							{
								func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
								iLocal_243 = 8000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
						else
						{
							if (unk_0x84A2DD9AC37C35C1(iLocal_54))
							{
								if (!func_75())
								{
									func_65(&uLocal_77, "REARRAU", "REARR_PRA2", 4, iLocal_253, 0, 0);
									iLocal_243 = 30000;
								}
							}
							else if (!func_75())
							{
								unk_0x69F4BE8C8CC4796C(iLocal_53, unk_0xD80958FC74E988A6(), 6000, 2048, 2);
								func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
								iLocal_243 = unk_0xD53343AA4FB7DD28(8, 22);
								iLocal_243 *= 30000;
							}
							unk_0x5AE11BC36633DE4E(0);
						}
					}
				}
				if (iLocal_51 != 8)
				{
					if (unk_0x4C241E39B23DF959(iLocal_56, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
						{
							if (!unk_0xA3EE4A07279BB9DB(iLocal_54, iLocal_56, false))
							{
								func_62();
							}
						}
					}
					else
					{
						func_62();
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
		switch (unk_0xD53343AA4FB7DD28(0, 3))
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
		unk_0xE8854A4326B9E12B(&iLocal_72);
		unk_0xEA47FE3719165B94(0, sLocal_258, "enter", 8f, -4f, -1, 0, 0f, false, false, false);
		unk_0xEA47FE3719165B94(0, sLocal_258, sLocal_259, 8f, -4f, -1, 0, 0f, false, false, false);
		unk_0xEA47FE3719165B94(0, sLocal_258, "exit", 8f, -4f, -1, 0, 0f, false, false, false);
		unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0f, false, false, false);
		unk_0x39E72BC99E6360CB(iLocal_72);
		unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
		unk_0x3841422E9C488D8C(&iLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_258, "enter", 3))
	{
		if (func_5())
		{
			func_65(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_258, "exit", 3))
	{
	}
	else if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_258, sLocal_259, 3))
	{
		func_65(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x9CD27B0045628463() > iLocal_263 + 6000)
	{
		iLocal_263 = unk_0x9CD27B0045628463();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_261)
	{
		unk_0xE8854A4326B9E12B(&iLocal_72);
		unk_0xEA47FE3719165B94(0, sLocal_257, "radio_enter", 8f, -4f, -1, 0, 0f, false, false, false);
		unk_0xEA47FE3719165B94(0, sLocal_257, "radio_chatter", 8f, -4f, -1, 0, 0f, false, false, false);
		unk_0xEA47FE3719165B94(0, sLocal_257, "radio_exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
		unk_0x9B53BB6E8943AF53(0, iLocal_54, -1, false);
		unk_0x39E72BC99E6360CB(iLocal_72);
		unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
		unk_0x3841422E9C488D8C(&iLocal_72);
		iLocal_261 = 1;
	}
	else if (unk_0x1F0B79228E461EC9(iLocal_53, sLocal_257, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_65(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
		}
	}
	else if (unk_0x1F0B79228E461EC9(iLocal_53, sLocal_257, "radio_exit", 3))
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
				unk_0x5F9532F3B5CC2551(iLocal_53);
				unk_0x5F9532F3B5CC2551(iLocal_54);
				if (unk_0x7239B21A38F536BA(iLocal_53) && unk_0x7239B21A38F536BA(iLocal_54))
				{
					unk_0x338E7EF52B6095A9(iLocal_53, iLocal_54, -1, 3f, 0f, 0f, 1f, false);
				}
				unk_0x5AE11BC36633DE4E(0);
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
			{
				unk_0x86A652570E5F25DD(&iLocal_57);
			}
			iLocal_50 = 2;
			iLocal_243 = 8000;
			iLocal_290 = unk_0x9CD27B0045628463();
			break;
		
		case 2:
			if (unk_0x4C241E39B23DF959(iLocal_56, false))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_290) > 20000)
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
					{
						if (unk_0x77F1BEB8863288D5(iLocal_55, -1273030092) == 7)
						{
							unk_0xC20E50AA46D09CA8(iLocal_53, iLocal_56, -1, 0, 1f, 1, 0);
							iLocal_50 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x4C241E39B23DF959(iLocal_56, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
				{
					if (unk_0xA808AA1D79230FC2(iLocal_53, iLocal_56))
					{
						unk_0x480142959D337D00(iLocal_55, iLocal_56, 10f, 786603);
						unk_0x971D38760FBC02EF(iLocal_55, true);
						func_163();
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
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
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
	if (unk_0x4C241E39B23DF959(iLocal_56, false))
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iVar12);
	if (unk_0x98A4EB5D89A0C952(iVar12))
	{
		if (unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iLocal_53, false), 1, &Var0, 1, 1077936128, 0))
		{
			if (unk_0xA4822F1CF23F4810(&Var0, &Var6, &uVar9, 0f, 180f, 50f, 1, 1, 1))
			{
				iLocal_56 = unk_0xAF35D0D2583051B0(iVar12, Var6, 0, 1, 1);
				iLocal_55 = unk_0x7DD959874C1FD534(iLocal_56, 6, joaat("s_m_y_ranger_01"), -1, true, true);
				unk_0x1913FE4CBF41C463(iLocal_55, 294, true);
				if (!unk_0x8DECB02F88F428BC(iLocal_55, joaat("weapon_pistol"), false))
				{
					unk_0xBF0FD6E56C964FCB(iLocal_55, joaat("weapon_pistol"), -1, false, true);
				}
				unk_0xADF692B254977C0C(iLocal_55, joaat("weapon_pistol"), true);
				unk_0xC80A74AC829DDD92(iLocal_55, iLocal_70);
				unk_0xB664292EAECF7FA6(iLocal_56, 3);
				unk_0x9F8AA94D6D97DBF4(iLocal_55, true);
				unk_0x49733E92263139D1(iLocal_56);
				unk_0x2B6747FAA9DB9D6B(iLocal_56, true);
				unk_0x25367DE49D64CF16(iLocal_56, true);
				Var0 = { unk_0x3FEF770D40960D5A(iLocal_56, true) };
				Var3 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - Var0 };
				unk_0x8E2530AA8ADA980E(iLocal_56, unk_0x2FFB6B224F4B2926(Var3.f_0, Var3.f_1));
				unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(iLocal_53, false), 1, &Var0, 1, 1077936128, 0);
				if (unk_0xF1B760881820C952(Var0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0xF1B760881820C952(2538.71f, 2592.007f, 36.9446f, Var0, true) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0xF0AF20AA7731F8C3(iLocal_55, iLocal_56, Var0, 4, 7f, 786471, 5f, -1f, true);
				unk_0xAB54A438726D25D5(iLocal_56, 4f);
				unk_0xF4924635A19EB37D(iLocal_56, true);
				iLocal_76 = 1;
				unk_0x80D9F74197EA47D9(false);
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
			if (unk_0x77F1BEB8863288D5(iLocal_53, 242628503) == 7 || unk_0x9CD27B0045628463() > iLocal_245 + 15000)
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 25f, 25f, 25f, false, true, 0))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_53);
						unk_0xE8854A4326B9E12B(&iLocal_72);
						if (!unk_0x5F9532F3B5CC2551(iLocal_54))
						{
							unk_0x6A071245EB0D1882(0, iLocal_54, -1, 3.5f, 2f, 2f, 0);
						}
						unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 2000);
						unk_0x39E72BC99E6360CB(iLocal_72);
						unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
						unk_0x3841422E9C488D8C(&iLocal_72);
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
			if (unk_0x77F1BEB8863288D5(iLocal_53, 242628503) == 1)
			{
				if (unk_0x00A9010CFE1E3533(iLocal_53) > 0)
				{
					if (!func_75())
					{
						if (iLocal_244 < 2)
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
							if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
							{
								unk_0x6F6F290102C02AB4(iLocal_57, true);
							}
						}
						else
						{
							func_65(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
						}
						iLocal_242 = 2;
					}
				}
			}
			else if (!func_75())
			{
				if (iLocal_244 < 2)
				{
					func_65(&uLocal_77, "REARRAU", "REARR_PTHANK", 4, iLocal_253, 0, 0);
					if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
					{
						unk_0x6F6F290102C02AB4(iLocal_57, true);
					}
				}
				else
				{
					func_65(&uLocal_77, "REARRAU", "REARR_PHELP", 4, iLocal_253, 0, 0);
				}
				iLocal_242 = 2;
			}
			break;
		
		case 2:
			if (!func_75())
			{
				iLocal_242 = 3;
			}
			unk_0x5AD23D40115353AC(iLocal_53, unk_0xD80958FC74E988A6(), 100);
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
	
	bVar0 = unk_0xC86D67D52A707CF8(iLocal_54, unk_0xD80958FC74E988A6(), true);
	bVar1 = func_47();
	if (bVar1)
	{
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
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
							unk_0xA3BB2E9555C05A8F("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0x6F6F290102C02AB4(iLocal_58, true);
							if (!unk_0x5F9532F3B5CC2551(iLocal_54) && unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
							{
								unk_0xE8854A4326B9E12B(&iLocal_72);
								unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0f, false, false, false);
								unk_0x39E72BC99E6360CB(iLocal_72);
								unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
								unk_0x3841422E9C488D8C(&iLocal_72);
								iLocal_246 = 9;
							}
							else
							{
								iLocal_246 = 3;
							}
							break;
						
						case 9:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x77F1BEB8863288D5(iLocal_54, 242628503) == 7)
							{
								iLocal_246 = 0;
							}
							break;
						
						case 0:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), 75f, 75f, 75f, false, true, 0))
							{
								unk_0x9D64D7405520E3D3(iLocal_54, true);
								iLocal_246 = 3;
							}
							break;
						
						case 1:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x20B60995556D004F(iLocal_54, unk_0x3FEF770D40960D5A(iLocal_53, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_246 = 2;
							}
							else
							{
								unk_0xE1EF3C1216AFF2CD(iLocal_54);
								unk_0xE8854A4326B9E12B(&iLocal_72);
								unk_0x6FA46612594F7973(0, unk_0x3FEF770D40960D5A(iLocal_53, false), 1000, 0, 2);
								unk_0x15D3A79D4E44B913(0, unk_0x3FEF770D40960D5A(iLocal_53, false), 2f, -1, 3f, false, 40000f);
								unk_0x39E72BC99E6360CB(iLocal_72);
								unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
								unk_0x3841422E9C488D8C(&iLocal_72);
								iLocal_246 = 2;
							}
							break;
						
						case 2:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x20B60995556D004F(iLocal_54, unk_0x3FEF770D40960D5A(iLocal_53, false), 4f, 4f, 3f, false, true, 0))
							{
								if (unk_0x77F1BEB8863288D5(iLocal_54, 242628503) == 7 || func_65(&uLocal_77, "REARRAU", sLocal_270, 4, iLocal_253, 0, 0))
								{
									iLocal_246 = 6;
								}
							}
							else if (unk_0x77F1BEB8863288D5(iLocal_54, 242628503) == 7)
							{
								unk_0xE8854A4326B9E12B(&iLocal_72);
								unk_0x6FA46612594F7973(0, unk_0x3FEF770D40960D5A(iLocal_53, false), 1000, 0, 2);
								unk_0x15D3A79D4E44B913(0, unk_0x3FEF770D40960D5A(iLocal_53, false), 2f, -1, 3f, false, 40000f);
								unk_0x39E72BC99E6360CB(iLocal_72);
								unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
								unk_0x3841422E9C488D8C(&iLocal_72);
							}
							break;
						
						case 3:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_246 = 4;
							}
							else if (unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), 75f, 75f, 75f, false, true, 0))
							{
								if (!func_75())
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_54);
									unk_0xE8854A4326B9E12B(&iLocal_72);
									unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 8f, 2f, 2f, 0);
									unk_0x39E72BC99E6360CB(iLocal_72);
									unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
									unk_0x3841422E9C488D8C(&iLocal_72);
									iLocal_246 = 4;
								}
							}
							else
							{
								iLocal_246 = 6;
							}
							break;
						
						case 4:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_291 = unk_0x9CD27B0045628463();
								iLocal_246 = 7;
							}
							break;
						
						case 7:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0x5CD3CB88A7F8850D(iLocal_54, unk_0xD80958FC74E988A6()))
							{
								unk_0x69F4BE8C8CC4796C(iLocal_54, unk_0xD80958FC74E988A6(), -1, 2064, 2);
							}
							if (!unk_0xD71649DB0A545AA3(iLocal_54, unk_0xD80958FC74E988A6(), 30f))
							{
								unk_0x5AD23D40115353AC(iLocal_54, unk_0xD80958FC74E988A6(), -1);
							}
							if ((unk_0x9CD27B0045628463() - iLocal_291) > 2000)
							{
								iLocal_246 = 5;
							}
							break;
						
						case 5:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "Thanks_Male_05", 3) || unk_0x77F1BEB8863288D5(iLocal_54, 242628503) == 7)
							{
								if (!func_75())
								{
									if (iLocal_244 < 2)
									{
										func_65(&uLocal_77, "REARRAU", sLocal_265, 4, iLocal_253, 0, 0);
										unk_0xEA47FE3719165B94(iLocal_54, sLocal_257, "Thanks_Male_05", 16f, -16f, -1, 16, 0f, false, false, false);
									}
									else
									{
										func_65(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
									}
									func_15(func_41(), 1, 250, 0, 0);
									unk_0x0F804F1DB19B9689(iLocal_54);
									iLocal_246 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xA3BB2E9555C05A8F("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_75())
							{
								unk_0x22B0D0E37CCB840D(iLocal_54, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
								func_163();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_75())
				{
					func_65(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
				}
				unk_0x22B0D0E37CCB840D(iLocal_54, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
				func_163();
			}
		}
		else
		{
			func_13();
			unk_0x22B0D0E37CCB840D(iLocal_54, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
			if (bVar0 == 1)
			{
				iLocal_48 = 1;
			}
			if (!func_75())
			{
				func_65(&uLocal_77, "REARRAU", sLocal_269, 4, iLocal_253, 0, 0);
			}
			func_163();
		}
	}
}

void func_13()
{
	Global_14558 = 0;
	func_14();
}

void func_14()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_16(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
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
	
	func_40();
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
					func_39(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
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
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_39(95, iParam3);
					break;
				
				case 1:
					func_39(97, iParam3);
					break;
				
				case 2:
					func_39(96, iParam3);
					break;
			}
			func_39(98, iParam3);
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
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_34909 == 15)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_21() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_20(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
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
	func_39(93, iParam0);
	func_39(29, iParam0);
	func_39(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_21() /*8053*/].f_5756.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_37(27, iVar1);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_36(&Global_2543696))
	{
		if (func_34(&Global_2543696, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2543696, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
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
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_31(&(uParam0->f_62), (8f - 0.5f));
}

void func_31(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_32() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_32()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
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
	return uParam0->f_68 == 1;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_40()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_41()
{
	func_42();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_46(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_45(unk_0xD80958FC74E988A6());
			if (func_44(iVar0) && (!func_43(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_44(Global_97173.f_1729.f_539.f_3213))
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

bool func_43(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_47()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0x4C241E39B23DF959(iLocal_56, false))
	{
		if (unk_0x751B70C3D034E187(iLocal_56, iLocal_54, fVar0, fVar0, fVar0, false, true, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(iLocal_54, false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x84A2DD9AC37C35C1(iVar1))
	{
		if (unk_0x9F47B058362C84B5(iVar1) == joaat("s_f_y_cop_01") || unk_0x9F47B058362C84B5(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0x876046A8E3A4B71C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x84A2DD9AC37C35C1(iVar1))
	{
		if (unk_0x9F47B058362C84B5(iVar1) == joaat("s_f_y_cop_01") || unk_0x9F47B058362C84B5(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(iLocal_54, false), fVar0, 0, 1024);
	if (unk_0x4C241E39B23DF959(iVar2, false))
	{
		return 1;
	}
	iVar2 = unk_0x386F6CE5BAF6091C(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), fVar0, 0, 1024);
	if (unk_0x4C241E39B23DF959(iVar2, false))
	{
		return 1;
	}
	return 0;
}

void func_48()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		bVar0 = unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_54);
		bVar1 = unk_0xC86D67D52A707CF8(iLocal_54, unk_0xD80958FC74E988A6(), true);
		if (((bVar1 || func_61()) || func_59()) || bVar0)
		{
			func_58();
			if (bLocal_73)
			{
				if (((bVar0 || bVar1) && !unk_0x47E4E977581C5B55(iLocal_54)) && !unk_0x997ABD671D25CA0B(iLocal_54, false))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_54);
					unk_0xAE99FB955581844A(iLocal_54, 500, 2000, 0, false, false, false);
					unk_0x3EB1FE9E8E908E15(iLocal_54, -1);
					unk_0x971D38760FBC02EF(iLocal_54, true);
				}
				else if (!unk_0x997ABD671D25CA0B(iLocal_54, false) && !unk_0x47E4E977581C5B55(iLocal_54))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_54);
					unk_0x3EB1FE9E8E908E15(iLocal_54, -1);
					unk_0x971D38760FBC02EF(iLocal_54, true);
				}
				func_54(0);
				if (!func_75())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_53) && iLocal_285 == 0)
					{
						if (func_65(&uLocal_77, "REARRAU", "REARR_PWTF", 4, iLocal_253, 0, 0))
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
		if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
		{
			unk_0x86A652570E5F25DD(&iLocal_58);
			func_53(&uLocal_77, 2);
		}
		func_58();
		if (unk_0xC86D67D52A707CF8(iLocal_54, unk_0xD80958FC74E988A6(), true))
		{
			if (bLocal_73)
			{
				func_54(1);
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 3;
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		if (bLocal_60)
		{
			if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				func_163();
			}
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
			{
				if ((unk_0xC86D67D52A707CF8(iLocal_55, unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_55) < 190) || (unk_0xC86D67D52A707CF8(iLocal_55, unk_0xD80958FC74E988A6(), true) && unk_0x47E4E977581C5B55(iLocal_55)))
				{
					iVar2 = 1;
				}
				if (unk_0x7239B21A38F536BA(iLocal_56) && unk_0xC86D67D52A707CF8(iLocal_56, unk_0xD80958FC74E988A6(), true))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true) && unk_0xEEF059FAD016D209(iLocal_53) < 190) || func_52()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || func_51()) || (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true) && unk_0x47E4E977581C5B55(iLocal_53))) || iVar2 == 1)
		{
			func_54(1);
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
		if (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true))
		{
			if (iLocal_286 == 0)
			{
				iLocal_286 = 1;
				iLocal_289 = unk_0x9CD27B0045628463();
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			unk_0xA72CD9CA74A5ECBA(iLocal_54);
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
		{
			unk_0x86A652570E5F25DD(&iLocal_57);
			func_53(&uLocal_77, 1);
		}
	}
	if (iLocal_286)
	{
		if ((unk_0x9CD27B0045628463() - iLocal_289) > 5000)
		{
			unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 3, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
			iLocal_286 = 0;
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53) && !unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_53, unk_0xD80958FC74E988A6(), true) && unk_0xC86D67D52A707CF8(iLocal_54, unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0xEEF059FAD016D209(iLocal_53) < 190 && unk_0xEEF059FAD016D209(iLocal_54) < 190)
			{
				func_58();
				func_54(1);
				iLocal_48 = 1;
			}
		}
		if (!unk_0x751B70C3D034E187(iLocal_54, iLocal_53, 110f, 110f, 40f, false, true, 0))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 20f, 20f, 20f, false, true, 0))
			{
				func_49();
				unk_0x4EDE34FBADD967A6(0);
				func_65(&uLocal_77, "REARRAU", "REARR_PORUN", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_54, 40f, 40f, 40f, false, true, 0))
			{
				func_49();
				unk_0x4EDE34FBADD967A6(0);
				func_65(&uLocal_77, "REARRAU", sLocal_266, 4, iLocal_253, 0, 0);
			}
			func_163();
		}
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_53) && unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		func_163();
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 100f, 100f, 40f, false, true, 0))
			{
				func_163();
			}
		}
	}
}

void func_49()
{
	Global_14558 = 0;
	func_50();
}

void func_50()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

bool func_51()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) == joaat("bulldozer"))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
			{
				if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iLocal_53))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0x4C241E39B23DF959(iLocal_56, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iLocal_56))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_76)
		{
			if (unk_0xC86D67D52A707CF8(iLocal_56, unk_0xD80958FC74E988A6(), true))
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

int func_52()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(iLocal_53, 31086, 0f, 0f, 0f), 0.5f, true))
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			return 1;
		}
		else if (!unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(iLocal_54, 31086, 0f, 0f, 0f), 2f, true))
		{
			return 1;
		}
	}
	if (unk_0x2F09F7976C512404(unk_0x17C07FC640E86B4E(iLocal_53, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 5f, 5f, 5f, false, true, 0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
		{
			if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_53) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_53))
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar6, true))
				{
					if (iVar6 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_54) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_54))
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar6, true))
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
	Var0 = { Var0 + unk_0x17C07FC640E86B4E(iLocal_53, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0x17C07FC640E86B4E(iLocal_53, 31086, 0f, 0f, 0f) };
	if (((unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_stickybomb"), true)) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("vehicle_weapon_tank"), true))
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_54(int iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		unk_0xA72CD9CA74A5ECBA(iLocal_53);
		if (!bLocal_60)
		{
			unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 2, false);
			unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
			unk_0x63F58F7C80513AAD(iLocal_53, true);
			if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
			{
				unk_0x6F6F290102C02AB4(iLocal_57, false);
			}
			if (iParam0 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
				{
					if (unk_0x77F1BEB8863288D5(iLocal_54, 1805844857) == 7)
					{
						if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0xE8854A4326B9E12B(&iLocal_72);
							unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							unk_0x22B0D0E37CCB840D(0, iLocal_53, 150f, -1, false, false);
							unk_0x39E72BC99E6360CB(iLocal_72);
							unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
							unk_0x3841422E9C488D8C(&iLocal_72);
							unk_0xF28965D04F570DCA(iLocal_54, joaat("MotionState_Run"), false, 0, false);
							unk_0x971D38760FBC02EF(iLocal_54, true);
						}
						else
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_54);
							unk_0x22B0D0E37CCB840D(iLocal_54, iLocal_53, 150f, -1, false, false);
						}
					}
				}
				if ((!unk_0x5F9532F3B5CC2551(iLocal_54) && !unk_0x84A2DD9AC37C35C1(iLocal_54)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iLocal_54, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), true) < 20f)
					{
						if (!func_75())
						{
							func_65(&uLocal_77, "REARRAU", sLocal_272, 4, iLocal_253, 0, 0);
						}
					}
				}
			}
			unk_0xE1EF3C1216AFF2CD(iLocal_53);
			unk_0xE8854A4326B9E12B(&iLocal_72);
			unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
			unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x39E72BC99E6360CB(iLocal_72);
			unk_0x5ABA3986D90D8A3B(iLocal_53, iLocal_72);
			unk_0x3841422E9C488D8C(&iLocal_72);
			unk_0x971D38760FBC02EF(iLocal_53, true);
			unk_0xEA02E132F5C68722(iLocal_53, true, 0f);
			if (unk_0x4C241E39B23DF959(iLocal_56, false))
			{
				unk_0xB664292EAECF7FA6(iLocal_56, 1);
			}
			func_56();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
			{
				if (!unk_0x47E4E977581C5B55(iLocal_53))
				{
				}
			}
			if (unk_0x7239B21A38F536BA(iLocal_55))
			{
				func_55();
			}
			bLocal_60 = true;
		}
	}
}

void func_55()
{
	if (unk_0x7239B21A38F536BA(iLocal_55))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
		{
			unk_0xE8854A4326B9E12B(&iLocal_72);
			unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
			unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x39E72BC99E6360CB(iLocal_72);
			unk_0x5ABA3986D90D8A3B(iLocal_55, iLocal_72);
			unk_0x3841422E9C488D8C(&iLocal_72);
			unk_0x971D38760FBC02EF(iLocal_55, true);
			unk_0xEA02E132F5C68722(iLocal_55, true, 0f);
		}
	}
}

void func_56()
{
	Global_14558 = 0;
	func_57();
}

void func_57()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_58()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
		{
			unk_0x6F6F290102C02AB4(iLocal_58, false);
		}
		unk_0xA72CD9CA74A5ECBA(iLocal_54);
	}
}

int func_59()
{
	if (!unk_0x5F9532F3B5CC2551(iLocal_53))
	{
		if (bLocal_73)
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_53))
			{
				if ((unk_0x9CD27B0045628463() - iLocal_275) > 1000)
				{
					func_60();
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

void func_60()
{
	if (!func_75())
	{
		if (iLocal_274 < 3)
		{
			unk_0x69F4BE8C8CC4796C(iLocal_53, unk_0xD80958FC74E988A6(), 6000, 2048, 2);
			func_65(&uLocal_77, "REARRAU", "REARR_PLEAVE", 4, iLocal_253, 0, 0);
		}
	}
	iLocal_274++;
	iLocal_275 = unk_0x9CD27B0045628463();
}

int func_61()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x17FFC1B2BA35A494(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iLocal_54))
		{
			if (bLocal_73)
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_54, true), Local_67) > 2.5f)
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
		if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_54))
		{
			if (unk_0x47E4E977581C5B55(iLocal_54))
			{
				if (iLocal_51 != 7)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_54, true), Local_67) > 2.5f)
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
				if ((unk_0x9CD27B0045628463() - iLocal_275) > 1000)
				{
					func_60();
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

void func_62()
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
						if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
							{
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								func_65(&uLocal_77, "REARRAU", "REARR_PRAD3", 4, iLocal_253, 0, 0);
							}
						}
						iLocal_244 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_75())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
					{
						if (unk_0x1F0B79228E461EC9(iLocal_54, sLocal_257, "kneeling_arrest_idle", 3))
						{
							unk_0xE8854A4326B9E12B(&iLocal_72);
							unk_0xEA47FE3719165B94(0, sLocal_257, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0f, false, false, false);
							unk_0x22B0D0E37CCB840D(0, iLocal_53, 150f, -1, false, false);
							unk_0x39E72BC99E6360CB(iLocal_72);
							unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
							unk_0x3841422E9C488D8C(&iLocal_72);
							unk_0xF28965D04F570DCA(iLocal_54, joaat("MotionState_Run"), false, 0, false);
							unk_0x971D38760FBC02EF(iLocal_54, true);
						}
						else
						{
							unk_0x22B0D0E37CCB840D(iLocal_54, iLocal_53, 150f, -1, false, false);
						}
						unk_0x971D38760FBC02EF(iLocal_54, true);
						unk_0x6B76DC1F3AE6E6A3(iLocal_54, 101);
						func_65(&uLocal_77, "REARRAU", sLocal_268, 4, iLocal_253, 0, 0);
						iLocal_244 = 2;
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_53);
						iLocal_244 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
					{
						unk_0xBF25EB89375A37AD(2, iLocal_71, iLocal_70);
						unk_0xBF25EB89375A37AD(2, iLocal_70, iLocal_71);
						unk_0xF166E48407BAC484(iLocal_53, iLocal_54, 0, 16);
					}
					else
					{
						unk_0xBB9CE077274F6A1B(iLocal_53, 40000f, 0);
						func_163();
					}
					unk_0x971D38760FBC02EF(iLocal_53, true);
				}
				iLocal_74 = 1;
				break;
			}
	}
}

int func_63(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (unk_0x4C241E39B23DF959(iParam1, false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var3 = { unk_0x1899F328B0E12848(iParam1, 1f, -0.5f, 0f) };
		Var9 = { Var3 - Var0 };
		Var6 = { unk_0x1899F328B0E12848(iParam1, -1f, -0.5f, 0f) };
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

void func_64()
{
	if (!func_75())
	{
		if (!iLocal_292)
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 30f, 30f, 30f, false, true, 0))
			{
				func_65(&uLocal_77, "REARRAU", "REARR_PSTOP", 4, iLocal_253, 0, 0);
				iLocal_292 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		else if (unk_0xC9D9444186B5A374() > 8000)
		{
			if (unk_0xD53343AA4FB7DD28(0, 99) > 50)
			{
				func_65(&uLocal_77, "REARRAU", "REARR_PRAND", 4, iLocal_253, 0, 0);
			}
			else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_54, 10f, 10f, 10f, false, true, 0))
			{
				func_65(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				func_65(&uLocal_77, "REARRAU", sLocal_267, 4, iLocal_253, 0, 0);
			}
			else
			{
				func_65(&uLocal_77, "REARRAU", sLocal_271, 4, iLocal_253, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
		}
	}
}

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_50();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_73(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_72();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_71();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_70())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_69())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_68();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_67();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_50();
	}
	return 0;
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_68()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_69()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_71()
{
	if (func_43(14))
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
		Global_14393 = func_41();
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

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_73(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_75()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	if (unk_0x751B70C3D034E187(iLocal_54, iLocal_53, 3.5f, 3.5f, 3.5f, false, true, 0) || func_79())
	{
		if (!func_77(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_77(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0x8BDC7BFC57A81E76(unk_0x3FEF770D40960D5A(iLocal_54, true), &uVar0, &Var1))
	{
		if (func_78(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_78(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_79()
{
	return 0;
}

int func_80(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_81()
{
	if ((unk_0x9CD27B0045628463() - iLocal_252) > 500)
	{
		if ((iLocal_48 != 1 && iLocal_48 != 3) && iLocal_48 != 2)
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				unk_0x6F6F290102C02AB4(iLocal_58, iLocal_247);
				if (bLocal_247 == 1)
				{
					bLocal_247 = false;
				}
				else
				{
					bLocal_247 = true;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		if (!bLocal_60)
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
			{
				unk_0x6F6F290102C02AB4(iLocal_57, iLocal_248);
				if (bLocal_248 == 1)
				{
					bLocal_248 = false;
				}
				else
				{
					bLocal_248 = true;
				}
			}
		}
		else
		{
			bLocal_287 = true;
		}
		iLocal_252 = unk_0x9CD27B0045628463();
	}
	if (!bLocal_288 == bLocal_287)
	{
		if (bLocal_287)
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				unk_0x75A16C3DA34F1245(iLocal_58, true);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
			{
				unk_0x75A16C3DA34F1245(iLocal_57, true);
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				unk_0x75A16C3DA34F1245(iLocal_58, false);
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
			{
				unk_0x75A16C3DA34F1245(iLocal_57, false);
			}
		}
		bLocal_288 = bLocal_287;
	}
}

int func_82(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_278, Local_281, 194.75f, false, true, 0))
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		if (unk_0x751B70C3D034E187(iLocal_53, unk_0xD80958FC74E988A6(), Var2, false, true, 0))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
	{
		if (unk_0x751B70C3D034E187(iLocal_54, unk_0xD80958FC74E988A6(), Var2, false, true, 0))
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

int func_83(int iParam0)
{
	if (func_88())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_87(Global_97162))
		{
			func_84(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_87(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_85(func_86(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_85(func_86(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_85(func_86(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

void func_85(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

char* func_86(int iParam0)
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

int func_88()
{
	switch (func_89(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_89(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_93(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_91(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_90(uParam0, iParam4);
		}
	}
	return 2;
}

void func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_91(int iParam0)
{
	return func_92(iParam0, Global_34909);
}

int func_92(int iParam0, int iParam1)
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

int func_93(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_91(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_94()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_53, fVar0, fVar0, fVar0, false, true, 0) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_54, fVar0, fVar0, fVar0, false, true, 0)) || unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_278, Local_281, 194.75f, false, true, 0))
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_58))
				{
					iLocal_58 = func_95(iLocal_54, 0, 145);
				}
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_57))
				{
					iLocal_57 = func_95(iLocal_53, 0, 145);
				}
				unk_0x75A16C3DA34F1245(iLocal_58, false);
				unk_0x75A16C3DA34F1245(iLocal_57, false);
				unk_0xC1B1E9A034A63A62(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_57))
				{
					iLocal_57 = func_95(iLocal_53, 0, 145);
				}
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				unk_0x86A652570E5F25DD(&iLocal_58);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_58))
			{
				iLocal_58 = func_95(iLocal_54, 0, 145);
			}
		}
		if (unk_0xA6DB27D19ECBB7DA(iLocal_57))
		{
			unk_0x86A652570E5F25DD(&iLocal_57);
		}
		return 1;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_96(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_97(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_97(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_97(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_97(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_98()
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
	unk_0x963D27A58DF860AC(iVar0);
	unk_0x963D27A58DF860AC(iVar1);
	unk_0x963D27A58DF860AC(joaat("prop_ld_binbag_01"));
	unk_0xD3BD40951412FEF6(sLocal_257);
	unk_0xD3BD40951412FEF6(sLocal_258);
	unk_0xD2A71E1A77418A49("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0xD2A71E1A77418A49("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x98A4EB5D89A0C952(iVar0) && unk_0x98A4EB5D89A0C952(iVar1)) && unk_0x98A4EB5D89A0C952(joaat("prop_ld_binbag_01"))) && unk_0xD031A9162D01088C(sLocal_257)) && unk_0xD031A9162D01088C(sLocal_258)) && unk_0x318234F4F3738AF3("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0x318234F4F3738AF3("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_53 = unk_0xD49F9B0955C367DE(6, iVar0, Var2, fVar8, true, true);
		unk_0x1913FE4CBF41C463(iLocal_53, 294, true);
		unk_0xEA02E132F5C68722(iLocal_53, true, 0f);
		unk_0xF25DF915FA38C5F3(iLocal_53, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_53, true);
		func_100(&uLocal_77, 1, iLocal_53, "ArrestCop", 0, 1);
		unk_0x0DC7CABAB1E9B67E(iLocal_53, 1);
		unk_0x0703B9079823DA4A(iLocal_53, 1);
		iLocal_54 = unk_0xD49F9B0955C367DE(26, iVar1, Var5, fVar9, true, true);
		unk_0xEA02E132F5C68722(iLocal_54, true, 0f);
		unk_0x1913FE4CBF41C463(iLocal_54, 42, true);
		unk_0x1913FE4CBF41C463(iLocal_54, 281, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_54, true);
		func_100(&uLocal_77, 2, iLocal_54, sLocal_264, 0, 1);
		unk_0x0DC7CABAB1E9B67E(iLocal_54, 1);
		if (iLocal_52 == 1)
		{
			unk_0x262B14F48D29DE80(iLocal_54, 0, 0, 2, 0);
			unk_0x262B14F48D29DE80(iLocal_54, 2, 0, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_54, 3, 2, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_54, 4, 0, 0, 0);
		}
		func_99();
		if (func_41() == 0)
		{
			func_100(&uLocal_77, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		}
		else if (func_41() == 1)
		{
			func_100(&uLocal_77, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
		}
		else if (func_41() == 2)
		{
			func_100(&uLocal_77, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
		}
		if (!unk_0x8DECB02F88F428BC(iLocal_53, joaat("weapon_pistol"), false))
		{
			unk_0xBF0FD6E56C964FCB(iLocal_53, joaat("weapon_pistol"), -1, false, true);
		}
		unk_0xADF692B254977C0C(iLocal_53, joaat("weapon_pistol"), true);
		iLocal_59 = unk_0x509D5878EB39E842(joaat("prop_ld_binbag_01"), Local_64.f_0, Local_64.f_1, (Local_64.f_2 + 100f), true, true, false);
		unk_0xEA1C610A04DB6BBB(iLocal_59, 0);
		if (unk_0x2A488C176D52CCA5(2411.32f, 4958.76f, 45.19f, Local_64) < 10f)
		{
			iLocal_52 = 1;
			unk_0xE8854A4326B9E12B(&iLocal_72);
			unk_0x17F58B88D085DBAC(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_249, 40000f);
			unk_0x22B0D0E37CCB840D(0, iLocal_53, 150f, -1, false, false);
			unk_0x39E72BC99E6360CB(iLocal_72);
			unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
			unk_0x971D38760FBC02EF(iLocal_54, true);
			unk_0x3841422E9C488D8C(&iLocal_72);
			unk_0x4C8872D8CDBE1B8B(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_52 = 2;
			unk_0xE8854A4326B9E12B(&iLocal_72);
			unk_0x17F58B88D085DBAC(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_249, 40000f);
			unk_0x22B0D0E37CCB840D(0, iLocal_53, 150f, -1, false, false);
			unk_0x39E72BC99E6360CB(iLocal_72);
			unk_0x5ABA3986D90D8A3B(iLocal_54, iLocal_72);
			unk_0x971D38760FBC02EF(iLocal_54, true);
			unk_0x3841422E9C488D8C(&iLocal_72);
		}
		if (iLocal_52 == 1)
		{
		}
		unk_0x6A071245EB0D1882(iLocal_53, iLocal_54, -1, 1f, 3f, 2f, 0);
		unk_0x971D38760FBC02EF(iLocal_53, true);
		return 1;
	}
	return 0;
}

void func_99()
{
	Local_249.f_0 = 0f;
	Local_249.f_1 = 10f;
	unk_0x4D9CA1009AFBD057(iLocal_53, 2);
	unk_0x9F7794730795E019(iLocal_53, 13, true);
	unk_0x9F7794730795E019(iLocal_53, 2, true);
	unk_0x9F7794730795E019(iLocal_53, 1, true);
	unk_0x9F7794730795E019(iLocal_53, 11, false);
	unk_0x3C606747B23E497B(iLocal_53, 0);
	unk_0x4D9CA1009AFBD057(iLocal_54, 3);
	unk_0x9F7794730795E019(iLocal_54, 17, true);
	unk_0x9F7794730795E019(iLocal_54, 6, true);
	unk_0x9F7794730795E019(iLocal_54, 1, true);
	unk_0x9F7794730795E019(iLocal_54, 11, false);
	unk_0x70A2D1137C8ED7C9(iLocal_54, 128, true);
	unk_0x70A2D1137C8ED7C9(iLocal_54, 1, false);
	unk_0xF372BC22FCB88606("RE_ARREST_COP", &iLocal_70);
	unk_0xF372BC22FCB88606("RE_ARREST_CRIM", &iLocal_71);
	unk_0xC80A74AC829DDD92(iLocal_53, iLocal_70);
	unk_0xC80A74AC829DDD92(iLocal_54, iLocal_71);
	unk_0xBF25EB89375A37AD(4, iLocal_71, iLocal_70);
	unk_0xBF25EB89375A37AD(3, iLocal_70, joaat("player"));
	unk_0xBF25EB89375A37AD(3, iLocal_71, joaat("player"));
	unk_0xBF25EB89375A37AD(4, iLocal_71, joaat("COP"));
	unk_0x6C8065A3B780185B(iLocal_53, sLocal_256);
	unk_0x6C8065A3B780185B(iLocal_54, sLocal_255);
}

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_101()
{
	if (!func_91(5))
	{
		return 1;
	}
	if (func_110())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_102(float fParam0, bool bParam1)
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_44(func_41()))
		{
			iVar36 = func_108();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_103(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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

void func_103(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_104(uParam1, "Abigail1", func_106(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 1:
			func_104(uParam1, "Abigail2", func_106(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 2:
			func_104(uParam1, "Barry1", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 3:
			func_104(uParam1, "Barry2", func_106(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 4:
			func_104(uParam1, "Barry3", func_106(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 5:
			func_104(uParam1, "Barry3A", func_106(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 6:
			func_104(uParam1, "Barry3C", func_106(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 7:
			func_104(uParam1, "Barry4", func_106(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_105(iParam0), 0, 0);
			break;
		
		case 8:
			func_104(uParam1, "Dreyfuss1", func_106(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 9:
			func_104(uParam1, "Epsilon1", func_106(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 10:
			func_104(uParam1, "Epsilon2", func_106(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 11:
			func_104(uParam1, "Epsilon3", func_106(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 12:
			func_104(uParam1, "Epsilon4", func_106(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 13:
			func_104(uParam1, "Epsilon5", func_106(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 14:
			func_104(uParam1, "Epsilon6", func_106(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 15:
			func_104(uParam1, "Epsilon7", func_106(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 16:
			func_104(uParam1, "Epsilon8", func_106(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 17:
			func_104(uParam1, "Extreme1", func_106(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 18:
			func_104(uParam1, "Extreme2", func_106(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 19:
			func_104(uParam1, "Extreme3", func_106(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 20:
			func_104(uParam1, "Extreme4", func_106(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 21:
			func_104(uParam1, "Fanatic1", func_106(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 22:
			func_104(uParam1, "Fanatic2", func_106(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_105(iParam0), 1, 0);
			break;
		
		case 23:
			func_104(uParam1, "Fanatic3", func_106(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_105(iParam0), 0, 1);
			break;
		
		case 24:
			func_104(uParam1, "Hao1", func_106(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_105(iParam0), 0, 1);
			break;
		
		case 25:
			func_104(uParam1, "Hunting1", func_106(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 26:
			func_104(uParam1, "Hunting2", func_106(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 27:
			func_104(uParam1, "Josh1", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 28:
			func_104(uParam1, "Josh2", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 29:
			func_104(uParam1, "Josh3", func_106(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 30:
			func_104(uParam1, "Josh4", func_106(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 31:
			func_104(uParam1, "Maude1", func_106(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 32:
			func_104(uParam1, "Minute1", func_106(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 33:
			func_104(uParam1, "Minute2", func_106(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 34:
			func_104(uParam1, "Minute3", func_106(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 35:
			func_104(uParam1, "MrsPhilips1", func_106(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 36:
			func_104(uParam1, "MrsPhilips2", func_106(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 37:
			func_104(uParam1, "Nigel1", func_106(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 38:
			func_104(uParam1, "Nigel1A", func_106(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 39:
			func_104(uParam1, "Nigel1B", func_106(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 40:
			func_104(uParam1, "Nigel1C", func_106(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 41:
			func_104(uParam1, "Nigel1D", func_106(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_105(iParam0), 1, 1);
			break;
		
		case 42:
			func_104(uParam1, "Nigel2", func_106(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 43:
			func_104(uParam1, "Nigel3", func_106(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 1);
			break;
		
		case 44:
			func_104(uParam1, "Omega1", func_106(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 45:
			func_104(uParam1, "Omega2", func_106(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 46:
			func_104(uParam1, "Paparazzo1", func_106(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 47:
			func_104(uParam1, "Paparazzo2", func_106(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 48:
			func_104(uParam1, "Paparazzo3", func_106(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 49:
			func_104(uParam1, "Paparazzo3A", func_106(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 50:
			func_104(uParam1, "Paparazzo3B", func_106(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 51:
			func_104(uParam1, "Paparazzo4", func_106(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 52:
			func_104(uParam1, "Rampage1", func_106(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 54:
			func_104(uParam1, "Rampage3", func_106(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 55:
			func_104(uParam1, "Rampage4", func_106(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 56:
			func_104(uParam1, "Rampage5", func_106(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_105(iParam0), 0, 0);
			break;
		
		case 53:
			func_104(uParam1, "Rampage2", func_106(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_105(iParam0), 1, 0);
			break;
		
		case 57:
			func_104(uParam1, "TheLastOne", func_106(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 58:
			func_104(uParam1, "Tonya1", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 59:
			func_104(uParam1, "Tonya2", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 60:
			func_104(uParam1, "Tonya3", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 61:
			func_104(uParam1, "Tonya4", func_106(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		case 62:
			func_104(uParam1, "Tonya5", func_106(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_105(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_104(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_105(int iParam0)
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

struct<2> func_106(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_107(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_107(int iParam0)
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

int func_108()
{
	func_42();
	switch (Global_97173.f_1729.f_539.f_3213)
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

int func_109()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_110()
{
	if (func_113() && !func_109())
	{
		return 1;
	}
	if (func_112() && func_111())
	{
		return 1;
	}
	return 0;
}

bool func_111()
{
	return Global_96891 > 0;
}

int func_112()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_114()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_110())
	{
		return 1;
	}
	if (func_102(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_115(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_117(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_116();
}

void func_116()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_117(int iParam0)
{
	Global_97162 = iParam0;
}

int func_118()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_119(Var0);
	return uVar16;
}

int func_119(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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

int func_120(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_118();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_109())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_161(0))
		{
			return 0;
		}
		if (func_110())
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_44(func_41()))
		{
			if (func_102(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_159(iParam3))
		{
			return 0;
		}
		if (func_44(func_41()))
		{
			if (func_158(func_41()) == 4 || func_158(func_41()) == 5)
			{
				return 0;
			}
		}
		if (func_44(func_41()))
		{
			if (!func_157(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_156(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_155())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_146(4))
		{
			return 0;
		}
		if (!func_91(5))
		{
			return 0;
		}
		if (func_145(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_145(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_159(30) && !func_145(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_44(func_41()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_144(iVar8))
				{
					if (func_122(iVar4))
					{
						if (!func_121(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
							{
								if (func_41() != iVar4)
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

bool func_121(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_123(iVar0);
}

int func_123(int iParam0)
{
	return func_124(iParam0, 1);
}

int func_124(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_144(iParam0))
	{
		return 0;
	}
	func_125(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_126(func_137(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_126(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_136(iParam0, iParam1))
	{
		iVar0 = func_135(iParam1);
		iVar1 = func_133(iParam0);
		iVar2 = (func_133(iParam0) - func_133(iParam1));
		iVar3 = (func_135(iParam0) - func_135(iParam1));
		iVar4 = (func_132(iParam0) - func_132(iParam1));
		iVar5 = (func_131(iParam0) - func_131(iParam1));
		iVar6 = (func_130(iParam0) - func_130(iParam1));
		iVar7 = (func_129(iParam0) - func_129(iParam1));
	}
	else
	{
		iVar0 = func_135(iParam0);
		iVar1 = func_133(iParam1);
		iVar2 = (func_133(iParam1) - func_133(iParam0));
		iVar3 = (func_135(iParam1) - func_135(iParam0));
		iVar4 = (func_132(iParam1) - func_132(iParam0));
		iVar5 = (func_131(iParam1) - func_131(iParam0));
		iVar6 = (func_130(iParam1) - func_130(iParam0));
		iVar7 = (func_129(iParam1) - func_129(iParam0));
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
		iVar4 = (iVar4 + func_128(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_127(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_127(float fParam0, float fParam1, float fParam2)
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

int func_128(int iParam0, int iParam1)
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

int func_129(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_130(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_131(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_132(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_133(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_134(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_134(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_135(int iParam0)
{
	return iParam0 & 15;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_144(iParam1) || !func_144(iParam0))
	{
		return 1;
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
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_129(iParam0);
	iVar1 = func_129(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	var uVar0;
	
	func_143(&uVar0, unk_0x494E97C2EF27C470());
	func_142(&uVar0, unk_0x13D2B8ADD79640F2());
	func_141(&uVar0, unk_0x25223CA6B4D20B7F());
	func_140(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_139(&uVar0, unk_0xBBC72712E80257A1());
	func_138(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_138(var uParam0, int iParam1)
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

void func_139(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_140(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_135(*uParam0);
	iVar1 = func_133(*uParam0);
	if (iParam1 < 1 || iParam1 > func_128(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_144(int iParam0)
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
	iVar0 = func_129(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_130(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_131(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_133(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_135(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_132(iParam0);
	if (iVar5 < 1 || iVar5 > func_128(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_41();
				if (!func_44(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_154()) || Global_96220) || Global_24446) || func_153()) || func_73(8, -1)) || func_152()) || func_151()) || func_150()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_154()) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_152()) || func_151()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_154()) || Global_96220) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_152()) || func_151()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_154()) || Global_96220) || Global_24446) || func_153()) || func_73(8, -1)) || func_152()) || func_151()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_154() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_73(8, -1)) || func_149()) || func_148()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_152()) || func_151()) || func_148()) || func_147())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_154()) || Global_24446) || func_153()) || func_73(8, -1)) || func_151()) || func_150()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_154()) || func_151()) || Global_96220) || Global_24446) || func_153()) || Global_35953) || func_73(8, -1)) || func_150()) || func_148()) || func_149()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_154()) || Global_96220) || Global_24446) || func_153()) || func_73(8, -1)) || func_150()) || func_148()) || func_152()) || func_151()) || func_149())
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

var func_147()
{
	return Global_89823.f_1;
}

int func_148()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_149()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_151()
{
	return Global_89836.f_291 > 0;
}

bool func_152()
{
	return Global_89836.f_290 > 0;
}

var func_153()
{
	return Global_1315898;
}

int func_154()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_155()
{
	func_71();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0)
{
	return func_136(func_137(), iParam0);
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_41();
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

int func_158(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_159(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_160()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_161(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_162()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_163()
{
	if (unk_0xD2D57F1D764117B1())
	{
		switch (iLocal_48)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_194(6);
				func_177();
				break;
			
			case 3:
				func_194(5);
				func_177();
				break;
		}
		if (unk_0x7239B21A38F536BA(iLocal_54))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_54) && !unk_0x5F9532F3B5CC2551(iLocal_54))
			{
				unk_0x5F9532F3B5CC2551(iLocal_53);
				if (unk_0x7239B21A38F536BA(iLocal_53))
				{
					unk_0x94587F17E9C365D5(iLocal_54, unk_0x3FEF770D40960D5A(iLocal_53, true), 9000f, -1, false, false);
				}
				else
				{
					unk_0x94587F17E9C365D5(iLocal_54, unk_0x3FEF770D40960D5A(iLocal_54, true), 9000f, -1, false, false);
				}
				unk_0x9F8AA94D6D97DBF4(iLocal_54, false);
				unk_0x971D38760FBC02EF(iLocal_54, true);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_53))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_53))
			{
				unk_0x971D38760FBC02EF(iLocal_53, true);
				unk_0x9F8AA94D6D97DBF4(iLocal_53, false);
				unk_0xBB03C38DD3FB7FFD(iLocal_53, true);
				unk_0x63F58F7C80513AAD(iLocal_53, true);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_55))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_55))
			{
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_55();
				}
				unk_0x9F8AA94D6D97DBF4(iLocal_55, false);
				unk_0xBB03C38DD3FB7FFD(iLocal_55, true);
			}
		}
		if (func_176())
		{
			unk_0x020E5F00CDA207BA(1f);
			unk_0xBF25EB89375A37AD(2, iLocal_71, iLocal_70);
			unk_0xBF25EB89375A37AD(2, iLocal_70, iLocal_71);
		}
		if (iLocal_76)
		{
			unk_0x80D9F74197EA47D9(true);
		}
	}
	unk_0x0027501B9F3B407E(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_286)
	{
		unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 3, false);
		unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
	}
	func_164(-1);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x1090044AD1DA76FA();
}

void func_164(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_176())
	{
		func_169(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_168(30000);
		StringCopy(&cVar0, func_167(Global_97162, 1), 64);
		if (func_166(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_165(&Global_24503);
	Global_97163 = 0;
	func_117(-1);
}

void func_165(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

int func_166(int iParam0)
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

char* func_167(int iParam0, bool bParam1)
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

void func_168(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_169(int iParam0)
{
	func_170(iParam0, 0, func_175(iParam0));
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_137();
	func_173(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_172(iParam0, &uVar0);
	Var1 = { func_171(&uVar0) };
}

struct<16> func_171(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_129(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_132(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_133(*uParam0), 64);
	return Var0;
}

void func_172(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_133(*uParam0);
	iVar1 = func_135(*uParam0);
	iVar2 = func_132(*uParam0);
	iVar3 = func_131(*uParam0);
	iVar4 = func_130(*uParam0);
	iVar5 = func_129(*uParam0);
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
	iVar6 = func_128(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_128(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_174(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_143(uParam0, iParam1);
	func_142(uParam0, iParam2);
	func_141(uParam0, iParam3);
	func_140(uParam0, iParam4);
	func_139(uParam0, iParam5);
	func_138(uParam0, iParam6);
}

int func_175(int iParam0)
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

int func_176()
{
	if ((Global_97162 == func_118() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	if (!bLocal_75)
	{
		func_193();
	}
	func_180(15, iLocal_52);
	func_178();
}

void func_178()
{
	func_179();
}

int func_179()
{
	if (func_161(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

void func_180(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_118();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_166(iParam0))
	{
		func_192(iParam0, iParam1);
		if (!func_191(51))
		{
			func_188("RE_REWARD", 1, 0, 4000, 10000, func_108(), 0, 138, 0);
			func_187(51);
		}
		if (func_87(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_186(iParam0, iParam1) != 322)
		{
			func_181(func_186(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_194(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_194(7);
			}
			else
			{
				func_194(1);
			}
		}
	}
}

void func_181(int iParam0, var uParam1, var uParam2)
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
		func_184((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_182();
	}
}

void func_182()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_37(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_183() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_179();
				}
			}
		}
	}
}

int func_183()
{
	return Global_24444;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_185();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_185()
{
	return Global_1312736;
}

int func_186(int iParam0, int iParam1)
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

void func_187(int iParam0)
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_188(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_189(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_189(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_190();
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_191(int iParam0)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_193()
{
	return 1;
}

void func_194(int iParam0)
{
	Global_97159 = iParam0;
}

void func_195()
{
	if (!bLocal_73 && iLocal_50 == 0)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_53) && !unk_0x84A2DD9AC37C35C1(iLocal_54))
		{
			unk_0xD76B57B44F1E6F8B(iLocal_53, unk_0x3FEF770D40960D5A(iLocal_54, true), 3f, 20000, 40000f, 0.5f);
			unk_0x971D38760FBC02EF(iLocal_53, true);
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

