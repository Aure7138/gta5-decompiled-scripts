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
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	struct<3> Local_123 = { 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 16;
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
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0x524AF15206846700(114))
	{
		func_138(1);
	}
	uLocal_85 = unk_0xC834A7C58DEB59B4(unk_0x4D29100D094E5511());
	iLocal_95 = 0;
	func_136(&Global_99807, 0);
	func_130();
	unk_0xCDBC8F459D8E83A4(1);
	if (func_129(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31486)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_129(uLocal_94, 8))
	{
		if (!func_127(iLocal_100))
		{
			if (func_126(0, iLocal_99))
			{
				func_138(0);
			}
			else
			{
				func_138(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_126(0, iLocal_99))
		{
			func_138(1);
		}
	}
	if (func_129(uLocal_94, 8388608))
	{
		func_138(1);
	}
	if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
	{
		func_138(1);
	}
	if (unk_0xD32535FA4397160F(unk_0x45755F80A3E63D8B()) > 1 && !func_129(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_122(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_138(1);
		}
		uLocal_85 = unk_0xC834A7C58DEB59B4(unk_0x4D29100D094E5511());
		if (func_129(uLocal_94, 1048576))
		{
			if (unk_0x2006A8C1BA2AFE80(uLocal_85, 0))
			{
				func_138(1);
			}
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_85) && !unk_0x2006A8C1BA2AFE80(iLocal_85, 0))
		{
			Local_87 = { unk_0xA8CFDE65C45F813B(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_127(iLocal_100) || (func_129(uLocal_94, 16) && !func_129(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_118();
						func_122(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_122(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_116())
					{
						iLocal_103 = iLocal_103;
						func_122(3);
					}
					else
					{
						func_118();
					}
					break;
				
				case 3:
					if (unk_0x92CB7725500E696A())
					{
						func_138(1);
						return;
					}
					if (!func_127(iLocal_100))
					{
						if (!func_129(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0xC1C5B83BB6719C6C(&(Global_91278.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_138(0);
								break;
							}
						}
					}
					if (!func_129(uLocal_94, 4))
					{
						func_113();
						func_112(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91312)
					{
						if (iLocal_105 != 263)
						{
							if (func_111(6) && !func_110(iLocal_105))
							{
							}
							else
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_122(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_129(uLocal_94, 64);
						func_136(&uLocal_94, 128);
						if (!func_109(3) && !Global_91312)
						{
							if (func_129(uLocal_94, 2097152))
							{
								if ((!func_129(uLocal_94, 1) || !unk_0xD2CFFE76B625AE55(func_108())) && !Global_91312)
								{
									func_122(10);
									break;
								}
							}
						}
						if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
						{
							func_138(1);
						}
						if (func_107())
						{
							func_138(1);
						}
						if ((!func_99(6) || Global_100201) || func_98())
						{
							bVar2 = false;
						}
						if (func_129(uLocal_94, 1))
						{
							if (!func_97())
							{
								func_95(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_94(1))
						{
							bVar2 = false;
						}
						if (Global_69489)
						{
							bVar2 = false;
						}
						if (func_93())
						{
							bVar2 = false;
						}
						if (unk_0x5D293E404CA20AA5())
						{
							bVar2 = false;
						}
						if (func_92() || func_91(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0x5E91AC2C8CAC699C(unk_0x4D29100D094E5511()))
						{
							bVar2 = false;
						}
						if (!unk_0x7DA5060D9E6B91C5(unk_0x4D29100D094E5511()))
						{
							bVar2 = false;
						}
						if (func_90(0) || func_89())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0xB1988D54B2C48CB5(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xDF3F6D6CDD523546(0, 51);
								if (func_88(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_87(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_95(&uLocal_94, 2048);
									}
									else if (!func_129(uLocal_94, 2048) || !unk_0x46768B1495288824())
									{
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
									}
									if (func_84(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
										unk_0xA51826E3518111A3(&Local_69);
										unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 56);
										func_122(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_86(&iLocal_96);
									func_136(&uLocal_94, 2048);
									unk_0xA51826E3518111A3(&Local_69);
									unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 56);
									func_122(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_86(&iLocal_96);
								func_136(&uLocal_94, 2048);
								unk_0x5BD150B52CE8D356(0);
							}
						}
					}
					func_81();
					break;
				
				case 5:
					unk_0xDF3F6D6CDD523546(0, 51);
					if (unk_0x9A8E9A1E029E9A5A(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_86(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_129(uLocal_94, 1))
						{
							if (func_111(6) || func_111(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_78(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
							{
								unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
							}
							func_77();
							if (Global_36839)
							{
								func_68(unk_0x27D769C59BC9D030());
							}
							unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 56);
							uLocal_52 = func_24();
							func_95(&uLocal_94, 2);
							func_122(6);
							func_20(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_19(iLocal_99);
								func_16(func_18(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_122(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_129(Global_99807, 262144))
					{
						func_136(&Global_99807, 262144);
						func_14();
					}
					if (func_129(uLocal_94, 2097152))
					{
						if (!func_109(3) && !unk_0xA6C3B54732ED5989(uLocal_52))
						{
							func_122(10);
						}
					}
					if (!unk_0xA6C3B54732ED5989(uLocal_52))
					{
						unk_0x70474C6AB0E99EB4(unk_0xF2DB717A73826179((func_10(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_9(&uLocal_107);
						func_136(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_136(&uLocal_94, 2);
						}
						else if (func_129(uLocal_94, 2))
						{
							if (func_129(Global_99807, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
						}
						func_122(0);
						if (iLocal_99 != -1)
						{
							if (func_129(Global_99807, 0))
							{
								unk_0x07B7705D7B23A4CA(func_18(iLocal_99), 0, Global_91315, 0);
								func_6(func_18(iLocal_99), 0, Global_91315, 1, 0);
							}
							else
							{
								unk_0x07B7705D7B23A4CA(func_18(iLocal_99), 0, Global_91315, 0);
								func_6(func_18(iLocal_99), 0, Global_91315, 0, 0);
							}
						}
						func_5();
						func_136(&Global_99807, 0);
						if (func_129(uLocal_94, 16777216))
						{
							func_138(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101154.f_7775)
							{
								if (!func_126(0, iLocal_99))
								{
									func_138(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_122(0);
					break;
				
				case 10:
					func_138(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_123(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_122(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_123(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_86(&iLocal_96);
					}
					if (!unk_0x75CB9E30BA492FF0(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x5BD150B52CE8D356(1);
						}
					}
					func_122(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_127(iLocal_100) && func_126(0, iLocal_99))
									{
										func_130();
										if (iLocal_105 != 263)
										{
											func_123(iLocal_105, 1, 0);
										}
										func_122(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_122(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_130();
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else
						{
							func_123(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	unk_0x651E63BA2F4975EC("pickup_object");
	unk_0x651E63BA2F4975EC("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x0049DE0B34213B12((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x75CB9E30BA492FF0(&Global_88681))
	{
		return;
	}
	if (unk_0x4A997F738952113D(sParam0, &Global_88681, 0, -1) != 0)
	{
		return;
	}
	unk_0x3E945AE78BE77CD8(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85788);
	StringCopy(&Global_88681, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35673)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		unk_0x4392DD4CF5597D9C(StackVal, 0, 0, 0);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xA5064174B9213E3A(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
	}
	if (unk_0x0E063DDE8855EC52())
	{
		iVar0 = unk_0x20D394965B47B01A();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x75CB9E30BA492FF0(&Global_88681))
	{
		unk_0x3E945AE78BE77CD8(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	unk_0x29DB55F64B471648(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		uVar0 = iParam0;
		unk_0x4392DD4CF5597D9C(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xA5064174B9213E3A(8, &cVar1);
	}
}

void func_20(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
	else
	{
		func_21(uParam0);
	}
}

void func_21(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_23(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_21(uParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_101154.f_17657 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_123, 170, iLocal_97);
	unk_0xABAEB0389A1F036F(&Local_53);
	return iVar0;
}

void func_25(bool bParam0)
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_67(iLocal_122) };
	Var12 = { func_66(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0xD00DE282B9BF1223(Var12.f_0)) };
	unk_0x048C2DF809E4EFCA(func_65(iLocal_122), Var12, 5000f, 0);
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 256);
	unk_0x3DFCFAD590F85BF7(0);
	unk_0x83DB85FD25128C55(0);
	func_63(1);
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
		if (unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) > 0.3f)
		{
			unk_0x4E2F67DAF5750EE5(unk_0x27D769C59BC9D030(), -1);
			while (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
				{
					unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
				}
			}
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_297))
		{
			Var6 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) - unk_0xA8CFDE65C45F813B(iLocal_297, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0x33A0CEA494F4C2A3(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0xA8CFDE65C45F813B(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					unk_0xE4A57337AE998385(0, Var9, 1f, 20000, 1048576000, 0, func_62(Var9, unk_0xA8CFDE65C45F813B(iLocal_297, 0)));
				}
				else
				{
					unk_0x3D09311EB0F37652(0, Var9, 1f, -1, func_62(Var9, unk_0xA8CFDE65C45F813B(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0xD9F9CB5C8842E29C(0, func_62(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iLocal_297, 0)), 0);
			}
			unk_0x878D12AEFBF5BAF0(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x33F83FC0F5F458E3(uVar3);
			if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
			{
				unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
				unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
				unk_0x8B8674266D533E9F(unk_0x27D769C59BC9D030(), uVar3);
			}
			unk_0x433C209504FBC7EE(&uVar3);
			func_63(1);
		}
	}
	func_23(&uLocal_293);
	while ((func_10(&uLocal_293) < 6f && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0)) && !unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 3))
	{
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 3))
	{
		unk_0x4F42FA30FB1F8CB9(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_293) < 6f && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0)) && unk_0x45BFA2594AA26529(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
		if (!bVar16 && unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 3))
		{
			unk_0x4F42FA30FB1F8CB9(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (!bVar16 && unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 3))
		{
			unk_0x4F42FA30FB1F8CB9(unk_0x27D769C59BC9D030(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
	}
	func_9(&uLocal_293);
	func_40();
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (func_35() == 0)
		{
			unk_0x5D927D8655264D6C(unk_0x27D769C59BC9D030(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x5D927D8655264D6C(unk_0x27D769C59BC9D030(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x5D927D8655264D6C(unk_0x27D769C59BC9D030(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
			unk_0xE4A57337AE998385(unk_0x27D769C59BC9D030(), func_34(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_297))
		{
			unk_0x7C0FE14555841C1E(&iLocal_297);
		}
		uVar4 = unk_0x197AFDD7C344686F(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		uVar5 = unk_0x197AFDD7C344686F(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
		unk_0x50298E3E0CF53540("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5C309DFF11824A69(uVar5, uVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
			{
				unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_123.f_2 = iLocal_297;
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 177, 1);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_39(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_38(unk_0x27D769C59BC9D030());
			if (func_37(iVar0) && (!func_111(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_37(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return;
	}
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
	if (unk_0xD2CFFE76B625AE55(iLocal_297))
	{
		unk_0x7C0FE14555841C1E(&iLocal_297);
	}
	func_48(0, 0, 1);
	iLocal_297 = unk_0x8FC46BABCF818990(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
	unk_0x0359A241E2DD22AC(iLocal_297, func_46(iLocal_122), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x239E9E07DB537DC9(Var0, Var4, 2);
	unk_0x4DCC07E3B4ADC9CD(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
		unk_0x98E2FD5DA7CF97D3(unk_0x27D769C59BC9D030(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x954BCDB8FDB0AC0F(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0x3A5E675E99CE82DC("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0x5FEC4EB24E8C1ADE(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xA931FF68636DF31C(uVar8, 1);
	unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
	while (unk_0xB3BBF60126795AAD(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_122) };
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_62(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_62(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_62(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_62(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	unk_0x9F805E4A6F671CEE(unk_0xB927AFB90873B8C1(), 0, iParam0);
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x78856C91417B033E(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 15f);
	}
	unk_0x9556B1B52B8D9672(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0);
	unk_0x83DB85FD25128C55(0);
	unk_0x3DFCFAD590F85BF7(0);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x26545538B51562AD(&Global_25364, iParam0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_25364, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_59(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_58())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_59(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_55(unk_0x4D29100D094E5511())) && !func_52(unk_0x4D29100D094E5511(), 0)) && !func_51())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_55(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_51()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1312747;
}

int func_55(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_58()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

void func_60(int iParam0)
{
	if (Global_14571)
	{
		func_61(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_58())
	{
		Global_14413.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_90(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

float func_62(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xCBE9F57FCC3C2A5A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		func_64();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_90(0))
		{
			func_60(0);
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

void func_64()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

Vector3 func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_66(struct<3> Param0)
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

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return;
	}
	iVar0 = func_76(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_69(iVar2);
}

void func_69(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == unk_0x27D769C59BC9D030())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615 = (Global_36615 - 1);
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	func_72(iParam0, iParam1, iParam2, 0, 0);
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_74(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_73();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if (func_75(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_77()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 25);
	unk_0x26545538B51562AD(&Global_2284, 11);
}

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_80(0))
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		unk_0x4056514F44BCBB31(unk_0xB927AFB90873B8C1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1063C2349425DD1(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *iParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_127(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

void func_79(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_80(int iParam0)
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_82();
			break;
		
		default:
			break;
	}
}

void func_82()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x070841EC2D20AB5A();
	if (unk_0xD2CFFE76B625AE55(uVar0))
	{
		Local_123.f_1 = iVar0;
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_297))
	{
		Var1 = { unk_0xA8CFDE65C45F813B(iLocal_297, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_90) > 25f)
		{
			func_83(0);
		}
	}
}

void func_83(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_84(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
	{
		return 0;
	}
	if (func_90(0))
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_85(int iParam0)
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
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_86(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_85(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!*iParam0 == -1)
		{
			func_86(iParam0);
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
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = unk_0xF42B3EF31F918DB2();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x75CB9E30BA492FF0(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_88(var uParam0)
{
	return 1;
}

var func_89()
{
	return Global_68058;
}

int func_90(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

bool func_92()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

int func_93()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_97()
{
	return 1;
}

bool func_98()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return 0;
	}
	unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		return ((((bVar1 && unk_0x5FCAE3F8AEC656AF(0, 69)) || (bVar1 && unk_0x5FCAE3F8AEC656AF(0, 70))) || (bVar1 && unk_0x5FCAE3F8AEC656AF(0, 68))) || unk_0x102415F9164597E2(unk_0x4D29100D094E5511()));
	}
	return (((((bVar1 && unk_0x5FCAE3F8AEC656AF(0, 24)) || (bVar1 && unk_0x5FCAE3F8AEC656AF(0, 25))) || (bVar1 && unk_0x5FCAE3F8AEC656AF(0, 47))) || unk_0x58AAF688E12BE1BC(unk_0x27D769C59BC9D030())) || unk_0x102415F9164597E2(unk_0x4D29100D094E5511()));
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_102()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1) || func_106()) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_106() || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || func_91(8, -1)) || func_93()) || func_101()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_91(8, -1) || func_104()) || func_103()) || func_101()) || func_100())
						{
							return 0;
						}
						if ((unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() != 3) && unk_0x00798D768A589710() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
						{
							if ((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_106()) || Global_25122) || func_105()) || func_91(8, -1)) || func_103()) || func_102()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || func_106()) || func_103()) || Global_100201) || Global_25122) || func_105()) || Global_36839) || func_91(8, -1)) || func_102()) || func_101()) || func_93()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_106()) || Global_100201) || Global_25122) || func_105()) || func_91(8, -1)) || func_102()) || func_101()) || func_104()) || func_103()) || func_93())
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

var func_100()
{
	return Global_91317.f_1;
}

int func_101()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return 0;
}

int func_102()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_91330.f_297 > 0;
}

bool func_104()
{
	return Global_91330.f_296 > 0;
}

var func_105()
{
	return Global_1315913;
}

int func_106()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

int func_107()
{
	if (unk_0xD32535FA4397160F(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_108()
{
	return Global_87443;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_111(6) || func_111(7))
			{
				return 1;
			}
			else
			{
				return func_109(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_127(5))
			{
				if (func_99(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x7B4654D62B7E0E9E(Global_25433[iVar0 /*23*/].f_19);
}

bool func_111(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113()
{
	struct<3> Var0;
	
	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = unk_0x8FC46BABCF818990(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x0359A241E2DD22AC(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0xA8CA82EB31D1626F(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = unk_0x8FC46BABCF818990(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x0359A241E2DD22AC(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0xCD73A3A2B60354CB(iLocal_297);
				Var0 = { func_115(iLocal_122) };
				if (!func_33(Var0))
				{
					uLocal_298 = unk_0x4E76306EE6AE7596(joaat("bati"), Var0, func_114(iLocal_122), 1, 1);
					uLocal_298 = uLocal_298;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_115(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_116()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0x482101C9B3483958("pickup_object") && unk_0x482101C9B3483958("oddjobs@basejump@ig_15")) && func_117(&uLocal_118)) && func_117(&uLocal_120));
			break;
		
		case 12:
			return ((unk_0x482101C9B3483958("pickup_object") && unk_0x482101C9B3483958("oddjobs@basejump@ig_15")) && func_117(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_117(&uLocal_118) && func_117(&uLocal_120));
}

int func_117(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x875098323FCA8FE6((*uParam0)[iVar0]))
			{
				if (!unk_0x875098323FCA8FE6((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_118()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			unk_0x88172B3983EC5071("pickup_object");
			unk_0x88172B3983EC5071("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			func_120(&uLocal_120, joaat("bati"));
			unk_0x88172B3983EC5071("pickup_object");
			unk_0x88172B3983EC5071("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			unk_0x88172B3983EC5071("pickup_object");
			unk_0x88172B3983EC5071("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_119(&uLocal_118);
	func_119(&uLocal_120);
}

void func_119(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x97C59C4E8349D15F((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_120(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_121(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0xF426A5DE932B3BEE(Global_25433[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xF426A5DE932B3BEE(Global_25433[iVar0 /*23*/].f_11, 0))
	{
		unk_0x26545538B51562AD(&(Global_25433[iVar0 /*23*/].f_11), 18);
		if (Global_25430 == 1)
		{
			Global_25431 = 1;
		}
		Global_25430 = 1;
	}
	if (bParam1)
	{
		unk_0x26545538B51562AD(&(Global_25433[iVar0 /*23*/].f_11), 0);
		unk_0x26545538B51562AD(&(Global_25433[iVar0 /*23*/].f_11), 15);
		unk_0x26545538B51562AD(&(Global_25433[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_25433[iVar0 /*23*/].f_11), 0);
		unk_0xF17F4B0641AB2DE1(&(Global_25433[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xF426A5DE932B3BEE(Global_25433[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x7B4654D62B7E0E9E(Global_25433[iVar0 /*23*/].f_19))
		{
			unk_0xEBA4DF1138C23124(1);
			unk_0x9403D0F4C7711241(&(Global_25433[iVar0 /*23*/].f_19));
			unk_0xEBA4DF1138C23124(0);
		}
	}
}

int func_124()
{
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x0D8B62403640E4FC() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_126(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_127(int iParam0)
{
	return func_128(iParam0, Global_35711);
}

int func_128(int iParam0, int iParam1)
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

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130()
{
	if (unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		func_95(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_134(Local_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		
		case 5:
			iLocal_105 = 130;
			break;
		
		case 6:
			iLocal_105 = 131;
			break;
		
		case 8:
			iLocal_105 = 133;
			break;
		
		case 12:
			iLocal_105 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_133(19))
		{
			func_132(iLocal_105);
		}
	}
	func_95(&uLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_131(iLocal_105)) + 5f);
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_126(0, iLocal_99))
		{
			bLocal_296 = false;
			func_132(iLocal_105);
		}
		else
		{
			bLocal_296 = true;
		}
	}
	else
	{
		bLocal_296 = false;
	}
	if (unk_0xD32535FA4397160F(joaat("bj")) > 0)
	{
		func_95(&uLocal_94, 8);
	}
	else
	{
		func_136(&uLocal_94, 8);
	}
	if (func_111(12))
	{
		func_95(&uLocal_94, 8);
	}
	iLocal_97 = 18000;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_132(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_86(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_133(int iParam0)
{
	return Global_100241[iParam0 /*10*/].f_1;
}

int func_134(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_135(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3 = (iVar3 + 1);
	}
	return iVar2;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)
{
	func_137(uParam0, iParam1);
}

void func_137(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 0, 0);
		}
	}
	func_86(&iLocal_96);
	if (func_129(uLocal_94, 2))
	{
		func_5();
		func_136(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_139();
	unk_0x7C3AA2D27E16E2AD();
}

void func_139()
{
	func_136(&uLocal_94, 4);
	func_140();
	if (unk_0xA6C3B54732ED5989(uLocal_52))
	{
		unk_0xCE4B4FF9BBF75C44(uLocal_52, 3);
	}
	if (!unk_0x0275404839C0A19A(&Local_69))
	{
		if (unk_0x1DA63F254F38C8A7(&Local_69) != 0)
		{
			unk_0xABAEB0389A1F036F(&Local_69);
		}
	}
}

void func_140()
{
}

