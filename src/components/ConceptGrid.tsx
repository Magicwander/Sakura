import React from 'react';
import { CppFile } from '../types';
import { FileCode } from 'lucide-react';

interface ConceptGridProps {
  files: CppFile[];
  onFileSelect: (file: CppFile) => void;
}

export const ConceptGrid: React.FC<ConceptGridProps> = ({ files, onFileSelect }) => {
  return (
    <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 xl:grid-cols-4 gap-6">
      {files.map((file) => (
        <button
          key={file.path}
          onClick={() => onFileSelect(file)}
          className="group bg-white dark:bg-slate-800 rounded-xl p-6 shadow-lg
                     hover:shadow-xl transition-all duration-200 text-left"
        >
          <div className="flex items-center space-x-3 mb-4">
            <FileCode className="w-6 h-6 text-indigo-500" />
            <h3 className="text-lg font-semibold dark:text-white group-hover:text-indigo-500
                          transition-colors duration-200">
              {file.name}
            </h3>
          </div>
          <div className="space-y-2">
            <p className="text-sm text-gray-600 dark:text-gray-300">
              Category: {file.category}
            </p>
            <p className="text-sm text-gray-600 dark:text-gray-300">
              Difficulty: {file.difficulty}
            </p>
            <p className="text-sm text-gray-600 dark:text-gray-300">
              Time Investment: {file.timeSpent}h
            </p>
          </div>
        </button>
      ))}
    </div>
  );
};