import React from 'react';
import { Book, Clock, Code } from 'lucide-react';
import { UserProgress } from '../types';

interface DashboardProps {
  progress: UserProgress;
}

export const Dashboard: React.FC<DashboardProps> = ({ progress }) => {
  return (
    <div className="grid grid-cols-1 md:grid-cols-3 gap-6 mb-8">
      <div className="bg-white dark:bg-slate-800 rounded-xl p-6 shadow-lg">
        <div className="flex items-center space-x-3">
          <Clock className="w-8 h-8 text-pink-500" />
          <div>
            <h3 className="text-lg font-semibold dark:text-white">Total Hours</h3>
            <p className="text-2xl font-bold text-pink-500">{progress.totalHours}</p>
          </div>
        </div>
      </div>
      
      <div className="bg-white dark:bg-slate-800 rounded-xl p-6 shadow-lg">
        <div className="flex items-center space-x-3">
          <Book className="w-8 h-8 text-blue-500" />
          <div>
            <h3 className="text-lg font-semibold dark:text-white">Concepts Completed</h3>
            <p className="text-2xl font-bold text-blue-500">
              {progress.completedConcepts}/{progress.totalConcepts}
            </p>
          </div>
        </div>
      </div>
      
      <div className="bg-white dark:bg-slate-800 rounded-xl p-6 shadow-lg">
        <div className="flex items-center space-x-3">
          <Code className="w-8 h-8 text-purple-500" />
          <div>
            <h3 className="text-lg font-semibold dark:text-white">Progress</h3>
            <div className="w-full bg-gray-200 rounded-full h-2.5 mt-2">
              <div 
                className="bg-purple-500 h-2.5 rounded-full"
                style={{ width: `${(progress.completedConcepts / progress.totalConcepts) * 100}%` }}
              ></div>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};